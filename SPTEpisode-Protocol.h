//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSString, NSURL;

@protocol SPTEpisode <NSObject>
- (NSString *)playerMediaTypeString;
- (NSString *)localizedDate;
- (NSString *)localizedDuration;
- (NSString *)localizedTime;
- (_Bool)isVideoShowMediaType;
- (_Bool)isFollowingPodcast;
- (_Bool)isExplicit;
@property(nonatomic, readonly) double lastPlayedAt;
- (_Bool)isPlayed;
- (_Bool)isAvailable;
- (_Bool)isPlayable;
@property(nonatomic, readonly) long long mediaType;
@property(nonatomic, readonly) NSString *manifestId;
@property(nonatomic, readonly) NSURL *largePodcastImageURL;
@property(nonatomic, readonly) NSURL *podcastImageURL;
@property(nonatomic, readonly) NSURL *largeImageURL;
@property(nonatomic, readonly) NSURL *imageURL;
@property(nonatomic, readonly) long long offlineSyncStatus;
@property(nonatomic, readonly) NSURL *URL;
@property(nonatomic, readonly) double listenedDuration;
@property(nonatomic, readonly) double duration;
@property(nonatomic, readonly) NSDate *publicationDate;
@property(nonatomic, readonly) NSString *publisherName;
@property(nonatomic, readonly) NSString *podcastTitle;
@property(nonatomic, readonly) NSURL *podcastURL;
@property(nonatomic, readonly) NSString *rawDescription;
@property(nonatomic, readonly) NSString *longDescription;
@property(nonatomic, readonly) NSString *title;

// Remaining properties
@property(nonatomic, readonly) _Bool available;
@property(nonatomic, readonly) _Bool explicit;
@property(nonatomic, readonly) _Bool followingPodcast;
@property(nonatomic, readonly) _Bool playable;
@property(nonatomic, readonly) _Bool played;
@property(nonatomic, readonly) _Bool videoShowMediaType;
@end

