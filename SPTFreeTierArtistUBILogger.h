//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTHubLogger, SPTUBIMobileArtistPageEventFactory;

@interface SPTFreeTierArtistUBILogger : NSObject
{
    id <SPTHubLogger> _logger;
    id <SPTUBIMobileArtistPageEventFactory> _eventFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTUBIMobileArtistPageEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) id <SPTHubLogger> logger; // @synthesize logger=_logger;
- (void)logSwipeRightAddToQueueWithIdentifier:(id)arg1 position:(long long)arg2 targetURI:(id)arg3;
- (void)logSwipeLeftDislikeWithIdentifier:(id)arg1 position:(long long)arg2 targetURI:(id)arg3;
- (void)logSwipeLeftLikeWithIdentifier:(id)arg1 position:(long long)arg2 targetURI:(id)arg3;
- (id)initWithLogger:(id)arg1 eventFactory:(id)arg2;

@end
