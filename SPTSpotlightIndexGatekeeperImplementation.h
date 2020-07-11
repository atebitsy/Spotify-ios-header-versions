//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSpotlightIndexGatekeeper-Protocol.h"

@class NSString, NSUserDefaults;
@protocol SPTReachabilityMonitor;

@interface SPTSpotlightIndexGatekeeperImplementation : NSObject <SPTSpotlightIndexGatekeeper>
{
    _Bool _isIndexing;
    NSUserDefaults *_userDefaults;
    id <SPTReachabilityMonitor> _reachability;
}

@property(nonatomic) _Bool isIndexing; // @synthesize isIndexing=_isIndexing;
@property(readonly, nonatomic) id <SPTReachabilityMonitor> reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (void)indexDidDrop:(id)arg1;
- (void)indexDidEndIndexing:(id)arg1 error:(id)arg2;
- (void)indexDidStartIndexing:(id)arg1;
- (_Bool)shouldUpdateIndex:(id)arg1;
- (id)initWithUserDefaults:(id)arg1 reachability:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
