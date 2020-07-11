//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierFindService-Protocol.h"

@class NSString, SPTAllocationContext, SPTFreeTierFindHubManager, SPTFreeTierFindTestManager, SPTPersistentCache;
@protocol SPTBrowseService, SPTContainerService, SPTContainerUIService, SPTFeatureFlaggingService, SPTFreeTierService, SPTGLUEService, SPTHubFrameworkService, SPTNavigationFeature, SPTNetworkService, SPTPerformanceMetricsService, SPTPodcastFeature, SPTScannablesService, SPTSearchPlatformService, SPTSearchService, SPTSessionService, SPTUserBehaviourInstrumentationService, SPTVoiceService, _TtP11FindFeature14SPTFindService_;

@interface SPTFreeTierFindServiceImplementation : NSObject <SPTFreeTierFindService>
{
    SPTPersistentCache *_persistentCache;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTHubFrameworkService> _hubService;
    id <SPTGLUEService> _glueService;
    id <SPTSearchPlatformService> _searchPlatformService;
    id <SPTSearchService> _searchService;
    id <SPTSessionService> _clientSessionService;
    id <SPTScannablesService> _scannableService;
    id <SPTPodcastFeature> _podcastService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTNavigationFeature> _navigationService;
    id <SPTVoiceService> _voiceService;
    id <SPTNetworkService> _networkService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTBrowseService> _browseService;
    id <SPTUserBehaviourInstrumentationService> _ubiService;
    id <_TtP11FindFeature14SPTFindService_> _findService;
    SPTFreeTierFindHubManager *_hubManager;
    SPTFreeTierFindTestManager *_testManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFreeTierFindTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTFreeTierFindHubManager *hubManager; // @synthesize hubManager=_hubManager;
@property(nonatomic) __weak id <_TtP11FindFeature14SPTFindService_> findService; // @synthesize findService=_findService;
@property(nonatomic) __weak id <SPTUserBehaviourInstrumentationService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTBrowseService> browseService; // @synthesize browseService=_browseService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTVoiceService> voiceService; // @synthesize voiceService=_voiceService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastService; // @synthesize podcastService=_podcastService;
@property(nonatomic) __weak id <SPTScannablesService> scannableService; // @synthesize scannableService=_scannableService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTSearchService> searchService; // @synthesize searchService=_searchService;
@property(nonatomic) __weak id <SPTSearchPlatformService> searchPlatformService; // @synthesize searchPlatformService=_searchPlatformService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubService; // @synthesize hubService=_hubService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)makeViewModelProviderForURL:(id)arg1;
- (id)makeURLResolver;
- (id)makeViewModelBuilderFactory;
- (id)provideLoggerWithUrl:(id)arg1 context:(id)arg2;
- (id)provideNFTFindViewController:(id)arg1 context:(id)arg2;
- (void)setupHubManager;
- (void)setupTestManager;
- (void)setupPageRegistry;
@property(readonly, nonatomic) SPTPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
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
