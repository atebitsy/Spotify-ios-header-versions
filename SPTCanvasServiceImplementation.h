//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasIdleMonitorObserverDelegate-Protocol.h"
#import "SPTCanvasService-Protocol.h"
#import "SPTCanvasTestManagerObserver-Protocol.h"

@class NSString, SPTAllocationContext, SPTCanvasContextMenuActionsRegistrar, SPTCanvasForceArtworkManager, SPTCanvasLoadStateTracker, SPTCanvasLogger, SPTCanvasLoggingService, SPTCanvasNowPlayingContentLayerProvider, SPTCanvasNowPlayingContentReloader, SPTCanvasNowPlayingViewState, SPTCanvasSwitchViewControllerManager, SPTCanvasTestManager, SPTCanvasTooltipPresentationManager, SPTCanvasTrackCheckerImplementation;
@protocol CosmosFeature, GaiaFeature, SPContextMenuFeature, SPTContainerService, SPTCoreService, SPTDataSaverService, SPTDebugService, SPTEntityService, SPTFeatureFlaggingService, SPTFreeTierTooltipService, SPTGLUEService, SPTModerationService, SPTNetworkService, SPTNowPlayingContainerIdleMonitorObservable, SPTNowPlayingPlatformService, SPTNowPlayingService, SPTPageRegistrationToken, SPTPlayerFeature, SPTPlaylistPlatformService, SPTSessionService, SPTSettingsFeature, SPTShareFeature, SPTURIDispatchService, SPTVideoFeature, SPTVideoURLAssetLoader;

@interface SPTCanvasServiceImplementation : NSObject <SPTCanvasIdleMonitorObserverDelegate, SPTCanvasTestManagerObserver, SPTCanvasService>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkFeature;
    id <SPTNowPlayingService> _nowPlayingService;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTVideoFeature> _videoFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <GaiaFeature> _gaiaFeature;
    id <SPTDataSaverService> _dataSaverService;
    id <SPTContainerService> _containerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTModerationService> _moderationFeature;
    id <SPTEntityService> _entityService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTFreeTierTooltipService> _tooltipService;
    id <SPTGLUEService> _glueService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <CosmosFeature> _cosmosService;
    id <SPTDebugService> _debugService;
    id <SPTShareFeature> _shareFeature;
    SPTCanvasTestManager *_testManager;
    SPTCanvasTrackCheckerImplementation *_trackChecker;
    SPTCanvasLoggingService *_loggingService;
    SPTCanvasContextMenuActionsRegistrar *_contextMenuActionsRegistrar;
    SPTCanvasTooltipPresentationManager *_canvasToolTipManager;
    SPTCanvasNowPlayingViewState *_nowPlayingState;
    SPTCanvasForceArtworkManager *_forceArtworkManager;
    id <SPTNowPlayingContainerIdleMonitorObservable> _idleMonitorObservable;
    id <SPTVideoURLAssetLoader> _canvasVideoAssetLoader;
    SPTCanvasLogger *_canvasLogger;
    SPTCanvasNowPlayingContentLayerProvider *_nowPlayingContentLayerProvider;
    SPTCanvasLoadStateTracker *_canvasLoadStateTracker;
    SPTCanvasSwitchViewControllerManager *_canvasSwitchManager;
    id <SPTPageRegistrationToken> _canvasPlaylistRegistration;
    SPTCanvasNowPlayingContentReloader *_canvasContentReloader;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTCanvasNowPlayingContentReloader *canvasContentReloader; // @synthesize canvasContentReloader=_canvasContentReloader;
