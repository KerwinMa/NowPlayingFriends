//
//  AlbumSongsViewController.h
//  NowPlayingFriends
//
//  Created by Hiroe Shin on 10/08/22.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

#import "MusicPlayerViewController.h"

@interface AlbumSongsViewController : UITableViewController {

  MPMediaItemCollection *album;
  MPMusicPlayerController *musicPlayer;
  MusicPlayerViewController *musicPlayerViewController;
}

@property (nonatomic, retain) MPMediaItemCollection *album;
@property (nonatomic, retain) MPMusicPlayerController *musicPlayer;
@property (nonatomic, retain)  MusicPlayerViewController *musicPlayerViewController;

- (id)initWithAlbum:(MPMediaItemCollection *)newAlbum;

@end