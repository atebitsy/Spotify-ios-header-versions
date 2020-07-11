//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationTestManagerService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTExternalIntegrationTestManager, SPTRemoteConfigurationService, SPTSessionService;

@interface SPTExternalIntegrationTestManagerServiceImplementation : NSObject <SPTExternalIntegrationTestManagerService>
{
    id <SPTExternalIntegrationTestManager> _sharedTestManager;
    id <SPTSessionService> _sessionService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(readonly, nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTExternalIntegrationTestManager> sharedTestManager; // @synthesize sharedTestManager=_sharedTestManager;
- (id)provideTestManager;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

