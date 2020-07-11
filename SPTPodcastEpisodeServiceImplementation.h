//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTUIPageService.h"

#import "SPTPodcastEpisodeService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTCollectionPlatformService, SPTContainerUIService, SPTExplicitContentService, SPTNetworkService, SPTPerformanceMetricsService, SPTPodcastEpisodeFeaturedContentService, SPTPodcastFeature, SPTPodcastOffliningService, SPTPodcastRecommendationsService, SPTPodcastUIService, SPTRemoteConfigurationResolver, SPTRemoteConfigurationService, SPTSessionService, SPTShareFeature, SPTUIPresentationService, _TtP31PodcastCreatorEntityPageFeature34SPTPodcastCreatorEntityPageService_;

@interface SPTPodcastEpisodeServiceImplementation : SPTUIPageService <SPTPodcastEpisodeService>
{
    id <SPTContainerUIService> _containerUIService;
    id <SPTSessionService> _clientSessionService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPodcastFeature> _podcastService;
    id <SPTPodcastUIService> _podcastUIService;
    id <SPTPodcastRecommendationsService> _podcastRecommendationsService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTUIPresentationService> _presentationService;
    id <SPTShareFeature> _shareFeature;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <_TtP31PodcastCreatorEntityPageFeature34SPTPodcastCreatorEntityPageService_> _podcastCreatorEntityPageService;
    id <SPTPodcastEpisodeFeaturedContentService> _podcastEpisodeFeaturedContentService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTPodcastOffliningService> _podcastOffliningService;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(nonatomic) __weak id <SPTPodcastOffliningService> podcastOffliningService; // @synthesize podcastOffliningService=_podcastOffliningService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTPodcastEpisodeFeaturedContentService> podcastEpisodeFeaturedContentService; // @synthesize podcastEpisodeFeaturedContentService=_podcastEpisodeFeaturedContentService;
@property(nonatomic) __weak id <_TtP31PodcastCreatorEntityPageFeature34SPTPodcastCreatorEntityPageService_> podcastCreatorEntityPageService; // @synthesize podcastCreatorEntityPageService=_podcastCreatorEntityPageService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTPodcastRecommendationsService> podcastRecommendationsService; // @synthesize podcastRecommendationsService=_podcastRecommendationsService;
@property(nonatomic) __weak id <SPTPodcastUIService> podcastUIService; // @synthesize podcastUIService=_podcastUIService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastService; // @synthesize podcastService=_podcastService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
- (void).cxx_destruct;
- (id)provideContextPlayerParameters:(id)arg1;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (_Bool)claimsURI:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

