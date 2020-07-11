//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingRemoteControlPolicy-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSArray, NSHashTable, NSMutableDictionary, NSString, NSURL, SPTFormatListPlatformRemoteControlPolicyManagerImplementation, SPTPlayerState;
@protocol SPTFeedbackManager, SPTFormatListModel, SPTFormatListPlatformResolver, SPTLogCenter, SPTPlayer;

@interface SPTFormatListPlatformRemoteControlPolicyImplementation : NSObject <SPTPlayerObserver, SPTNowPlayingRemoteControlPolicy>
{
    _Bool _shouldNextTrackCommandBeAvailable;
    _Bool _shouldNextTrackCommandBeEnabled;
    _Bool _shouldPreviousTrackCommandBeAvailable;
    _Bool _shouldPreviousTrackCommandBeEnabled;
    _Bool _shouldSkipBackwardCommandBeAvailable;
    _Bool _shouldSkipBackwardCommandBeEnabled;
    _Bool _shouldSkipForwardCommandBeAvailable;
    _Bool _shouldSkipForwardCommandBeEnabled;
    _Bool _shouldChangePlaybackPositionCommandBeAvailable;
    _Bool _shouldChangePlaybackPositionCommandBeEnabled;
    _Bool _shouldPauseCommandBeEnabled;
    _Bool _shouldLikeCommandBeAvailable;
    _Bool _shouldLikeCommandBeEnabled;
    _Bool _shouldLikeCommandBeSelected;
    _Bool _likeCommandSelectedOverridden;
    _Bool _shouldDislikeCommandBeAvailable;
    _Bool _shouldDislikeCommandBeEnabled;
    _Bool _shouldDislikeCommandBeSelected;
    _Bool _shouldBookmarkCommandBeAvailable;
    _Bool _shouldBookmarkCommandBeEnabled;
    SPTPlayerState *_playerState;
    NSURL *_URI;
    id <SPTFormatListPlatformResolver> _resolver;
    id <SPTPlayer> _player;
    id <SPTLogCenter> _logCenter;
    SPTFormatListPlatformRemoteControlPolicyManagerImplementation *_remoteControlPolicyManager;
    id <SPTFeedbackManager> _feedbackManager;
    NSArray *_skipBackwardCommandIntervals;
    NSArray *_skipForwardCommandIntervals;
    NSString *_localizedTitleForBookmarkCommand;
    NSHashTable *_observers;
    id <SPTFormatListModel> _model;
    NSMutableDictionary *_overrides;
}

