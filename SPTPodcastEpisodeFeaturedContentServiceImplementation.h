//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTUIPageService.h"

#import "SPTPodcastEpisodeFeaturedContentService-Protocol.h"

@class NSString, SPTAllocationContext, SPTPodcastEpisodeFeaturedContentContentOperationFactory;
@protocol SPContextMenuFeature, SPTGLUEService, SPTHubFrameworkService, SPTNowPlayingPlatformService, SPTOnDemandService, SPTOnDemandSet, SPTPlayerFeature, SPTPodcastEpisodeFeaturedContentTestManager, SPTPodcastEpisodeFeaturedContentViewProvider, SPTRemoteConfigurationService, SPTSessionService, SPTUBIService, SPTURIDispatchService, _TtP29EpisodeSegmentsFetcherFeature32SPTEpisodeSegmentsFetcherService_;

@interface SPTPodcastEpisodeFeaturedContentServiceImplementation : SPTUIPageService <SPTPodcastEpisodeFeaturedContentService>
{
    id <SPTSessionService> _clientSessionService;
    id <SPContextMenuFeature> _contextMenuService;
    id <_TtP29EpisodeSegmentsFetcherFeature32SPTEpisodeSegmentsFetcherService_> _episodeSegmentsFetcherService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTGLUEService> _glueService;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTPlayerFeature> _playerService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTUBIService> _ubiService;
    id <SPTPodcastEpisodeFeaturedContentViewProvider> _featuredContentViewProvider;
    id <SPTPodcastEpisodeFeaturedContentTestManager> _testManager;
    id <SPTOnDemandSet> _onDemandSet;
    SPTPodcastEpisodeFeaturedContentContentOperationFactory *_contentOperationFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTPodcastEpisodeFeaturedContentContentOperationFactory *contentOperationFactory; // @synthesize contentOperationFactory=_contentOperationFactory;
@property(retain, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(retain, nonatomic) id <SPTPodcastEpisodeFeaturedContentTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTPodcastEpisodeFeaturedContentViewProvider> featuredContentViewProvider; // @synthesize featuredContentViewProvider=_featuredContentViewProvider;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <_TtP29EpisodeSegmentsFetcherFeature32SPTEpisodeSegmentsFetcherService_> episodeSegmentsFetcherService; // @synthesize episodeSegmentsFetcherService=_episodeSegmentsFetcherService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (_Bool)claimsURI:(id)arg1;
- (id)provideSubtitleDecoratorContentOperation;
- (id)provideContentOperationFactory;
- (id)providePodcastEpisodeFeaturedContentViewProvider;
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

