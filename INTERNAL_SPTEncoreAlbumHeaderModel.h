//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor, UIImage;

@interface INTERNAL_SPTEncoreAlbumHeaderModel : NSObject
{
    // Error parsing type: , name: name
    // Error parsing type: , name: artists
    // Error parsing type: , name: artistImage
    // Error parsing type: , name: metadata
    // Error parsing type: , name: coverArtImage
    // Error parsing type: , name: coverArtColor
    // Error parsing type: , name: downloadState
    // Error parsing type: , name: isPlaying
    // Error parsing type: , name: isPlayable
    // Error parsing type: , name: isDownloadable
    // Error parsing type: , name: isLiked
    // Error parsing type: , name: minimumHeight
    // Error parsing type: , name: fullHeight
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 artists:(id)arg2 artistImage:(id)arg3 metadata:(id)arg4 coverArtImage:(id)arg5 coverArtColor:(id)arg6 downloadState:(long long)arg7 isPlaying:(_Bool)arg8 isPlayable:(_Bool)arg9 isDownloadable:(_Bool)arg10 isLiked:(_Bool)arg11 minimumHeight:(double)arg12 fullHeight:(double)arg13;
@property(nonatomic, readonly) double fullHeight; // @synthesize fullHeight;
@property(nonatomic, readonly) double minimumHeight; // @synthesize minimumHeight;
@property(nonatomic, readonly) _Bool isLiked; // @synthesize isLiked;
@property(nonatomic, readonly) _Bool isDownloadable; // @synthesize isDownloadable;
@property(nonatomic, readonly) _Bool isPlayable; // @synthesize isPlayable;
@property(nonatomic, readonly) _Bool isPlaying; // @synthesize isPlaying;
@property(nonatomic, readonly) long long downloadState; // @synthesize downloadState;
@property(nonatomic, readonly) UIColor *coverArtColor; // @synthesize coverArtColor;
@property(nonatomic, readonly) UIImage *coverArtImage; // @synthesize coverArtImage;
@property(nonatomic, readonly) NSString *metadata;
@property(nonatomic, readonly) UIImage *artistImage; // @synthesize artistImage;
@property(nonatomic, readonly) NSArray *artists;
@property(nonatomic, readonly) NSString *name;

@end

