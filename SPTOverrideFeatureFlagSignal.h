//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTFeatureFlagSignalImplementation.h"

#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagSignal;

@interface SPTOverrideFeatureFlagSignal : SPTFeatureFlagSignalImplementation <SPTFeatureFlagSignalObserver>
{
    id <SPTFeatureFlagSignal> _baseSignal;
    id <SPTFeatureFlagSignal> _overrideSignal;
    long long _baseState;
    long long _overrideState;
}

- (void).cxx_destruct;
@property(nonatomic) long long overrideState; // @synthesize overrideState=_overrideState;
@property(nonatomic) long long baseState; // @synthesize baseState=_baseState;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> overrideSignal; // @synthesize overrideSignal=_overrideSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> baseSignal; // @synthesize baseSignal=_baseSignal;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)dealloc;
- (id)initWithBaseSignal:(id)arg1 overrideSignal:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