@property(readonly, nonatomic) NSMutableDictionary *overrides; // @synthesize overrides=_overrides;
@property(retain, nonatomic) id <SPTFormatListModel> model; // @synthesize model=_model;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSString *localizedTitleForBookmarkCommand; // @synthesize localizedTitleForBookmarkCommand=_localizedTitleForBookmarkCommand;
@property(nonatomic) _Bool shouldBookmarkCommandBeEnabled; // @synthesize shouldBookmarkCommandBeEnabled=_shouldBookmarkCommandBeEnabled;
@property(nonatomic) _Bool shouldBookmarkCommandBeAvailable; // @synthesize shouldBookmarkCommandBeAvailable=_shouldBookmarkCommandBeAvailable;
@property(nonatomic) _Bool shouldDislikeCommandBeSelected; // @synthesize shouldDislikeCommandBeSelected=_shouldDislikeCommandBeSelected;
@property(nonatomic) _Bool shouldDislikeCommandBeEnabled; // @synthesize shouldDislikeCommandBeEnabled=_shouldDislikeCommandBeEnabled;
@property(nonatomic) _Bool shouldDislikeCommandBeAvailable; // @synthesize shouldDislikeCommandBeAvailable=_shouldDislikeCommandBeAvailable;
@property(nonatomic) _Bool likeCommandSelectedOverridden; // @synthesize likeCommandSelectedOverridden=_likeCommandSelectedOverridden;
@property(nonatomic) _Bool shouldLikeCommandBeSelected; // @synthesize shouldLikeCommandBeSelected=_shouldLikeCommandBeSelected;
@property(nonatomic) _Bool shouldLikeCommandBeEnabled; // @synthesize shouldLikeCommandBeEnabled=_shouldLikeCommandBeEnabled;
@property(nonatomic) _Bool shouldLikeCommandBeAvailable; // @synthesize shouldLikeCommandBeAvailable=_shouldLikeCommandBeAvailable;
@property(nonatomic) _Bool shouldPauseCommandBeEnabled; // @synthesize shouldPauseCommandBeEnabled=_shouldPauseCommandBeEnabled;
@property(nonatomic) _Bool shouldChangePlaybackPositionCommandBeEnabled; // @synthesize shouldChangePlaybackPositionCommandBeEnabled=_shouldChangePlaybackPositionCommandBeEnabled;
@property(nonatomic) _Bool shouldChangePlaybackPositionCommandBeAvailable; // @synthesize shouldChangePlaybackPositionCommandBeAvailable=_shouldChangePlaybackPositionCommandBeAvailable;
@property(retain, nonatomic) NSArray *skipForwardCommandIntervals; // @synthesize skipForwardCommandIntervals=_skipForwardCommandIntervals;
@property(nonatomic) _Bool shouldSkipForwardCommandBeEnabled; // @synthesize shouldSkipForwardCommandBeEnabled=_shouldSkipForwardCommandBeEnabled;
@property(nonatomic) _Bool shouldSkipForwardCommandBeAvailable; // @synthesize shouldSkipForwardCommandBeAvailable=_shouldSkipForwardCommandBeAvailable;
@property(retain, nonatomic) NSArray *skipBackwardCommandIntervals; // @synthesize skipBackwardCommandIntervals=_skipBackwardCommandIntervals;
@property(nonatomic) _Bool shouldSkipBackwardCommandBeEnabled; // @synthesize shouldSkipBackwardCommandBeEnabled=_shouldSkipBackwardCommandBeEnabled;
@property(nonatomic) _Bool shouldSkipBackwardCommandBeAvailable; // @synthesize shouldSkipBackwardCommandBeAvailable=_shouldSkipBackwardCommandBeAvailable;
@property(nonatomic) _Bool shouldPreviousTrackCommandBeEnabled; // @synthesize shouldPreviousTrackCommandBeEnabled=_shouldPreviousTrackCommandBeEnabled;
@property(nonatomic) _Bool shouldPreviousTrackCommandBeAvailable; // @synthesize shouldPreviousTrackCommandBeAvailable=_shouldPreviousTrackCommandBeAvailable;
@property(nonatomic) _Bool shouldNextTrackCommandBeEnabled; // @synthesize shouldNextTrackCommandBeEnabled=_shouldNextTrackCommandBeEnabled;
@property(nonatomic) _Bool shouldNextTrackCommandBeAvailable; // @synthesize shouldNextTrackCommandBeAvailable=_shouldNextTrackCommandBeAvailable;
@property(readonly, nonatomic) id <SPTFeedbackManager> feedbackManager; // @synthesize feedbackManager=_feedbackManager;
@property(readonly, nonatomic) SPTFormatListPlatformRemoteControlPolicyManagerImplementation *remoteControlPolicyManager; // @synthesize remoteControlPolicyManager=_remoteControlPolicyManager;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTFormatListPlatformResolver> resolver; // @synthesize resolver=_resolver;
@property(readonly, nonatomic) NSURL *URI; // @synthesize URI=_URI;
@property(retain, nonatomic) SPTPlayerState *playerState; // @synthesize playerState=_playerState;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (id)filterURL:(id)arg1 reason:(id)arg2;
- (void)refreshState;
- (void)notifyObserversOfChange;
- (id)valueForKeyInPlayerState:(id)arg1;
- (void)load;
- (void)dealloc;
- (id)initWithResolver:(id)arg1 URI:(id)arg2 player:(id)arg3 logCenter:(id)arg4 remoteControlPolicyManager:(id)arg5 feedbackManager:(id)arg6;
- (void)deleteExistingFeedbackWithCompletion:(CDUnknownBlockType)arg1 identifier:(id)arg2;
- (void)addDislikeFeedbackWithCompletion:(CDUnknownBlockType)arg1 identifier:(id)arg2;
- (void)addLikeFeedbackWithCompletion:(CDUnknownBlockType)arg1 identifier:(id)arg2;
- (void)removeRemoteControlStateUpdateObserver:(id)arg1;
- (void)addRemoteControlStateUpdateObserver:(id)arg1;
- (void)bookmarkButtonPressedWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool shouldPlaybackSpeedControlBeEnabled;
@property(readonly, nonatomic) _Bool shouldPlaybackSpeedControlBeAvailable;
@property(readonly, nonatomic) _Bool shouldSeekBackwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSeekBackwardCommandBeAvailable;
@property(readonly, nonatomic) _Bool shouldSeekForwardCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldSeekForwardCommandBeAvailable;
- (_Bool)shuffleButtonPressedWithShuffleType:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldShuffleCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldShuffleCommandBeAvailable;
- (_Bool)repeatButtonPressedWithRepeatType:(long long)arg1;
@property(readonly, nonatomic) _Bool shouldRepeatCommandBeEnabled;
@property(readonly, nonatomic) _Bool shouldRepeatCommandBeAvailable;
- (void)dislikeButtonPressedWithCompletion:(CDUnknownBlockType)arg1 identifier:(id)arg2;
- (void)likeButtonPressedWithCompletion:(CDUnknownBlockType)arg1 identifier:(id)arg2;
- (void)skipForwardWithInterval:(double)arg1;
- (void)skipBackwardWithInterval:(double)arg1;
@property(readonly, nonatomic) NSString *localizedTitleForDislikeCommand;
@property(readonly, nonatomic) NSString *localizedTitleForLikeCommand;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

