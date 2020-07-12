//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShowEntityService-Protocol.h"

@class NSString, SPTPodcastSortingService;
@protocol SPTPodcastDataLoader, SPTPodcastEpisodeFactory, SPTPodcastFactory, SPTPodcastTestManager;

@interface SPTPodcastDataLoaderShowEntityService : NSObject <SPTShowEntityService>
{
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTPodcastFactory> _podcastFactory;
    id <SPTPodcastEpisodeFactory> _podcastEpisodeFactory;
    SPTPodcastSortingService *_podcastSortingService;
    id <SPTPodcastTestManager> _testManager;
}

@property(readonly, nonatomic) __weak id <SPTPodcastTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTPodcastSortingService *podcastSortingService; // @synthesize podcastSortingService=_podcastSortingService;
@property(retain, nonatomic) id <SPTPodcastEpisodeFactory> podcastEpisodeFactory; // @synthesize podcastEpisodeFactory=_podcastEpisodeFactory;
@property(retain, nonatomic) id <SPTPodcastFactory> podcastFactory; // @synthesize podcastFactory=_podcastFactory;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)errorWithDescription:(id)arg1;
- (id)jsonParsingError;
- (id)nonEpisodeURLError;
- (id)nonPodcastURLError;
- (id)missingDataLoaderError;
- (void)lookupEpisodeURIs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)lookupEpisodesForShowWithURI:(id)arg1 inRange:(struct _NSRange)arg2 includeEpisode:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)lookupShowEntityWithURI:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)providePodcastRequestWithRequestData:(id)arg1;
- (id)initWithSortingService:(id)arg1 podcastFactory:(id)arg2 podcastEpisodeFactory:(id)arg3 testManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

