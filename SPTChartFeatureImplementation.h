//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTChartFeature-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTChartFeatureProperties, SPTChartFeatureTestManager, SPTChartHubManager;
@protocol CosmosFeature, SPContextMenuFeature, SPTCollectionPlatformService, SPTContainerService, SPTCoreService, SPTEncoreIntegrationService, SPTExplicitContentService, SPTFormatListPlatformService, SPTFreeTierAllSongsService, SPTFreeTierRecommendationsService, SPTFreeTierService, SPTGLUEService, SPTHubFrameworkService, SPTNavigationFeature, SPTNetworkService, SPTOnDemandService, SPTPlayerFeature, SPTRemoteConfigurationService, SPTSessionService, SPTShelfService, SPTUIPresentationService, SPTURIDispatchService;

@interface SPTChartFeatureImplementation : NSObject <SPTService, SPTChartFeature>
{
    id <SPTNavigationFeature> _navigationService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <CosmosFeature> _cosmosFeature;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTFormatListPlatformService> _formatListPlatformService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTUIPresentationService> _UIPresentationService;
    id <SPTShelfService> _shelfService;
    id <SPTGLUEService> _glueService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTFreeTierAllSongsService> _freeTierAllSongsService;
    id <SPTFreeTierRecommendationsService> _freeTierRecommendationsService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTURIDispatchService> _uriDispatchService;
    SPTChartHubManager *_hubManager;
    SPTChartFeatureTestManager *_testManager;
    id <SPTEncoreIntegrationService> _encoreIntegrationService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    SPTChartFeatureProperties *_properties;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTChartFeatureProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTEncoreIntegrationService> encoreIntegrationService; // @synthesize encoreIntegrationService=_encoreIntegrationService;
@property(retain, nonatomic) SPTChartFeatureTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTChartHubManager *hubManager; // @synthesize hubManager=_hubManager;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTFreeTierRecommendationsService> freeTierRecommendationsService; // @synthesize freeTierRecommendationsService=_freeTierRecommendationsService;
@property(nonatomic) __weak id <SPTFreeTierAllSongsService> freeTierAllSongsService; // @synthesize freeTierAllSongsService=_freeTierAllSongsService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPTUIPresentationService> UIPresentationService; // @synthesize UIPresentationService=_UIPresentationService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTFormatListPlatformService> formatListPlatformService; // @synthesize formatListPlatformService=_formatListPlatformService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
- (void)loadHubsRendererWithTheme:(id)arg1;
- (id)createEntityLoader;
- (id)dataSourceForURL:(id)arg1;
- (id)provideFreeTierViewModelForURL:(id)arg1 referrerIdentifier:(id)arg2 linkDispatcher:(id)arg3;
- (id)provideChartFreeTierViewControllerForURL:(id)arg1 context:(id)arg2;
- (id)provideChartViewControllerForURL:(id)arg1 context:(id)arg2;
- (id)pageIdentifierForURL:(id)arg1;
- (id)provideChartsListingViewControllerForURL:(id)arg1 context:(id)arg2;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

