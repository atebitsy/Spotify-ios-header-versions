//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIInteractionEvent, SPTUBIMobileYourLibraryLikedSongs_ItemList_RecommendedPreviewItem_AlbumCoverEventFactory, SPTUBIMobileYourLibraryLikedSongs_ItemList_RecommendedPreviewItem_ContextMenuButtonEventFactory, SPTUBIMobileYourLibraryLikedSongs_ItemList_RecommendedPreviewItem_HeartButtonEventFactory, SPTUBIMobileYourLibraryLikedSongs_ItemList_RecommendedPreviewItem_HideButtonEventFactory;

@protocol SPTUBIMobileYourLibraryLikedSongs_ItemList_RecommendedPreviewItemEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)longHitUiReveal;
- (id <SPTUBIInteractionEvent>)hitPlayWithItemToBePlayed:(NSURL *)arg1;
- (id <SPTUBIMobileYourLibraryLikedSongs_ItemList_RecommendedPreviewItem_HideButtonEventFactory>)hideButtonFactory;
- (id <SPTUBIMobileYourLibraryLikedSongs_ItemList_RecommendedPreviewItem_HeartButtonEventFactory>)heartButtonFactory;
- (id <SPTUBIMobileYourLibraryLikedSongs_ItemList_RecommendedPreviewItem_ContextMenuButtonEventFactory>)contextMenuButtonFactory;
- (id <SPTUBIMobileYourLibraryLikedSongs_ItemList_RecommendedPreviewItem_AlbumCoverEventFactory>)albumCoverFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

