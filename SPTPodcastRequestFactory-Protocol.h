//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSPredicate, NSSortDescriptor, NSURL;
@protocol SPTPodcastRequest, SPTPodcastRequestData;

@protocol SPTPodcastRequestFactory <NSObject>
- (id <SPTPodcastRequest>)createRequestWithData:(id <SPTPodcastRequestData>)arg1;
- (id <SPTPodcastRequest>)createMarkEpisodeAsPlayedRequestWithURLs:(NSArray *)arg1 markAsUnplayed:(_Bool)arg2;
- (id <SPTPodcastRequest>)createCollectionEpisodesRequestWithURL:(NSURL *)arg1 subscribe:(_Bool)arg2;
- (id <SPTPodcastRequest>)createPodcastEntityRequestWithURL:(NSURL *)arg1 filterPredicate:(NSPredicate *)arg2 sortDescriptor:(NSSortDescriptor *)arg3 range:(struct _NSRange)arg4 subscribe:(_Bool)arg5 fetchTopics:(_Bool)arg6 fetchEpisodeQuotes:(_Bool)arg7;
- (id <SPTPodcastRequest>)createDecorateItemsRequestWithItemURIs:(NSArray *)arg1 subscribe:(_Bool)arg2 fetchHTMLDescription:(_Bool)arg3 fetchQuotes:(_Bool)arg4;
@end

