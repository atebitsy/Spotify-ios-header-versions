//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistItemsViewModel-Protocol.h"
#import "SPTFreeTierPlaylistModelObserver-Protocol.h"

@class NSString;
@protocol SPTFreeTierPlaylistItemsViewModel><SPTFreeTierPlaylistModelObserver;

@interface SPTFreeTierPlaylistPlaylistItemsViewModelDecorator : NSObject <SPTFreeTierPlaylistItemsViewModel, SPTFreeTierPlaylistModelObserver>
{
    id <SPTFreeTierPlaylistItemsViewModel><SPTFreeTierPlaylistModelObserver> _decoratedObject;
}

@property(retain, nonatomic) id <SPTFreeTierPlaylistItemsViewModel><SPTFreeTierPlaylistModelObserver> decoratedObject; // @synthesize decoratedObject=_decoratedObject;
- (void).cxx_destruct;
- (void)freeTierPlaylistModel:(id)arg1 playlistModelEntityDidChange:(id)arg2;
- (void)freeTierPlaylistModel:(id)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistModel:(id)arg1 error:(id)arg2;
- (id)trackViewModelAtIndex:(long long)arg1;
- (id)trackEntityAtIndex:(long long)arg1;
- (id)indexForRowId:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfLoadedItems;
@property(readonly, nonatomic) unsigned long long numberOfItems;
- (id)initWithItemsViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
