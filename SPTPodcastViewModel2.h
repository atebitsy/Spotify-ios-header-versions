//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTPodcastEpisodeViewModelSectionDelegate-Protocol.h"
#import "SPTPodcastFollowSectionViewModelDelegate-Protocol.h"
#import "SPTPodcastPlayerDelegate-Protocol.h"
#import "SPTPodcastTopicCategoryViewModelDelegate-Protocol.h"
#import "SPTPodcastTrailerSectionViewModelDelegate-Protocol.h"

@class NSArray, NSPredicate, NSSortDescriptor, NSString, NSURL, SPTPodcastEpisodeSectionViewModel, SPTPodcastFeatureProperties, SPTPodcastHeaderViewModel, SPTPodcastLogger, SPTPodcastTopicCategoryViewModel, SPTPodcastTrailerSectionViewModel, SPTPodcastViewSectionConfiguration;
@protocol SPTCollectionPlatform, SPTExplicitContentAccessManager, SPTPodcast, SPTPodcastDataLoader, SPTPodcastDataLoaderRequestToken, SPTPodcastDispatcher, SPTPodcastEpisodeCellActionTarget, SPTPodcastFactory, SPTPodcastPlayer, SPTPodcastRequestFactory, SPTPodcastTestManager, SPTPodcastUITestManager, SPTPodcastViewModelDelegate2;

@interface SPTPodcastViewModel2 : NSObject <SPTPodcastEpisodeViewModelSectionDelegate, SPTPodcastTopicCategoryViewModelDelegate, SPTPodcastFollowSectionViewModelDelegate, SPTExplicitContentEnabledStateObserver, SPTPodcastPlayerDelegate, SPTPodcastTrailerSectionViewModelDelegate>
{
    _Bool _isLoading;
    _Bool _isLoaded;
    _Bool _topicsEmpty;
    _Bool _topicsDidLoad;
    _Bool _initialLoadComplete;
    _Bool _trailerWasShown;
    id <SPTPodcastViewModelDelegate2> _delegate;
    NSURL *_URL;
    id <SPTPodcast> _podcast;
    NSArray *_topics;
    SPTPodcastHeaderViewModel *_headerViewModel;
    SPTPodcastViewSectionConfiguration *_configuration;
    id <SPTPodcastDataLoaderRequestToken> _podcastRequestToken;
    SPTPodcastTopicCategoryViewModel *_topicCategoryViewModel;
    id <SPTPodcastTestManager> _testManager;
    id <SPTPodcastUITestManager> _uiTestManager;
    SPTPodcastFeatureProperties *_featureProperties;
    id <SPTPodcastFactory> _podcastFactory;
    id <SPTPodcastRequestFactory> _requestFactory;
    id <SPTPodcastPlayer> _podcastPlayer;
    id <SPTPodcastDataLoader> _dataLoader;
    SPTPodcastLogger *_logger;
    id <SPTPodcastDispatcher> _dispatcher;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    SPTPodcastEpisodeSectionViewModel *_episodeSectionViewModel;
    SPTPodcastTrailerSectionViewModel *_trailerSectionViewModel;
}

