//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcast-Protocol.h"

@class NSArray, NSString, NSURL;
@protocol SPTPodcastEpisode;

@interface SPTPodcast : NSObject <SPTPodcast>
{
    _Bool _following;
    NSString *rawDescription;
    NSArray *topics;
    NSString *_title;
    NSString *_descriptionText;
    NSString *_publisher;
    NSURL *_URL;
    NSURL *_latestPlayedEpisodeURL;
    NSURL *_imageURL;
    long long _numberOfFollowers;
    long long _consumptionOrder;
    NSArray *_episodes;
    unsigned long long _mediaType;
    unsigned long long _unrangedLength;
    id <SPTPodcastEpisode> _trailerEpisode;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPodcastEpisode> trailerEpisode; // @synthesize trailerEpisode=_trailerEpisode;
@property(nonatomic) unsigned long long unrangedLength; // @synthesize unrangedLength=_unrangedLength;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSArray *episodes; // @synthesize episodes=_episodes;
@property(nonatomic) long long consumptionOrder; // @synthesize consumptionOrder=_consumptionOrder;
@property(nonatomic, getter=isFollowing) _Bool following; // @synthesize following=_following;
@property(nonatomic) long long numberOfFollowers; // @synthesize numberOfFollowers=_numberOfFollowers;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSURL *latestPlayedEpisodeURL; // @synthesize latestPlayedEpisodeURL=_latestPlayedEpisodeURL;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *publisher; // @synthesize publisher=_publisher;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *topics; // @synthesize topics;
@property(readonly, nonatomic) NSString *rawDescription; // @synthesize rawDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToPodcast:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

