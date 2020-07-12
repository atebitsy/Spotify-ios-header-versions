//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTCosmosDictionaryDataLoader, SPTCosmosDictionaryDataLoaderRequestToken, SPTProfileUserData, SPTSocialListeningDataLoaderDelegate, SPTSocialListeningTestManager;

@interface SPTSocialListeningDataLoader : NSObject <SPTDataLoaderDelegate>
{
    _Bool _isLoading;
    id <SPTSocialListeningDataLoaderDelegate> _delegate;
    SPTDataLoader *_dataLoader;
    id <SPTCosmosDictionaryDataLoader> _cosmosDictionaryDataLoader;
    id <SPTProfileUserData> _currentUserData;
    id <SPTSocialListeningTestManager> _testManager;
    id <SPTCosmosDictionaryDataLoaderRequestToken> _sessionStateSubscriptionToken;
    NSString *_physicalDeviceID;
}

@property(copy, nonatomic) NSString *physicalDeviceID; // @synthesize physicalDeviceID=_physicalDeviceID;
@property _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) id <SPTCosmosDictionaryDataLoaderRequestToken> sessionStateSubscriptionToken; // @synthesize sessionStateSubscriptionToken=_sessionStateSubscriptionToken;
@property(readonly, nonatomic) id <SPTSocialListeningTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTProfileUserData> currentUserData; // @synthesize currentUserData=_currentUserData;
@property(readonly, nonatomic) id <SPTCosmosDictionaryDataLoader> cosmosDictionaryDataLoader; // @synthesize cosmosDictionaryDataLoader=_cosmosDictionaryDataLoader;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTSocialListeningDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)getExposedDevices;
- (void)handleSocialDeviceResponse:(id)arg1 withDeviceIds:(id)arg2;
- (void)getSocialDeviceSessions:(id)arg1;
- (void)disableSocialDevice:(id)arg1;
- (void)enableSocialDevice:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)setPhysicalDeviceIDState:(id)arg1;
- (void)setCoreSocialListeningState:(_Bool)arg1;
- (void)subscribeToSessionUpdates;
- (id)sessionTypeQueryParameter;
- (void)performRequestWithURL:(id)arg1 requestMethod:(long long)arg2 expectedResponseType:(unsigned long long)arg3;
- (void)cancelRequests;
- (void)leaveSession:(id)arg1;
- (void)deleteSession:(id)arg1;
- (void)joinSession:(id)arg1;
- (void)getCurrentSession;
- (void)getOrCreateSession;
- (id)initWithDataLoader:(id)arg1 cosmosDictionaryDataLoader:(id)arg2 currentUserData:(id)arg3 testManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

