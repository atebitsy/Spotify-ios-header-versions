//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventLocation, SPTUBIMobileNowPlayingViewDefault_TopBarContainer_CloseButtonEventFactory, SPTUBIMobileNowPlayingViewDefault_TopBarContainer_ContextMenuButtonEventFactory, SPTUBIMobileNowPlayingViewDefault_TopBarContainer_PlaybackSourceLabelEventFactory;

@protocol SPTUBIMobileNowPlayingViewDefault_TopBarContainerEventFactory <NSObject>
- (id <SPTUBIMobileNowPlayingViewDefault_TopBarContainer_ContextMenuButtonEventFactory>)contextMenuButtonFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_TopBarContainer_PlaybackSourceLabelEventFactory>)playbackSourceLabelFactory;
- (id <SPTUBIMobileNowPlayingViewDefault_TopBarContainer_CloseButtonEventFactory>)closeButtonFactory;
- (id <SPTUBIEventLocation>)_location;
@end

