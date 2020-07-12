//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTFreeTierPlaylistFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _doubleStatePlayButton;
    _Bool _dontOpenNowPlayingViewOnAudioPlayback;
    _Bool _dontOpenNowPlayingViewOnVideoPlayback;
    _Bool _dontOpenNowPlayingViewOnPlayButtonPlayback;
    _Bool _pageLoaderEnabledPlaylistView;
    _Bool _measureScrollPerfomance;
    _Bool _respectShowsCollectionFlagInPlaylistForIncludingEpisodes;
    _Bool _enableWeightedShufflePlayback;
    _Bool _enableTrackContextSharing;
    unsigned long long _followShowConfirmationOverride;
    unsigned long long _unfollowShowConfirmationOverride;
    NSString *_followShowConfirmationOverrideString;
    NSString *_unfollowShowConfirmationOverrideString;
}

@property(retain, nonatomic) NSString *unfollowShowConfirmationOverrideString; // @synthesize unfollowShowConfirmationOverrideString=_unfollowShowConfirmationOverrideString;
@property(retain, nonatomic) NSString *followShowConfirmationOverrideString; // @synthesize followShowConfirmationOverrideString=_followShowConfirmationOverrideString;
@property(readonly, nonatomic) unsigned long long unfollowShowConfirmationOverride; // @synthesize unfollowShowConfirmationOverride=_unfollowShowConfirmationOverride;
@property(readonly, nonatomic) unsigned long long followShowConfirmationOverride; // @synthesize followShowConfirmationOverride=_followShowConfirmationOverride;
@property(readonly, nonatomic) _Bool enableTrackContextSharing; // @synthesize enableTrackContextSharing=_enableTrackContextSharing;
@property(readonly, nonatomic) _Bool enableWeightedShufflePlayback; // @synthesize enableWeightedShufflePlayback=_enableWeightedShufflePlayback;
@property(readonly, nonatomic) _Bool respectShowsCollectionFlagInPlaylistForIncludingEpisodes; // @synthesize respectShowsCollectionFlagInPlaylistForIncludingEpisodes=_respectShowsCollectionFlagInPlaylistForIncludingEpisodes;
@property(readonly, nonatomic) _Bool measureScrollPerfomance; // @synthesize measureScrollPerfomance=_measureScrollPerfomance;
@property(readonly, nonatomic) _Bool pageLoaderEnabledPlaylistView; // @synthesize pageLoaderEnabledPlaylistView=_pageLoaderEnabledPlaylistView;
@property(readonly, nonatomic) _Bool dontOpenNowPlayingViewOnPlayButtonPlayback; // @synthesize dontOpenNowPlayingViewOnPlayButtonPlayback=_dontOpenNowPlayingViewOnPlayButtonPlayback;
@property(readonly, nonatomic) _Bool dontOpenNowPlayingViewOnVideoPlayback; // @synthesize dontOpenNowPlayingViewOnVideoPlayback=_dontOpenNowPlayingViewOnVideoPlayback;
@property(readonly, nonatomic) _Bool dontOpenNowPlayingViewOnAudioPlayback; // @synthesize dontOpenNowPlayingViewOnAudioPlayback=_dontOpenNowPlayingViewOnAudioPlayback;
@property(readonly, nonatomic) _Bool doubleStatePlayButton; // @synthesize doubleStatePlayButton=_doubleStatePlayButton;
- (void).cxx_destruct;
- (unsigned long long)mapUnfollowShowConfirmationOverrideToEnumValue:(id)arg1;
- (unsigned long long)mapFollowShowConfirmationOverrideToEnumValue:(id)arg1;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

