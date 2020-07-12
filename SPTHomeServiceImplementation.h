//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTUIPageService.h"

#import "SPTHomeService-Protocol.h"

@class NSString, SPTAllocationContext, SPTHomeContentCache, SPTHomeHubManager;
@protocol SPTCreatePlaylistService, SPTFeatureFlagFactory, SPTFeedHeartBeatManager, SPTFreeTierTasteOnboardingService, SPTFreeTierUIService, SPTGLUEService, SPTHomeTestManager, SPTHomeUIService, SPTHubFrameworkService, SPTNavigationFeature, SPTNetworkService, SPTOfflineService, SPTOnDemandService, SPTPlayerFeature, SPTPodcastUIService, SPTRecentlyPlayedService, SPTRemoteConfigurationService, SPTSeedASessionService, SPTSessionService, SPTShareFeature, SPTSnackbarService, SPTUBIHubsUtilities, SPTUBIService, SPTURIDispatchService, _TtP17FollowFeedFeature20SPTFollowFeedService_, _TtP19CarDetectionFeature22SPTCarDetectionService_, _TtP23ListeningHistoryFeature26SPTListeningHistoryService_;

@interface SPTHomeServiceImplementation : SPTUIPageService <SPTHomeService>
{
    id <SPTGLUEService> _glueService;
    id <SPTHubFrameworkService> _hubService;
    id <SPTSessionService> _clientSessionService;
    id <SPTFreeTierUIService> _freeTierUIService;
    id <SPTHomeUIService> _homeUIService;
    id <SPTNavigationFeature> _navigationFeature;
    id <SPTOfflineService> _offlineService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTPlayerFeature> _playerService;
    id <SPTPodcastUIService> _podcastUIService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTNetworkService> _networkFeature;
    id <_TtP17FollowFeedFeature20SPTFollowFeedService_> _followFeedService;
    id <_TtP19CarDetectionFeature22SPTCarDetectionService_> _carDetectionService;
    id <SPTShareFeature> _shareService;
    id <SPTFreeTierTasteOnboardingService> _tasteOnboardingService;
    id <SPTSnackbarService> _snackbarService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTUBIService> _ubiService;
    id <SPTSeedASessionService> _seedASessionService;
    id <SPTCreatePlaylistService> _createPlaylistService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <_TtP23ListeningHistoryFeature26SPTListeningHistoryService_> _listeningHistoryService;
    id <SPTHomeTestManager> _testManager;
    SPTHomeHubManager *_hubManager;
    SPTHomeContentCache *_homeContentCache;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeedHeartBeatManager> _feedHeartBeatManager;
    id <SPTUBIHubsUtilities> _ubiHubsInstrumentation;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTUBIHubsUtilities> ubiHubsInstrumentation; // @synthesize ubiHubsInstrumentation=_ubiHubsInstrumentation;
@property(retain, nonatomic) id <SPTFeedHeartBeatManager> feedHeartBeatManager; // @synthesize feedHeartBeatManager=_feedHeartBeatManager;
@property(retain, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(retain, nonatomic) SPTHomeContentCache *homeContentCache; // @synthesize homeContentCache=_homeContentCache;
@property(retain, nonatomic) SPTHomeHubManager *hubManager; // @synthesize hubManager=_hubManager;
@property(retain, nonatomic) id <SPTHomeTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <_TtP23ListeningHistoryFeature26SPTListeningHistoryService_> listeningHistoryService; // @synthesize listeningHistoryService=_listeningHistoryService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTCreatePlaylistService> createPlaylistService; // @synthesize createPlaylistService=_createPlaylistService;
@property(nonatomic) __weak id <SPTSeedASessionService> seedASessionService; // @synthesize seedASessionService=_seedASessionService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTSnackbarService> snackbarService; // @synthesize snackbarService=_snackbarService;
@property(nonatomic) __weak id <SPTFreeTierTasteOnboardingService> tasteOnboardingService; // @synthesize tasteOnboardingService=_tasteOnboardingService;
@property(nonatomic) __weak id <SPTShareFeature> shareService; // @synthesize shareService=_shareService;
@property(nonatomic) __weak id <_TtP19CarDetectionFeature22SPTCarDetectionService_> carDetectionService; // @synthesize carDetectionService=_carDetectionService;
@property(nonatomic) __weak id <_TtP17FollowFeedFeature20SPTFollowFeedService_> followFeedService; // @synthesize followFeedService=_followFeedService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTPodcastUIService> podcastUIService; // @synthesize podcastUIService=_podcastUIService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPTOfflineService> offlineService; // @synthesize offlineService=_offlineService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationFeature; // @synthesize navigationFeature=_navigationFeature;
@property(nonatomic) __weak id <SPTHomeUIService> homeUIService; // @synthesize homeUIService=_homeUIService;
@property(nonatomic) __weak id <SPTFreeTierUIService> freeTierUIService; // @synthesize freeTierUIService=_freeTierUIService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubService; // @synthesize hubService=_hubService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (void).cxx_destruct;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (_Bool)claimsURI:(id)arg1;
- (id)createLoggerForViewURI:(id)arg1;
- (id)providePersistentCache;
- (void)setupHubManager;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

