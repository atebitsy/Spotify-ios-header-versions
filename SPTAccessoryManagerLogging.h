//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTExternalIntegrationDebugLog, SPTLogCenter;

@interface SPTAccessoryManagerLogging : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTExternalIntegrationDebugLog> _debugLog;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTExternalIntegrationDebugLog> debugLog; // @synthesize debugLog=_debugLog;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void)logStreamEndedForPlaybackID:(id)arg1 withAccessory:(id)arg2;
- (void)logCategorizedAccessory:(id)arg1 isConnected:(_Bool)arg2;
- (id)initWithLogCenter:(id)arg1 debugLog:(id)arg2;

@end

