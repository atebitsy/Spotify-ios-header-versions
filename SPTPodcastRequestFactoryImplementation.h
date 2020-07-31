//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastRequestFactory-Protocol.h"

@class NSString;

@interface SPTPodcastRequestFactoryImplementation : NSObject <SPTPodcastRequestFactory>
{
}

- (id)createRequestWithData:(id)arg1;
- (id)createMarkEpisodeAsPlayedRequestWithURLs:(id)arg1 markAsUnplayed:(_Bool)arg2;
- (id)createCollectionEpisodesRequestWithURL:(id)arg1 subscribe:(_Bool)arg2;
- (id)createPodcastEntityRequestWithURL:(id)arg1 filterPredicate:(id)arg2 sortDescriptor:(id)arg3 range:(struct _NSRange)arg4 subscribe:(_Bool)arg5 fetchTopics:(_Bool)arg6 fetchEpisodeQuotes:(_Bool)arg7;
- (id)createDecorateItemsRequestWithItemURIs:(id)arg1 subscribe:(_Bool)arg2 fetchHTMLDescription:(_Bool)arg3 fetchQuotes:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

