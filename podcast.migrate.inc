<?php
class PodcastMigration extends Migration {
  public function __construct() {
    parent::__construct(MigrateGroup::getInstance('podcast'));
    $fields = array(
                    'id' => 'Unique ID for each source data row',
                    'title' => 'the title field',
                    'tags' => 'tags',
                    'audio' => 'path to an audio file',
                    'image' => 'image for an episode',
                    'show' => 'node-id to show',
                    'date' => 'the publishing date',
                    'number' => 'the episode number',
                    'uid' => 'Owner of the node',
                    );

    // Second parameter is the unique ID from the source file
    $this->source = new MigrateSourceJSON('/tmp/ugw/data.json', 'id', $fields);

    $this->destination = new MigrateDestinationNode('episode');

    $this->map = new MigrateSQLMap($this->machineName,
                                   array(
                                         'id' => array('type' => 'int',
                                                         'unsigned' => TRUE,
                                                         'not null' => TRUE,
                                                         )
                                         ),
                                   MigrateDestinationNode::getKeySchema()
                                   );
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('created','date');
    $this->addFieldMapping('field__episode__number','number');
    $this->addFieldMapping('field__episode__tags','tags')->separator(',');
    $this->addFieldMapping('field_episode_audio','audio')
      ->arguments(array('file_function' => 'file_copy', 'file_replace' => FILE_EXISTS_REPLACE));
    $this->addFieldMapping('field__episode__image','image')
      ->arguments(array('file_function' => 'file_copy', 'file_replace' => FILE_EXISTS_REPLACE));
    $this->addFieldMapping('field__episode__show','show');
  }
}