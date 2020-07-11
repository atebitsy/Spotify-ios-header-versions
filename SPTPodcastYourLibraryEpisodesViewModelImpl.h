//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastEpisodeProgressPolling-Protocol.h"
#import "SPTPodcastUnfinishedItemsProviderObserver-Protocol.h"
#import "SPTPodcastYourLibraryDataParserDelegate-Protocol.h"
#import "SPTPodcastYourLibraryEpisodesViewModel-Protocol.h"

@class NSArray, NSCache, NSString, NSURL, SPTPodcastYourLibraryDataParser;
@protocol SPTExplicitContentAccessManager, SPTPodcastDataLoader, SPTPodcastDataLoaderRequestToken, SPTPodcastEpisodeFactory, SPTPodcastPlayer, SPTPodcastRequestFactory, SPTPodcastTestManager, SPTPodcastUITestManager, SPTPodcastUnfinishedItemsProvider, SPTPodcastYourLibraryEpisodesViewModelDelegate;

@interface SPTPodcastYourLibraryEpisodesViewModelImpl : NSObject <SPTPodcastYourLibraryDataParserDelegate, SPTPodcastUnfinishedItemsProviderObserver, SPTPodcastYourLibraryEpisodesViewModel, SPTPodcastEpisodeProgressPolling>
{
    NSURL *_URL;
    id <SPTPodcastYourLibraryEpisodesViewModelDelegate> _delegate;
    NSCache *_progressCache;
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTPodcastPlayer> _player;
    id <SPTPodcastDataLoaderRequestToken> _nextEpisodesRequestToken;
    id <SPTPodcastDataLoaderRequestToken> _unfinishedEpisodesRequestToken;
    id <SPTPodcastEpisodeFactory> _episodeFactory;
    id <SPTPodcastRequestFactory> _requestFactory;
    id <SPTPodcastUnfinishedItemsProvider> _unfinishedItemsProvider;
    SPTPodcastYourLibraryDataParser *_dataParser;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTPodcastTestManager> _testManager;
    id <SPTPodcastUITestManager> _podcastUITestManager;
    NSArray *_unfinishedEpisodeItems;
    NSArray *_nextEpisodeItems;
    NSArray *_headerItems;
}

@property(copy, nonatomic) NSArray *headerItems; // @synthesize headerItems=_headerItems;
@property(copy, nonatomic) NSArray *nextEpisodeItems; // @synthesize nextEpisodeItems=_nextEpisodeItems;
@property(copy, nonatomic) NSArray *unfinishedEpisodeItems; // @synthesize unfinishedEpisodeItems=_unfinishedEpisodeItems;
@property(retain, nonatomic) id <SPTPodcastUITestManager> podcastUITestManager; // @synthesize podcastUITestManager=_podcastUITestManager;
@property(retain, nonatomic) id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) SPTPodcastYourLibraryDataParser *dataParser; // @synthesize dataParser=_dataParser;
@property(retain, nonatomic) id <SPTPodcastUnfinishedItemsProvider> unfinishedItemsProvider; // @synthesize unfinishedItemsProvider=_unfinishedItemsProvider;
@property(retain, nonatomic) id <SPTPodcastRequestFactory> requestFactory; // @synthesize requestFactory=_requestFactory;
@property(retain, nonatomic) id <SPTPodcastEpisodeFactory> episodeFactory; // @synthesize episodeFactory=_episodeFactory;
@property(retain, nonatomic) id <SPTPodcastDataLoaderRequestToken> unfinishedEpisodesRequestToken; // @synthesize unfinishedEpisodesRequestToken=_unfinishedEpisodesRequestToken;
@property(retain, nonatomic) id <SPTPodcastDataLoaderRequestToken> nextEpisodesRequestToken; // @synthesize nextEpisodesRequestToken=_nextEpisodesRequestToken;
@property(retain, nonatomic) id <SPTPodcastPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) NSCache *progressCache; // @synthesize progressCache=_progressCache;
@property(nonatomic) __weak id <SPTPodcastYourLibraryEpisodesViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)didFailParsingData:(id)arg1;
- (void)dataParser:(id)arg1 didFinishParsingUnfinishedEpisodes:(id)arg2;
- (void)dataParser:(id)arg1 didFinishParsingNextEpisodes:(id)arg2 withHeaderItems:(id)arg3;
- (void)unfinishedItemsModelDidReload:(id)arg1;
- (id)cachedProgressForEpisode:(id)arg1;
- (void)updateCurrentProgress:(double)arg1 position:(double)arg2 duration:(double)arg3 forEpisode:(id)arg4;
- (void)removeDuplicatesFromNextEpisodes:(id)arg1 headerItems:(id)arg2;
- (void)insertEpisode:(id)arg1 atIndexPath:(id)arg2;
- (void)deleteEpisode:(id)arg1 atIndexPath:(id)arg2;
- (void)setItemsFromNextEpisodes:(id)arg1 headerItems:(id)arg2;
- (id)episodeViewModelAtIndexPath:(id)arg1;
- (void)markEpisode:(id)arg1 asPlayed:(_Bool)arg2;
- (void)fetchUnfinishedEpisodes;
- (void)subscribeNextEpisodes;
- (id)allEpisodesInSection:(unsigned long long)arg1;
- (void)unsubscribe;
- (_Bool)showSeparatorForSection:(long long)arg1;
- (id)titleForSection:(unsigned long long)arg1;
@property(readonly, nonatomic) double currentEpisodeProgress;
@property(readonly, nonatomic, getter=isPlayingPodcastEpsiode) _Bool playingPodcastEpisode;
- (unsigned long long)numberOfEntrySections;
- (unsigned long long)numberOfEntriesInSection:(unsigned long long)arg1;
- (void)loadAndSubscribe;
- (_Bool)isEpisodePlayingAtIndexPath:(id)arg1;
- (_Bool)isEpisodeDisabledAtIndexPath:(id)arg1;
- (_Bool)isEpisodeActiveAtIndexPath:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)episodeAtIndexPath:(id)arg1;
- (id)initWithDataLoader:(id)arg1 requestFactory:(id)arg2 unfinishedItemsProvider:(id)arg3 episodeFactory:(id)arg4 podcastPlayer:(id)arg5 explicitContentAccessManager:(id)arg6 viewURI:(id)arg7 podcastTestManager:(id)arg8 podcastUITestManager:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
