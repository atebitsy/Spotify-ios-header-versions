//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileYourLibraryAlbums_RecommendedItemList_Item_ItemActionEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileYourLibraryAlbums_RecommendedItemList_Item_ItemActionEventFactoryImplementation : NSObject <SPTUBIMobileYourLibraryAlbums_RecommendedItemList_Item_ItemActionEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithUri:(id)arg1 components:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)hitLikeWithItemToBeLiked:(id)arg1;
- (id)_location;
- (id)initWithUri:(id)arg1 components:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

