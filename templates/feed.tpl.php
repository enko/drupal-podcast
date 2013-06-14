<?xml version="1.0" encoding="UTF-8"?>
<rss version="2.0"
	xmlns:content="http://purl.org/rss/1.0/modules/content/"
	xmlns:wfw="http://wellformedweb.org/CommentAPI/"
	xmlns:dc="http://purl.org/dc/elements/1.1/"
	xmlns:atom="http://www.w3.org/2005/Atom"
	xmlns:sy="http://purl.org/rss/1.0/modules/syndication/"
	xmlns:slash="http://purl.org/rss/1.0/modules/slash/"
	xmlns:itunes="http://www.itunes.com/dtds/podcast-1.0.dtd"
	xmlns:media="http://search.yahoo.com/mrss/"
>

  <channel>
    <title><?php echo $node->title ?></title>
    <atom:link href="<?php echo url('node/'.$node->nid) ?>/feed" rel="self" type="application/rss+xml" />
    <link><?php echo url('node/'.$node->nid) ?></link>
    <description><?php $node->body ?></description>
    <lastBuildDate><?php echo date('r'); ?></lastBuildDate>
    <language>de-DE</language>
    <sy:updatePeriod>hourly</sy:updatePeriod>
    <sy:updateFrequency>1</sy:updateFrequency>
    <generator>Drupal</generator>
    <copyright>Copyright © <?php echo $node->title ?> <?php echo date('Y'); ?> </copyright>
    <managingEditor>tim@bandenkrieg.hacked.jp (Tim Schumacher)</managingEditor>
    <webMaster>tim@bandenkrieg.hacked.jp (Tim Schumacher)</webMaster>
    <ttl>1440</ttl>
    <image>
      <url>http://workingdraft.de/wp-content/uploads/2012/07/icon-rss.png</url>
      <title>Working Draft</title>
      <link>http://workingdraft.de</link>
      <width>144</width>
      <height>144</height>
    </image>
    <itunes:new-feed-url>http://workingdraft.de/?feed=podcast</itunes:new-feed-url>
    <itunes:subtitle>Eine neue Revision eures Lieblingspodcasts™</itunes:subtitle>
    <itunes:summary>Wöchentlicher News-Podcast für Webdesigner und -entwickler</itunes:summary>
    <itunes:keywords>webdesign, webentwicklung, nerd, nerds, javascript, html5, css, html</itunes:keywords>
    <itunes:category text="Technology" />
    <itunes:category text="Technology">
      <itunes:category text="Tech News" />
    </itunes:category>
    <itunes:category text="Technology">
      <itunes:category text="Software How-To" />
    </itunes:category>
    <itunes:author>Markus Schlegel, Peter Kröner, Hans Christian Reinl, Kahlil Lechelt, Rodney Rehm und Christian Schaefer</itunes:author>
    <itunes:owner>
      <itunes:name>Markus Schlegel, Peter Kröner, Hans Christian Reinl, Kahlil Lechelt, Rodney Rehm und Christian Schaefer</itunes:name>
      <itunes:email>comments@workingdraft.de</itunes:email>
    </itunes:owner>
    <itunes:block>no</itunes:block>
    <itunes:explicit>no</itunes:explicit>
    <itunes:image href="http://workingdraft.de/wp-content/uploads/2013/03/Working-Draft-Logo-1400x1400.png" />
    <item>
      <title>Revision 123: Cargo-Culting in JS, localStorage und Prerendering</title>
      <link>http://workingdraft.de/123/</link>
      <comments>http://workingdraft.de/123/#comments</comments>
      <pubDate>Sun, 09 Jun 2013 20:56:46 +0000</pubDate>
      <dc:creator>Hans</dc:creator>
      <category><![CDATA[Uncategorized]]></category>

      <guid isPermaLink="false">http://workingdraft.de/?p=1963</guid>
      <description><![CDATA[]]></description>
      <content:encoded><![CDATA[]]></content:encoded>
      <!-- wfw:commentRss>http://workingdraft.de/123/feed/</wfw:commentRss -->
      <!-- slash:comments>3</slash:comments -->
      <enclosure url="http://workingdraft.de/podpress_trac/feed/1963/0/wd-123.mp3" length="38819491" type="audio/mpeg" />
      <itunes:duration>0:53:53</itunes:duration>
      <itunes:subtitle></itunes:subtitle>
      <itunes:summary></itunes:summary>
      <itunes:keywords>Uncategorized</itunes:keywords>
      <itunes:author>Markus Schlegel, Peter Kröner, Hans Christian Reinl, Kahlil Lechelt, Rodney Rehm und Christian Schaefer</itunes:author>
      <itunes:explicit>no</itunes:explicit>
      <itunes:block>no</itunes:block>
</item>
</channel>
</rss>
