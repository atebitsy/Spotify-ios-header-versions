//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventLocation, SPTUBIMobileYourLibraryArtists_AlphabeticIndexEventFactory, SPTUBIMobileYourLibraryArtists_EmptyTextFilterViewEventFactory, SPTUBIMobileYourLibraryArtists_EmptyViewEventFactory, SPTUBIMobileYourLibraryArtists_FilterAndSortEventFactory, SPTUBIMobileYourLibraryArtists_ItemListEventFactory, SPTUBIMobileYourLibraryArtists_QuickScrollEventFactory, SPTUBIMobileYourLibraryArtists_RecommendedItemListEventFactory, SPTUBIMobileYourLibraryArtists_SortFilterSheetEventFactory;

@protocol SPTUBIMobileYourLibraryArtistsEventFactory <NSObject>
- (id <SPTUBIMobileYourLibraryArtists_SortFilterSheetEventFactory>)sortFilterSheetFactory;
- (id <SPTUBIMobileYourLibraryArtists_EmptyTextFilterViewEventFactory>)emptyTextFilterViewFactory;
- (id <SPTUBIMobileYourLibraryArtists_EmptyViewEventFactory>)emptyViewFactory;
- (id <SPTUBIMobileYourLibraryArtists_AlphabeticIndexEventFactory>)alphabeticIndexFactory;
- (id <SPTUBIMobileYourLibraryArtists_QuickScrollEventFactory>)quickScrollFactory;
- (id <SPTUBIMobileYourLibraryArtists_RecommendedItemListEventFactory>)recommendedItemListFactory;
- (id <SPTUBIMobileYourLibraryArtists_ItemListEventFactory>)itemListFactory;
- (id <SPTUBIMobileYourLibraryArtists_FilterAndSortEventFactory>)filterAndSortFactory;
- (id <SPTUBIEventLocation>)_location;
@end

