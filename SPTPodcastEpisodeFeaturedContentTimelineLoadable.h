//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPageLoadable-Protocol.h"

@class NSString;
@protocol _TtP29EpisodeSegmentsFetcherFeature34SPTEpisodeSegmentsCosmosDataLoader_;

@interface SPTPodcastEpisodeFeaturedContentTimelineLoadable : NSObject <SPTPageLoadable>
{
    NSString *_episodeURI;
    id <_TtP29EpisodeSegmentsFetcherFeature34SPTEpisodeSegmentsCosmosDataLoader_> _dataLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_TtP29EpisodeSegmentsFetcherFeature34SPTEpisodeSegmentsCosmosDataLoader_> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) NSString *episodeURI; // @synthesize episodeURI=_episodeURI;
- (void)loadWithResultHandler:(id)arg1;
- (void)cancel;
- (id)initWithEpisodeURI:(id)arg1 episodeSegmentsDataLoader:(id)arg2;

@end

