//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdsBaseRegistryObserver-Protocol.h"

@class NSString, SPTAdFeatureFlagChecks, SPTAdPlayerObservable, SPTAdVoiceManager, SPTNowPlayingAudioAdMode;
@protocol SPTAccessoryStateManager, SPTAdsBaseCosmosBridge, SPTAdsBaseRegistry, SPTEventSender, SPTLinkDispatcher, SPTVoiceLibraryService, SPTVoiceLibrarySession;

@interface SPTAdVoiceSession : NSObject <SPTAdsBaseRegistryObserver>
{
    id <SPTAdsBaseRegistry> _adRegistry;
    id <SPTAdsBaseCosmosBridge> _cosmosBridge;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTVoiceLibrarySession> _voiceSession;
    id <SPTVoiceLibraryService> _voiceService;
    SPTAdVoiceManager *_adVoiceManager;
    SPTNowPlayingAudioAdMode *_audioAdMode;
    SPTAdPlayerObservable *_playerObserver;
    SPTAdFeatureFlagChecks *_featureFlagChecker;
    id <SPTAccessoryStateManager> _accessoryStateManager;
    id <SPTEventSender> _eventSender;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(retain, nonatomic) id <SPTAccessoryStateManager> accessoryStateManager; // @synthesize accessoryStateManager=_accessoryStateManager;
@property(retain, nonatomic) SPTAdFeatureFlagChecks *featureFlagChecker; // @synthesize featureFlagChecker=_featureFlagChecker;
@property(retain, nonatomic) SPTAdPlayerObservable *playerObserver; // @synthesize playerObserver=_playerObserver;
@property(retain, nonatomic) SPTNowPlayingAudioAdMode *audioAdMode; // @synthesize audioAdMode=_audioAdMode;
@property(retain, nonatomic) SPTAdVoiceManager *adVoiceManager; // @synthesize adVoiceManager=_adVoiceManager;
@property(nonatomic) __weak id <SPTVoiceLibraryService> voiceService; // @synthesize voiceService=_voiceService;
@property(retain, nonatomic) id <SPTVoiceLibrarySession> voiceSession; // @synthesize voiceSession=_voiceSession;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTAdsBaseCosmosBridge> cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
@property(nonatomic) __weak id <SPTAdsBaseRegistry> adRegistry; // @synthesize adRegistry=_adRegistry;
- (id)createVoiceSessionWithAdEntity:(id)arg1;
- (void)adRegistry:(id)arg1 didProcessAdEntity:(id)arg2 event:(long long)arg3;
- (void)dealloc;
- (id)initWithAdRegistry:(id)arg1 voiceService:(id)arg2 linkDispatcher:(id)arg3 cosmosBridge:(id)arg4 audioAdMode:(id)arg5 playerObserver:(id)arg6 featureFlagChecker:(id)arg7 accessoryStateManager:(id)arg8 eventSender:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

