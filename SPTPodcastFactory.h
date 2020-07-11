//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastFactory-Protocol.h"

@class NSString;
@protocol SPTPodcastEpisodeFactory;

@interface SPTPodcastFactory : NSObject <SPTPodcastFactory>
{
    id <SPTPodcastEpisodeFactory> _episodeFactory;
}

@property(readonly, nonatomic) id <SPTPodcastEpisodeFactory> episodeFactory; // @synthesize episodeFactory=_episodeFactory;
- (void).cxx_destruct;
- (id)podcastWithDictionary:(id)arg1 shouldRemoveHeaders:(_Bool)arg2;
- (id)podcastWithDictionary:(id)arg1 parseTrailer:(_Bool)arg2;
- (id)podcastWithDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
