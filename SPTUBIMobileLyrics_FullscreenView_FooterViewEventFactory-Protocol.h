//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventLocation, SPTUBIMobileLyrics_FullscreenView_FooterView_ContextMenuButtonEventFactory, SPTUBIMobileLyrics_FullscreenView_FooterView_PlayPauseButtonEventFactory, SPTUBIMobileLyrics_FullscreenView_FooterView_VocalRemovalButtonEventFactory;

@protocol SPTUBIMobileLyrics_FullscreenView_FooterViewEventFactory <NSObject>
- (id <SPTUBIMobileLyrics_FullscreenView_FooterView_ContextMenuButtonEventFactory>)contextMenuButtonFactory;
- (id <SPTUBIMobileLyrics_FullscreenView_FooterView_PlayPauseButtonEventFactory>)playPauseButtonFactory;
- (id <SPTUBIMobileLyrics_FullscreenView_FooterView_VocalRemovalButtonEventFactory>)vocalRemovalButtonFactory;
- (id <SPTUBIEventLocation>)_location;
@end

