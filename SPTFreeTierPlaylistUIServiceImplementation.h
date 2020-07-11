//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistUIService-Protocol.h"

@class NSString, SPTAllocationContext, SPTFreeTierPlaylistFeatureProperties, SPTFreeTierPlaylistHandlerRegistryImplementation;
@protocol SPContextMenuFeature, SPTAdsService, SPTAlgotorialSharingService, SPTAssistedCurationUIService, SPTCollectionPlatformService, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTCreatePlaylistService, SPTEventSenderService, SPTFormatListPlatformRegistration, SPTFormatListPlatformService, SPTFreeTierAllSongsService, SPTFreeTierPlaylistService, SPTFreeTierPreCurationService, SPTFreeTierRecommendationsService, SPTGLUEService, SPTNavigationFeature, SPTNetworkService, SPTOnDemandService, SPTPageLoaderViewService, SPTPerformanceMetricsService, SPTPlayerFeature, SPTPlaylistExtenderService, SPTPlaylistPlatformService, SPTPodcastFeature, SPTPodcastOffliningService, SPTRemoteConfigurationService, SPTSessionService, SPTShareFeature, SPTShelfService, SPTSnackbarService, SPTSortingFilteringService, SPTUBIService, SPTUIPresentationService, SPTVISREFFlagsService, SPTVisualRefreshIntegrationService, _TtP24EncoreIntegrationFeature27SPTEncoreIntegrationService_, _TtP24PlaylistMigrationFeature27SPTPlaylistMigrationService_, _TtP24ResponsiveShuffleFeature27SPTResponsiveShuffleService_, _TtP25PlaylistTrackCloudFeature28SPTPlaylistTrackCloudService_;

