//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRadioService-Protocol.h"
#import "SPTService-Protocol.h"
#import "SPTURISubtypeHandler-Protocol.h"

@class NSString, SPTAllocationContext, SPTInfinitePlaybackManager, SPTPersistentCache, SPTRadioHubManager, SPTRadioLogger, SPTRadioPlaybackService, SPTRadioStationsService;
@protocol CosmosFeature, GaiaFeature, NSObject, SPContextMenuFeature, SPTCollectionLogger, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTDataSaverService, SPTExplicitContentService, SPTFreeTierService, SPTGLUEService, SPTHubFrameworkService, SPTLocalSettings, SPTNavigationFeature, SPTNetworkService, SPTPerformanceMetricsService, SPTPlayer, SPTPlayerFeature, SPTRadioAPI, SPTRadioManager, SPTRadioRemoteConfigService, SPTRadioTestManager, SPTRecentlyPlayedService, SPTSessionService, SPTSettingsFeature, SPTShelfService, SPTURIDispatchService, SPTVoiceService, _TtP15AutoplayFeature18SPTAutoplayService_;

@interface SPTRadioServiceImplementation : NSObject <SPTService, SPTRadioService, SPTURISubtypeHandler>
{
    _Bool _radioRegisteredWithRecentlyPlayed;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTCoreService> _coreService;
    id <CosmosFeature> _cosmosService;
    id <SPTDataSaverService> _dataSaverService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTFreeTierService> _freeTierService;
    id <GaiaFeature> _gaiaFeature;
    id <SPTGLUEService> _glueService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTNavigationFeature> _navigationService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTPlayerFeature> _playbackFeature;
    id <SPTRadioRemoteConfigService> _radioRemoteConfigService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTShelfService> _shelfService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTVoiceService> _voiceService;
    id <_TtP15AutoplayFeature18SPTAutoplayService_> _autoPlayService;
    id <NSObject> _clearPersistentCacheOnLogoutToken;
    SPTRadioHubManager *_hubManager;
    SPTInfinitePlaybackManager *_infinitePlaybackManager;
    id <SPTCollectionLogger> _logger;
    SPTRadioLogger *_loggingService;
    id <SPTLocalSettings> _localSettings;
    SPTPersistentCache *_persistentCache;
    id <SPTRadioAPI> _radioAPI;
    SPTRadioPlaybackService *_playbackService;
    id <SPTPlayer> _player;
    id <SPTRadioManager> _radioManager;
    SPTRadioStationsService *_stationsService;
    id <SPTRadioTestManager> _testManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTRadioTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTRadioStationsService *stationsService; // @synthesize stationsService=_stationsService;
@property(retain, nonatomic) id <SPTRadioManager> radioManager; // @synthesize radioManager=_radioManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) id <SPTRadioAPI> radioAPI; // @synthesize radioAPI=_radioAPI;
@property(retain, nonatomic) SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTRadioLogger *loggingService; // @synthesize loggingService=_loggingService;
@property(retain, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(nonatomic, getter=isRadioRegisteredWithRecentlyPlayed) _Bool radioRegisteredWithRecentlyPlayed; // @synthesize radioRegisteredWithRecentlyPlayed=_radioRegisteredWithRecentlyPlayed;
@property(retain, nonatomic) SPTInfinitePlaybackManager *infinitePlaybackManager; // @synthesize infinitePlaybackManager=_infinitePlaybackManager;
@property(retain, nonatomic) SPTRadioHubManager *hubManager; // @synthesize hubManager=_hubManager;
@property(nonatomic) __weak id <NSObject> clearPersistentCacheOnLogoutToken; // @synthesize clearPersistentCacheOnLogoutToken=_clearPersistentCacheOnLogoutToken;
@property(nonatomic) __weak id <_TtP15AutoplayFeature18SPTAutoplayService_> autoPlayService; // @synthesize autoPlayService=_autoPlayService;
@property(nonatomic) __weak id <SPTVoiceService> voiceService; // @synthesize voiceService=_voiceService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTRadioRemoteConfigService> radioRemoteConfigService; // @synthesize radioRemoteConfigService=_radioRemoteConfigService;
@property(nonatomic) __weak id <SPTPlayerFeature> playbackFeature; // @synthesize playbackFeature=_playbackFeature;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTDataSaverService> dataSaverService; // @synthesize dataSaverService=_dataSaverService;
@property(nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (id)provideInfinitePlaybackSettingsSection:(id)arg1;
- (void)registerInfinitePlaybackSettingsSection;
- (id)provideRadioHubViewControllerWithURI:(id)arg1 context:(id)arg2;
- (id)radioContextMenuTask:(id)arg1 logContext:(id)arg2 sourceURL:(id)arg3;
- (id)createFormatListMapperErrorWhenSeedsHaveNoPool:(_Bool)arg1;
- (id)provideCollectionLogger;
- (id)provideRadioTestManager;
- (id)providePersistentCache;
- (void)registerRadioWithRecentlyPlayed;
- (id)providePlayerWithReferrer:(id)arg1;
- (id)providePlayer;
- (id)providePlaybackService;
- (id)provideAPI;
- (id)provideStationsService;
- (id)provideRadioManager;
- (id)provideStationViewController:(id)arg1 context:(id)arg2;
- (id)provideRadioLoggingService;
- (id)radioStationViewModelForURL:(id)arg1;
- (id)radioAppURL;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

