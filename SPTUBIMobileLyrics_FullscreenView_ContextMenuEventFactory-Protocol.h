//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventLocation, SPTUBIMobileLyrics_FullscreenView_ContextMenu_LessVocalButtonEventFactory, SPTUBIMobileLyrics_FullscreenView_ContextMenu_MoreVocalButtonEventFactory, SPTUBIMobileLyrics_FullscreenView_ContextMenu_ReportButtonEventFactory;

@protocol SPTUBIMobileLyrics_FullscreenView_ContextMenuEventFactory <NSObject>
- (id <SPTUBIMobileLyrics_FullscreenView_ContextMenu_ReportButtonEventFactory>)reportButtonFactory;
- (id <SPTUBIMobileLyrics_FullscreenView_ContextMenu_LessVocalButtonEventFactory>)lessVocalButtonFactory;
- (id <SPTUBIMobileLyrics_FullscreenView_ContextMenu_MoreVocalButtonEventFactory>)moreVocalButtonFactory;
- (id <SPTUBIEventLocation>)_location;
@end

