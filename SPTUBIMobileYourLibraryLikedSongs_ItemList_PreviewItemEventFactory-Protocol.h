//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventLocation, SPTUBIInteractionEvent, SPTUBIMobileYourLibraryLikedSongs_ItemList_PreviewItem_AlbumCoverEventFactory, SPTUBIMobileYourLibraryLikedSongs_ItemList_PreviewItem_ContextMenuButtonEventFactory, SPTUBIMobileYourLibraryLikedSongs_ItemList_PreviewItem_HeartButtonEventFactory;

@protocol SPTUBIMobileYourLibraryLikedSongs_ItemList_PreviewItemEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)longHitUiReveal;
- (id <SPTUBIInteractionEvent>)hitPauseWithItemToBePaused:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitPlayWithItemToBePlayed:(NSURL *)arg1;
- (id <SPTUBIMobileYourLibraryLikedSongs_ItemList_PreviewItem_HeartButtonEventFactory>)heartButtonFactory;
- (id <SPTUBIMobileYourLibraryLikedSongs_ItemList_PreviewItem_ContextMenuButtonEventFactory>)contextMenuButtonFactory;
- (id <SPTUBIMobileYourLibraryLikedSongs_ItemList_PreviewItem_AlbumCoverEventFactory>)albumCoverFactory;
- (id <SPTUBIEventLocation>)_location;
@end

