//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIColor, UIImage;

@interface INTERNAL_SPTEncorePlaylistHeaderPersonalizedModel : NSObject
{
    // Error parsing type: , name: name
    // Error parsing type: , name: userName
    // Error parsing type: , name: playlistDescription
    // Error parsing type: , name: coverArtImage
    // Error parsing type: , name: coverArtColor
    // Error parsing type: , name: likes
    // Error parsing type: , name: duration
    // Error parsing type: , name: downloadState
    // Error parsing type: , name: isPlaying
    // Error parsing type: , name: isPlayable
    // Error parsing type: , name: isLikeable
    // Error parsing type: , name: isDownloadable
    // Error parsing type: , name: showsShuffleBadge
    // Error parsing type: , name: isLiked
    // Error parsing type: , name: minimumHeight
    // Error parsing type: , name: fullHeight
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 userName:(id)arg2 playlistDescription:(id)arg3 coverArtImage:(id)arg4 coverArtColor:(id)arg5 likes:(long long)arg6 duration:(double)arg7 downloadState:(long long)arg8 isPlaying:(_Bool)arg9 isPlayable:(_Bool)arg10 isLikeable:(_Bool)arg11 isDownloadable:(_Bool)arg12 showsShuffleBadge:(_Bool)arg13 isLiked:(_Bool)arg14 minimumHeight:(double)arg15 fullHeight:(double)arg16;
@property(nonatomic, readonly) double fullHeight; // @synthesize fullHeight;
@property(nonatomic, readonly) double minimumHeight; // @synthesize minimumHeight;
@property(nonatomic, readonly) _Bool isLiked; // @synthesize isLiked;
@property(nonatomic, readonly) _Bool showsShuffleBadge; // @synthesize showsShuffleBadge;
@property(nonatomic, readonly) _Bool isDownloadable; // @synthesize isDownloadable;
@property(nonatomic, readonly) _Bool isLikeable; // @synthesize isLikeable;
@property(nonatomic, readonly) _Bool isPlayable; // @synthesize isPlayable;
@property(nonatomic, readonly) _Bool isPlaying; // @synthesize isPlaying;
@property(nonatomic, readonly) long long downloadState; // @synthesize downloadState;
@property(nonatomic, readonly) double duration; // @synthesize duration;
@property(nonatomic, readonly) long long likes; // @synthesize likes;
@property(nonatomic, readonly) UIColor *coverArtColor; // @synthesize coverArtColor;
@property(nonatomic, readonly) UIImage *coverArtImage; // @synthesize coverArtImage;
@property(nonatomic, readonly) NSAttributedString *playlistDescription; // @synthesize playlistDescription;
@property(nonatomic, readonly) NSString *userName;
@property(nonatomic, readonly) NSString *name;

@end

