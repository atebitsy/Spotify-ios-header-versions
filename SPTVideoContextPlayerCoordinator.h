//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMEventObserver-Protocol.h"
#import "SPTCarDetectionStateObserver-Protocol.h"
#import "SPTVideoCoordinatorCosmosReceiverDelegate-Protocol.h"

@class NSString, NSTimer, SPTVideoCoordinatorCosmosReceiver, SPTVideoCoordinatorCosmosSender, SPTVideoCoordinatorPlayerInterruptor, SPTVideoPlaybackStateFactory, SPTVideoStartCommand;
@protocol BMBetamaxPlayer, BMEventObserverFactory, BMPlaybackIdentity, BMVideoSurfaceManager, OS_dispatch_queue, SPTCarDetector, SPTVideoContextPlayerCoordinatorErrorHandler, SPTVideoFeaturePlayerFactory;

@interface SPTVideoContextPlayerCoordinator : NSObject <SPTVideoCoordinatorCosmosReceiverDelegate, BMEventObserver, SPTCarDetectionStateObserver>
{
    _Bool _stalled;
    id <BMBetamaxPlayer> _player;
    id <BMVideoSurfaceManager> _surfaceManager;
    id <SPTVideoFeaturePlayerFactory> _playerFactory;
    id <BMEventObserverFactory> _dynamicEventObserverFactory;
    SPTVideoCoordinatorCosmosReceiver *_cosmosReceiver;
    SPTVideoCoordinatorCosmosSender *_cosmosSender;
    SPTVideoPlaybackStateFactory *_playbackStateFactory;
    id <SPTVideoContextPlayerCoordinatorErrorHandler> _errorHandler;
    id <SPTCarDetector> _carDetector;
    CDUnknownBlockType _appIsBackgroundedStateProvider;
    SPTVideoStartCommand *_deferredStartCommand;
    double _maxAllowedStallTimeout;
    NSTimer *_maxStalledTimer;
    id <BMPlaybackIdentity> _currentIdentity;
    SPTVideoCoordinatorPlayerInterruptor *_playerInterruptor;
}

@property(retain, nonatomic) SPTVideoCoordinatorPlayerInterruptor *playerInterruptor; // @synthesize playerInterruptor=_playerInterruptor;
@property(retain, nonatomic) id <BMPlaybackIdentity> currentIdentity; // @synthesize currentIdentity=_currentIdentity;
@property(retain, nonatomic) NSTimer *maxStalledTimer; // @synthesize maxStalledTimer=_maxStalledTimer;
@property(nonatomic) double maxAllowedStallTimeout; // @synthesize maxAllowedStallTimeout=_maxAllowedStallTimeout;
@property(nonatomic, getter=isStalled) _Bool stalled; // @synthesize stalled=_stalled;
@property(retain, nonatomic) SPTVideoStartCommand *deferredStartCommand; // @synthesize deferredStartCommand=_deferredStartCommand;
@property(copy, nonatomic) CDUnknownBlockType appIsBackgroundedStateProvider; // @synthesize appIsBackgroundedStateProvider=_appIsBackgroundedStateProvider;
@property(retain, nonatomic) id <SPTCarDetector> carDetector; // @synthesize carDetector=_carDetector;
@property(retain, nonatomic) id <SPTVideoContextPlayerCoordinatorErrorHandler> errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) SPTVideoPlaybackStateFactory *playbackStateFactory; // @synthesize playbackStateFactory=_playbackStateFactory;
@property(retain, nonatomic) SPTVideoCoordinatorCosmosSender *cosmosSender; // @synthesize cosmosSender=_cosmosSender;
@property(retain, nonatomic) SPTVideoCoordinatorCosmosReceiver *cosmosReceiver; // @synthesize cosmosReceiver=_cosmosReceiver;
@property(retain, nonatomic) id <BMEventObserverFactory> dynamicEventObserverFactory; // @synthesize dynamicEventObserverFactory=_dynamicEventObserverFactory;
@property(retain, nonatomic) id <SPTVideoFeaturePlayerFactory> playerFactory; // @synthesize playerFactory=_playerFactory;
@property(retain, nonatomic) id <BMVideoSurfaceManager> surfaceManager; // @synthesize surfaceManager=_surfaceManager;
@property(retain, nonatomic) id <BMBetamaxPlayer> player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)carDetector:(id)arg1 didChangeCarConnected:(_Bool)arg2;
- (void)advanceWithReasonStallTimeoutExceeded:(id)arg1;
- (void)didEndPlaybackWithReason:(long long)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didFailWithRecoverableError:(id)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didFailWithFatalError:(id)arg1 atPosition:(double)arg2 timestamp:(double)arg3;
- (void)didStartBufferingAtPosition:(double)arg1 timestamp:(double)arg2;
- (void)didBecomeReadyAtPosition:(double)arg1 timestamp:(double)arg2;
- (void)invalidateStalledTimer;
- (void)maybeCreateStalledTimer;
- (void)resumeCurrentPlaybackAtPosition:(double)arg1;
- (_Bool)shouldResumeCurrentPlaybackWithPlaybackID:(id)arg1;
- (void)setInterruptorWithStartCommand:(id)arg1;
- (void)setDeferredStateWithStartCommand:(id)arg1;
- (id)coordinatorObserverFactory;
- (void)playWithRequest:(id)arg1 options:(id)arg2;
- (void)cosmosReceiver:(id)arg1 receivedPreferredSubtitleCommand:(id)arg2;
- (void)cosmosReceiver:(id)arg1 receivedSeekCommand:(double)arg2;
- (void)cosmosReceiverReceivedResumeCommand:(id)arg1;
- (void)cosmosReceiverReceivedPauseCommand:(id)arg1;
- (void)cosmosReceiverReceivedStopCommand:(id)arg1;
- (void)cosmosReceiver:(id)arg1 receivedStartCommand:(id)arg2;
- (void)unsubscribe;
- (void)subscribe;
- (void)dealloc;
- (id)initWithPlayerFactory:(id)arg1 playbackStateFactory:(id)arg2 dynamicEventObserverFactory:(id)arg3 cosmosReceiver:(id)arg4 cosmosSender:(id)arg5 errorHandler:(id)arg6 carDetector:(id)arg7 appIsBackgroundedStateProvider:(CDUnknownBlockType)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

