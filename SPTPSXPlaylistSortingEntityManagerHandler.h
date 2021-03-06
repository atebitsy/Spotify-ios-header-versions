//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionSortingEntityManagerHandler-Protocol.h"

@class NSString;
@protocol SPTLocalSettings;

@interface SPTPSXPlaylistSortingEntityManagerHandler : NSObject <SPTCollectionSortingEntityManagerHandler>
{
    id <SPTLocalSettings> _localSettings;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (id)collectionSortingEntityManagerRetrieveSortingDictionary;
- (void)collectionSortingEntityManagerStoreSortingDictionary:(id)arg1;
- (_Bool)handleSortingEntityURL:(id)arg1;
- (id)initWithLocalSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

