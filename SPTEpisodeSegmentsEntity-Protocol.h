//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, NSURL;
@protocol SPTEpisodeSegmentsAlbumEntityImpl;

@protocol SPTEpisodeSegmentsEntity
@property(nonatomic, readonly) _Bool isAbridged;
@property(nonatomic, readonly) _Bool isTalkSegment;
@property(nonatomic, readonly) _Bool isMusicSegment;
@property(nonatomic, readonly) long long type;
@property(nonatomic, readonly) double endTime;
@property(nonatomic, readonly) double startTime;
@property(nonatomic, readonly) long long endTimeMilliseconds;
@property(nonatomic, readonly) long long startTimeMilliseconds;
@property(nonatomic, readonly) NSString *trackSubtitle;
@property(nonatomic, readonly) NSString *subtitle;
@property(nonatomic, readonly) NSString *title;
@property(nonatomic, readonly) NSURL *uri;
@property(nonatomic, readonly) NSURL *imageUri;
@property(nonatomic, readonly) id <SPTEpisodeSegmentsAlbumEntityImpl> album;
@property(nonatomic, readonly) NSArray *artists;
@end