@property(nonatomic) __weak SPTPodcastTrailerSectionViewModel *trailerSectionViewModel; // @synthesize trailerSectionViewModel=_trailerSectionViewModel;
@property(nonatomic) __weak SPTPodcastEpisodeSectionViewModel *episodeSectionViewModel; // @synthesize episodeSectionViewModel=_episodeSectionViewModel;
@property(nonatomic) _Bool trailerWasShown; // @synthesize trailerWasShown=_trailerWasShown;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(nonatomic, getter=isInitialLoadComplete) _Bool initialLoadComplete; // @synthesize initialLoadComplete=_initialLoadComplete;
@property(nonatomic) _Bool topicsDidLoad; // @synthesize topicsDidLoad=_topicsDidLoad;
@property(readonly, nonatomic) id <SPTPodcastDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) SPTPodcastLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) id <SPTPodcastPlayer> podcastPlayer; // @synthesize podcastPlayer=_podcastPlayer;
@property(readonly, nonatomic) id <SPTPodcastRequestFactory> requestFactory; // @synthesize requestFactory=_requestFactory;
@property(readonly, nonatomic) id <SPTPodcastFactory> podcastFactory; // @synthesize podcastFactory=_podcastFactory;
@property(readonly, nonatomic) SPTPodcastFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(readonly, nonatomic) id <SPTPodcastUITestManager> uiTestManager; // @synthesize uiTestManager=_uiTestManager;
@property(readonly, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTPodcastTopicCategoryViewModel *topicCategoryViewModel; // @synthesize topicCategoryViewModel=_topicCategoryViewModel;
@property(retain, nonatomic) id <SPTPodcastDataLoaderRequestToken> podcastRequestToken; // @synthesize podcastRequestToken=_podcastRequestToken;
@property(readonly, nonatomic) SPTPodcastViewSectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic, getter=isTopicsEmpty) _Bool topicsEmpty; // @synthesize topicsEmpty=_topicsEmpty;
@property(readonly, copy, nonatomic) SPTPodcastHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(copy, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(retain) id <SPTPodcast> podcast; // @synthesize podcast=_podcast;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTPodcastViewModelDelegate2> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)indexPathForEpisodeIndex:(long long)arg1;
- (id)indexForEpisodeURL:(id)arg1;
@property(readonly, nonatomic) NSSortDescriptor *sortDescriptor;
@property(readonly, nonatomic) NSPredicate *filterPredicate;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)didFinishLoadingTopicsViewModel:(id)arg1 withError:(id)arg2;
- (void)followSectionViewModelDidUpdatePlaybackState:(id)arg1;
- (void)followSectionViewModelDidSelectContextMenuButton:(id)arg1 senderView:(id)arg2;
- (void)followSectionViewModelDidUpdateFollowedState:(id)arg1;
- (void)viewModel:(id)arg1 didUpdatePlayingEpisodeAtIndexPath:(id)arg2;
- (void)viewModel:(id)arg1 willPresentFilterContextViewController:(id)arg2 fromSender:(id)arg3;
- (void)sectionViewModelDidUpdateFilterSorting:(id)arg1;
- (void)trailerSectionViewModel:(id)arg1 didTapContextMenuforTrailerEpisode:(id)arg2;
- (void)trailerSectionViewModel:(id)arg1 didPressPlayTrailerEpisode:(id)arg2;
- (void)toggleFollowedState;
- (void)followedStateWasUpdated;
- (void)resetFilters;
- (_Bool)canPlayEpisode:(id)arg1;
- (void)updateFollowSectionLayoutWithPlayerIfNeeded:(id)arg1;
- (void)updateTrailerSectionLayoutWithPlayer:(id)arg1;
- (_Bool)isPlayingTrailer:(id)arg1;
- (_Bool)isPlayingAnyEpisode;
- (void)unsubscribe;
- (void)updateSectionViewModelsWithPlayer:(id)arg1;
- (void)podcastPlayer:(id)arg1 didUpdateProgressForTrackURL:(id)arg2;
- (double)podcastPlayer:(id)arg1 updateProgressIntervalForTrackURL:(id)arg2;
- (void)podcastPlayerStateDidChange:(id)arg1;
- (void)podcastPlayer:(id)arg1 didChangePlayingTrackURL:(id)arg2;
- (id)deserializationQueue;
- (void)handleFirstLoadUpdates;
@property(readonly, nonatomic) id <SPTPodcastEpisodeCellActionTarget> cellActionHandler;
- (void)didReachEndOfContent;
- (void)viewDidDisappear;
- (void)logTrailerWasShownIfNecessaryForSection:(long long)arg1;
- (void)viewWillDisplayCellAtIndexPath:(id)arg1;
- (void)configureTrailerEpisodeForPodcast:(id)arg1;
- (void)updateLoadStateAndNotifyDelegate;
- (void)loadAndSubscribe;
- (id)sectionViewModelForIndexPath:(id)arg1;
- (id)titleForSection:(long long)arg1;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)arg1;
- (void)obtainDelegation;
@property(readonly, copy, nonatomic) NSArray *viewSections;
- (id)initWithURL:(id)arg1 headerViewModel:(id)arg2 configuration:(id)arg3 topicCategoryViewModel:(id)arg4 dataLoader:(id)arg5 collectionPlatform:(id)arg6 testManager:(id)arg7 uiTestManager:(id)arg8 explicitContentAccessManager:(id)arg9 podcastPlayer:(id)arg10 podcastLogger:(id)arg11 featureProperties:(id)arg12 dispatcher:(id)arg13 factory:(id)arg14 requestFactory:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

