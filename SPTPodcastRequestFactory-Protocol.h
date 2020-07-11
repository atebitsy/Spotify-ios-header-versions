//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSPredicate, NSSortDescriptor, NSURL;
@protocol SPTPodcastRequest, SPTPodcastUITestManager;

@protocol SPTPodcastRequestFactory <NSObject>
- (id <SPTPodcastRequest>)createMarkEpisodeAsPlayedRequestWithURLs:(NSArray *)arg1 markAsUnplayed:(_Bool)arg2;
- (id <SPTPodcastRequest>)createCollectionEpisodesRequestWithURL:(NSURL *)arg1 subscribe:(_Bool)arg2 testManager:(id <SPTPodcastUITestManager>)arg3;
- (id <SPTPodcastRequest>)createPodcastEntityRequestWithURL:(NSURL *)arg1 filterPredicate:(NSPredicate *)arg2 sortDescriptor:(NSSortDescriptor *)arg3 range:(struct _NSRange)arg4 subscribe:(_Bool)arg5 testManager:(id <SPTPodcastUITestManager>)arg6;
- (id <SPTPodcastRequest>)createDecorateItemsRequestWithItemURIs:(NSArray *)arg1 subscribe:(_Bool)arg2;
@end