@interface SPTFreeTierPlaylistUIServiceImplementation : NSObject <SPTFreeTierPlaylistUIService>
{
    id <SPTFreeTierAllSongsService> _allSongsService;
    id <SPTAssistedCurationUIService> _assistedCurationUIService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTCoreService> _coreService;
    id <SPTFormatListPlatformService> _formatListPlatformService;
    id <SPTFreeTierPlaylistService> _freeTierPlaylistService;
    id <SPTGLUEService> _glueService;
    id <SPTNavigationFeature> _navigationService;
    id <SPTNetworkService> _networkService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTPlayerFeature> _playerService;
    id <SPTFreeTierPreCurationService> _preCurationService;
    id <SPTFreeTierRecommendationsService> _recommendationsService;
    id <SPTAdsService> _adsService;
    id <SPTSnackbarService> _snackbarService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTCreatePlaylistService> _createPlaylistService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTUIPresentationService> _presentationService;
    id <SPTSessionService> _sessionService;
    id <SPTShelfService> _shelfService;
    id <SPTPlaylistExtenderService> _playlistExtenderFeature;
    id <SPTSortingFilteringService> _sortingFilteringService;
    id <SPTFormatListPlatformRegistration> _formatRegistryHandlerRegistration;
    SPTFreeTierPlaylistHandlerRegistryImplementation *_handlerRegistry;
    id <SPTVISREFFlagsService> _visualRefreshService;
    id <SPTVisualRefreshIntegrationService> _visualRefreshIntegrationService;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTSessionService> _clientSessionService;
    id <SPTShareFeature> _shareFeature;
    id <SPTEventSenderService> _eventSenderService;
    id <_TtP24EncoreIntegrationFeature27SPTEncoreIntegrationService_> _encoreIntegrationService;
    id <SPTPodcastOffliningService> _podcastOffliningService;
    id <SPTUBIService> _ubiService;
    id <SPTPageLoaderViewService> _pageLoaderViewService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTAlgotorialSharingService> _algotorialSharingService;
    SPTFreeTierPlaylistFeatureProperties *_featureProperties;
    id <_TtP25PlaylistTrackCloudFeature28SPTPlaylistTrackCloudService_> _playlistTrackCloudService;
    id <_TtP24PlaylistMigrationFeature27SPTPlaylistMigrationService_> _playlistMigrationService;
    id <_TtP24ResponsiveShuffleFeature27SPTResponsiveShuffleService_> _responsiveShuffleService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <_TtP24ResponsiveShuffleFeature27SPTResponsiveShuffleService_> responsiveShuffleService; // @synthesize responsiveShuffleService=_responsiveShuffleService;
@property(nonatomic) __weak id <_TtP24PlaylistMigrationFeature27SPTPlaylistMigrationService_> playlistMigrationService; // @synthesize playlistMigrationService=_playlistMigrationService;
@property(nonatomic) __weak id <_TtP25PlaylistTrackCloudFeature28SPTPlaylistTrackCloudService_> playlistTrackCloudService; // @synthesize playlistTrackCloudService=_playlistTrackCloudService;
@property(retain, nonatomic) SPTFreeTierPlaylistFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(nonatomic) __weak id <SPTAlgotorialSharingService> algotorialSharingService; // @synthesize algotorialSharingService=_algotorialSharingService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTPageLoaderViewService> pageLoaderViewService; // @synthesize pageLoaderViewService=_pageLoaderViewService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTPodcastOffliningService> podcastOffliningService; // @synthesize podcastOffliningService=_podcastOffliningService;
@property(nonatomic) __weak id <_TtP24EncoreIntegrationFeature27SPTEncoreIntegrationService_> encoreIntegrationService; // @synthesize encoreIntegrationService=_encoreIntegrationService;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPTVisualRefreshIntegrationService> visualRefreshIntegrationService; // @synthesize visualRefreshIntegrationService=_visualRefreshIntegrationService;
@property(nonatomic) __weak id <SPTVISREFFlagsService> visualRefreshService; // @synthesize visualRefreshService=_visualRefreshService;
@property(retain, nonatomic) SPTFreeTierPlaylistHandlerRegistryImplementation *handlerRegistry; // @synthesize handlerRegistry=_handlerRegistry;
@property(retain, nonatomic) id <SPTFormatListPlatformRegistration> formatRegistryHandlerRegistration; // @synthesize formatRegistryHandlerRegistration=_formatRegistryHandlerRegistration;
@property(nonatomic) __weak id <SPTSortingFilteringService> sortingFilteringService; // @synthesize sortingFilteringService=_sortingFilteringService;
@property(nonatomic) __weak id <SPTPlaylistExtenderService> playlistExtenderFeature; // @synthesize playlistExtenderFeature=_playlistExtenderFeature;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTCreatePlaylistService> createPlaylistService; // @synthesize createPlaylistService=_createPlaylistService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTSnackbarService> snackbarService; // @synthesize snackbarService=_snackbarService;
@property(nonatomic) __weak id <SPTAdsService> adsService; // @synthesize adsService=_adsService;
@property(nonatomic) __weak id <SPTFreeTierRecommendationsService> recommendationsService; // @synthesize recommendationsService=_recommendationsService;
@property(nonatomic) __weak id <SPTFreeTierPreCurationService> preCurationService; // @synthesize preCurationService=_preCurationService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFreeTierPlaylistService> freeTierPlaylistService; // @synthesize freeTierPlaylistService=_freeTierPlaylistService;
@property(nonatomic) __weak id <SPTFormatListPlatformService> formatListPlatformService; // @synthesize formatListPlatformService=_formatListPlatformService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTAssistedCurationUIService> assistedCurationUIService; // @synthesize assistedCurationUIService=_assistedCurationUIService;
@property(nonatomic) __weak id <SPTFreeTierAllSongsService> allSongsService; // @synthesize allSongsService=_allSongsService;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool pageLoaderEnabled;
- (id)provideHandlerRegistry;
- (id)allSongsDataSourceForURL:(id)arg1 formatListType:(id)arg2;
- (id)providerFooterProviderForPlaylistURL:(id)arg1 context:(id)arg2;
- (id)provideLoggerForURI:(id)arg1;
- (id)provideSponsoredViewModelForURL:(id)arg1;
- (id)providePlaylistViewControllerForURL:(id)arg1 withContext:(id)arg2 playlistModel:(id)arg3 configurationBlock:(CDUnknownBlockType)arg4;
- (id)loadableForPlaylistWithURL:(id)arg1 withPageContext:(id)arg2;
- (id)providePlaylistViewControllerForURL:(id)arg1 withPageContext:(id)arg2 playlistModel:(id)arg3 initialEntity:(id)arg4;
- (id)providePlaylistViewControllerForURL:(id)arg1 withPageContext:(id)arg2;
- (id)fullbleedHeaderProvider;
- (void)unregisterPage;
- (void)registerPage;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