@property(retain, nonatomic) id <SPTPageRegistrationToken> canvasPlaylistRegistration; // @synthesize canvasPlaylistRegistration=_canvasPlaylistRegistration;
@property(retain, nonatomic) SPTCanvasSwitchViewControllerManager *canvasSwitchManager; // @synthesize canvasSwitchManager=_canvasSwitchManager;
@property(retain, nonatomic) SPTCanvasLoadStateTracker *canvasLoadStateTracker; // @synthesize canvasLoadStateTracker=_canvasLoadStateTracker;
@property(retain, nonatomic) SPTCanvasNowPlayingContentLayerProvider *nowPlayingContentLayerProvider; // @synthesize nowPlayingContentLayerProvider=_nowPlayingContentLayerProvider;
@property(retain, nonatomic) SPTCanvasLogger *canvasLogger; // @synthesize canvasLogger=_canvasLogger;
@property(retain, nonatomic) id <SPTVideoURLAssetLoader> canvasVideoAssetLoader; // @synthesize canvasVideoAssetLoader=_canvasVideoAssetLoader;
@property(retain, nonatomic) id <SPTNowPlayingContainerIdleMonitorObservable> idleMonitorObservable; // @synthesize idleMonitorObservable=_idleMonitorObservable;
@property(retain, nonatomic) SPTCanvasForceArtworkManager *forceArtworkManager; // @synthesize forceArtworkManager=_forceArtworkManager;
@property(retain, nonatomic) SPTCanvasNowPlayingViewState *nowPlayingState; // @synthesize nowPlayingState=_nowPlayingState;
@property(retain, nonatomic) SPTCanvasTooltipPresentationManager *canvasToolTipManager; // @synthesize canvasToolTipManager=_canvasToolTipManager;
@property(retain, nonatomic) SPTCanvasContextMenuActionsRegistrar *contextMenuActionsRegistrar; // @synthesize contextMenuActionsRegistrar=_contextMenuActionsRegistrar;
@property(retain, nonatomic) SPTCanvasLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(retain, nonatomic) SPTCanvasTrackCheckerImplementation *trackChecker; // @synthesize trackChecker=_trackChecker;
@property(retain, nonatomic) SPTCanvasTestManager *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFreeTierTooltipService> tooltipService; // @synthesize tooltipService=_tooltipService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
@property(nonatomic) __weak id <SPTModerationService> moderationFeature; // @synthesize moderationFeature=_moderationFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTDataSaverService> dataSaverService; // @synthesize dataSaverService=_dataSaverService;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTVideoFeature> videoFeature; // @synthesize videoFeature=_videoFeature;
@property(nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(nonatomic) __weak id <SPTNowPlayingService> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (void)registerDebugMenuActions;
- (id)provideCanvasSettingsSection:(id)arg1;
- (void)registerCanvasSettingsSection;
- (void)registerContextMenuActions;
- (void)registerCanvasDecorator;
- (void)unregisterNowPlayingContentLayer;
- (void)registerNowPlayingContentLayer;
- (void)disableCanvas;
- (void)enableCanvas;
- (void)didChangeCanvasEnabled:(id)arg1;
- (void)unloadCanvasSwitchManager;
- (void)loadCanvasSwitchManager;
- (void)unloadCanvasLogger;
- (void)loadCanvasLogger;
- (void)unloadTestManager;
- (void)loadTestManager;
- (void)unload;
- (id)canvasPlaylistViewController:(id)arg1;
- (void)unregisterCanvasPlaylistProvider;
- (void)registerCanvasPlaylistProvider;
- (void)registerShareVideoDataProvider;
- (void)load;
- (void)configureWithServices:(id)arg1;
- (void)unRegisterNowPlayingIdleMonitorWithObserver:(id)arg1;
- (void)registerNowPlayingIdleMonitorWithObserver:(id)arg1;
- (id)createCanvasContentLayerViewControllerViewModelFactoryWithAssetLoader:(id)arg1;
- (id)createCanvasContentLayerViewControllerViewModelFactory;
- (_Bool)isCanvasEnabled;
- (id)provideCanvasCacheManager;
- (id)provideCanvasViewControllerFactory;
- (id)provideCanvasTrackChecker;
- (id)provideCanvasVideoLoaderFactory;
- (id)provideCanvasMetadataResolverFactory;
- (id)createImageResolverFactory;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

