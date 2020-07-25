//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOnDemandSetObserver-Protocol.h"

@class NSString;
@protocol SPTCosmosDictionaryDataLoader, SPTOnDemandSet;

@interface SPTOnDemandCoreSynchronizer : NSObject <SPTOnDemandSetObserver>
{
    _Bool _synchronizing;
    id <SPTOnDemandSet> _onDemandSet;
    id <SPTCosmosDictionaryDataLoader> _cosmosDataLoader;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isSynchronizing) _Bool synchronizing; // @synthesize synchronizing=_synchronizing;
@property(retain, nonatomic) id <SPTCosmosDictionaryDataLoader> cosmosDataLoader; // @synthesize cosmosDataLoader=_cosmosDataLoader;
@property(retain, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
- (void)onDemandSetDidUpdate:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithOnDemandSet:(id)arg1 cosmosDataLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

