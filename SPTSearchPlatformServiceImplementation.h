//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchPlatformService-Protocol.h"

@class NSString, SPTAllocationContext, SPTSearch2RequestParametersProvider;
@protocol CosmosFeature, SPContextMenuFeature, SPTCollectionPlatformService, SPTContainerService, SPTCosmosDataLoaderService, SPTExplicitContentService, SPTGLUEService, SPTHubFrameworkService, SPTHubsRendererFactory, SPTHugsFactory, SPTNetworkService, SPTOnDemandService, SPTPerformanceMetricsService, SPTPlayerFeature, SPTPlaylistPlatformService, SPTPodcastFeature, SPTRemoteConfigurationService, SPTResolver, SPTSearch2UserTierProviding, SPTSearchPlatformTestManager, SPTSearchRecentsDataSourceProviding, SPTSessionService, SPTShelfService, SPTUBIService, SPTUBIUserBehaviourInstrumentation, SPTURIDispatchService, _TtP14VoiceUIFeature17SPTVoiceUIService_, _TtP22AgeVerificationFeature25SPTAgeVerificationService_;

@interface SPTSearchPlatformServiceImplementation : NSObject <SPTSearchPlatformService>
{
    SPTSearch2RequestParametersProvider *_searchRequestParametersProvider;
    id <SPTSearchRecentsDataSourceProviding> _recentsDataSourceProvider;
    id <SPTSessionService> _clientSessionService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPlayerFeature> _playerService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTShelfService> _shelfService;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTGLUEService> _glueService;
    id <SPTContainerService> _containerService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <_TtP14VoiceUIFeature17SPTVoiceUIService_> _voiceuiService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTCosmosDataLoaderService> _cosmosDataLoaderService;
    id <CosmosFeature> _cosmosFeature;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTUBIService> _ubiService;
    id <_TtP22AgeVerificationFeature25SPTAgeVerificationService_> _ageVerificationService;
    id <SPTResolver> _cosmosRouter;
    id <SPTSearch2UserTierProviding> _userTierProvider;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    id <SPTHugsFactory> _hugsFactory;
    id <SPTSearchPlatformTestManager> _searchTestManager;
    id <SPTUBIUserBehaviourInstrumentation> _userBehaviourInstrumentation;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBIUserBehaviourInstrumentation> userBehaviourInstrumentation; // @synthesize userBehaviourInstrumentation=_userBehaviourInstrumentation;
@property(retain, nonatomic) id <SPTSearchPlatformTestManager> searchTestManager; // @synthesize searchTestManager=_searchTestManager;
@property(retain, nonatomic) id <SPTHugsFactory> hugsFactory; // @synthesize hugsFactory=_hugsFactory;
@property(retain, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(retain, nonatomic) id <SPTSearch2UserTierProviding> userTierProvider; // @synthesize userTierProvider=_userTierProvider;
@property(retain, nonatomic) id <SPTResolver> cosmosRouter; // @synthesize cosmosRouter=_cosmosRouter;
@property(nonatomic) __weak id <_TtP22AgeVerificationFeature25SPTAgeVerificationService_> ageVerificationService; // @synthesize ageVerificationService=_ageVerificationService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTCosmosDataLoaderService> cosmosDataLoaderService; // @synthesize cosmosDataLoaderService=_cosmosDataLoaderService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <_TtP14VoiceUIFeature17SPTVoiceUIService_> voiceuiService; // @synthesize voiceuiService=_voiceuiService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (id)makeDemandPromoter;
- (id)makeSearchLogger;
- (id)onDemandPermissionMonitor;
- (id)makeLoadingLoggerWithConfiguration:(id)arg1;
- (id)provideCosmosDictionaryDataLoader;
- (id)offlineAlbumDataLoader;
- (id)offlinePlaylistDataLoader;
- (id)offlineTrackDataLoader;
- (id)viewModelBuilderFactory;
- (id)connectivityMonitor;
- (id)ageVerificationProvider;
- (id)explicitContentAccessManager;
- (id)emptyStateContextWithPlayer:(id)arg1 viewModelBuilderFactory:(id)arg2 recentsDataSource:(id)arg3 emptyStatePropertiesProvider:(id)arg4 recentsCommandName:(id)arg5 ubiLocationSerializer:(id)arg6 featureID:(id)arg7 pageURI:(id)arg8 referrerIdentifier:(id)arg9;
- (id)makeViewModelProviderWithConfiguration:(id)arg1;
- (id)makeDefaultSearchRequestParameters;
- (id)makePlayerProviderWithPlayerFeature:(id)arg1;
- (id)makeViewControllerDependencies;
- (id)makeUBILocationSerializer;
- (id)provideLinkDispatcher;
- (id)provideLocalSettings;
- (id)createSPTPlayerWithReferrerIdentifier:(id)arg1;
@property(readonly, nonatomic) SPTSearch2RequestParametersProvider *searchRequestParametersProvider; // @synthesize searchRequestParametersProvider=_searchRequestParametersProvider;
@property(readonly, nonatomic) id <SPTSearchRecentsDataSourceProviding> recentsDataSourceProvider; // @synthesize recentsDataSourceProvider=_recentsDataSourceProvider;
- (id)makeURLProviderWithParametersProvider:(id)arg1 drilldownEntityType:(id)arg2 limit:(unsigned long long)arg3 onDemandSetsEnabled:(_Bool)arg4;
- (id)makeURLProviderWithParametersProvider:(id)arg1 drilldownEntityType:(id)arg2 limit:(unsigned long long)arg3;
- (id)makeEmptyStatePropertiesProviderWithOfflineSearchEnabled:(_Bool)arg1;
- (id)makeConfiguration;
- (id)makeRootViewControllerWithConfiguration:(id)arg1;
- (id)makeViewControllerWithConfiguration:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

