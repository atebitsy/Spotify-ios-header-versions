//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SPForegroundObserver;
@protocol SPTLogCenter, SPTNowPlayingManager, SPTPlayer;

@interface SPTStorylinesLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTPlayer> _player;
    SPForegroundObserver *_foregroundObserver;
    id <SPTNowPlayingManager> _nowPlayingManager;
    NSString *_currentPlaybackId;
    NSMutableDictionary *_impressionsCacheForCardIndex;
}

@property(readonly, nonatomic) NSMutableDictionary *impressionsCacheForCardIndex; // @synthesize impressionsCacheForCardIndex=_impressionsCacheForCardIndex;
@property(copy, nonatomic) NSString *currentPlaybackId; // @synthesize currentPlaybackId=_currentPlaybackId;
@property(readonly, nonatomic) id <SPTNowPlayingManager> nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(readonly, nonatomic) SPForegroundObserver *foregroundObserver; // @synthesize foregroundObserver=_foregroundObserver;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldSendMessage;
@property(readonly, nonatomic) _Bool isAwake;
@property(readonly, nonatomic) _Bool isNowPlayingViewHidden;
- (void)logStorylinesCardImpressionForTrackUri:(id)arg1 currentCardIndex:(long long)arg2 percentInView:(double)arg3;
- (void)logArtistNavigationInteractionForSpotifyUri:(id)arg1 trackUri:(id)arg2 currentCardIndex:(long long)arg3 percentInView:(double)arg4 fromAttribution:(_Bool)arg5;
- (void)logUnfollowButtonInteractionForSpotifyUri:(id)arg1 trackUri:(id)arg2 currentCardIndex:(long long)arg3;
- (void)logFollowButtonInteractionForSpotifyUri:(id)arg1 trackUri:(id)arg2 currentCardIndex:(long long)arg3;
- (void)logStorylinesPauseInteractionForTrackUri:(id)arg1 currentCardIndex:(long long)arg2 percentInView:(double)arg3;
- (void)logStorylinesPreviousInteractionForTrackUri:(id)arg1 currentCardIndex:(long long)arg2 percentInView:(double)arg3;
- (void)logStorylinesForwardInteractionForTrackUri:(id)arg1 currentCardIndex:(long long)arg2 percentInView:(double)arg3;
- (void)sendUniqueImpression:(id)arg1;
- (void)logPlayerStateWithImpression:(id)arg1;
- (void)logPlayerStateWithInteraction:(id)arg1;
- (void)dealloc;
- (id)initWithLogCenter:(id)arg1 player:(id)arg2 nowPlayingManager:(id)arg3 foregroundObserver:(id)arg4;

@end
