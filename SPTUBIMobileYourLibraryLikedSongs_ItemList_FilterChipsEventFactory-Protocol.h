//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventFactoryLocation, SPTUBIImpressionEvent, SPTUBIMobileYourLibraryLikedSongs_ItemList_FilterChips_ClearButtonEventFactory, SPTUBIMobileYourLibraryLikedSongs_ItemList_FilterChips_FilterChipEventFactory;

@protocol SPTUBIMobileYourLibraryLikedSongs_ItemList_FilterChipsEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileYourLibraryLikedSongs_ItemList_FilterChips_ClearButtonEventFactory>)clearButtonFactory;
- (id <SPTUBIMobileYourLibraryLikedSongs_ItemList_FilterChips_FilterChipEventFactory>)filterChipFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

