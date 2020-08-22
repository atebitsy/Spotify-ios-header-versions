//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTUIPageService.h"

#import "SPTPodcastEpisodeService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTCollectionPlatformService, SPTContextDispatchService, SPTExplicitContentService, SPTGLUEService, SPTNetworkService, SPTPageLoaderViewService, SPTPerformanceMetricsService, SPTPodcastEpisodeFeaturedContentService, SPTPodcastFeature, SPTPodcastOffliningService, SPTPodcastRecommendationsService, SPTPodcastUIService, SPTRemoteConfigurationService, SPTShareFeature, SPTUBIService, SPTUIPresentationService, _TtP17PodcastDALFeature20SPTPodcastDALService_, _TtP27PodcastHTMLComponentFeature30SPTPodcastHTMLComponentService_, _TtP27PodcastInteractivityFeature15SPTPollsService_, _TtP30PodcastEpisodeAudioPlusFeature33SPTPodcastEpisodeAudioPlusService_;

@interface SPTPodcastEpisodeServiceImplementation : SPTUIPageService <SPTPodcastEpisodeService>
{
    id <_TtP30PodcastEpisodeAudioPlusFeature33SPTPodcastEpisodeAudioPlusService_> _audioPlusService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPodcastFeature> _podcastService;
    id <_TtP17PodcastDALFeature20SPTPodcastDALService_> _podcastDALService;
    id <SPTPodcastUIService> _podcastUIService;
    id <SPTPodcastRecommendationsService> _podcastRecommendationsService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTUIPresentationService> _presentationService;
    id <SPTShareFeature> _shareFeature;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTPodcastEpisodeFeaturedContentService> _podcastEpisodeFeaturedContentService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTPodcastOffliningService> _podcastOffliningService;
    id <SPTUBIService> _ubiService;
    id <SPTContextDispatchService> _contextDispatchService;
    id <SPTGLUEService> _glueService;
    id <_TtP27PodcastHTMLComponentFeature30SPTPodcastHTMLComponentService_> _podcastHTMLComponentService;
    id <_TtP27PodcastInteractivityFeature15SPTPollsService_> _pollsService;
    id <SPTPageLoaderViewService> _pageLoaderViewService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTPageLoaderViewService> pageLoaderViewService; // @synthesize pageLoaderViewService=_pageLoaderViewService;
@property(nonatomic) __weak id <_TtP27PodcastInteractivityFeature15SPTPollsService_> pollsService; // @synthesize pollsService=_pollsService;
@property(nonatomic) __weak id <_TtP27PodcastHTMLComponentFeature30SPTPodcastHTMLComponentService_> podcastHTMLComponentService; // @synthesize podcastHTMLComponentService=_podcastHTMLComponentService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContextDispatchService> contextDispatchService; // @synthesize contextDispatchService=_contextDispatchService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTPodcastOffliningService> podcastOffliningService; // @synthesize podcastOffliningService=_podcastOffliningService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTPodcastEpisodeFeaturedContentService> podcastEpisodeFeaturedContentService; // @synthesize podcastEpisodeFeaturedContentService=_podcastEpisodeFeaturedContentService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTPodcastRecommendationsService> podcastRecommendationsService; // @synthesize podcastRecommendationsService=_podcastRecommendationsService;
@property(nonatomic) __weak id <SPTPodcastUIService> podcastUIService; // @synthesize podcastUIService=_podcastUIService;
@property(nonatomic) __weak id <_TtP17PodcastDALFeature20SPTPodcastDALService_> podcastDALService; // @synthesize podcastDALService=_podcastDALService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastService; // @synthesize podcastService=_podcastService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <_TtP30PodcastEpisodeAudioPlusFeature33SPTPodcastEpisodeAudioPlusService_> audioPlusService; // @synthesize audioPlusService=_audioPlusService;
- (id)provideSeeAllViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)provideCoverArtViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)provideDescriptionViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)provideActionRowViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)provideEpisodeLoggerForURI:(id)arg1;
- (id)provideFeatureProperties;
- (id)provideContextPlayerParameters:(id)arg1;
- (id)makeViewModelForURI:(id)arg1 context:(id)arg2;
- (id)provideEpisodeViewControllerForURI:(id)arg1 context:(id)arg2 viewModel:(id)arg3 viewLogger:(id)arg4;
- (id)providePageLoaderViewControllerForURI:(id)arg1 context:(id)arg2;
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

