//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "SPTNowPlayingRemoteControlEventPolicyController-Protocol.h"
#import "SPTNowPlayingRemoteEventSubtypesController-Protocol.h"

@class AVAudioPlayer, MPRemoteCommandCenter, NSMapTable, NSString, NSTimer, SPTNowPlayingLockScreenUBILogger, SPTNowPlayingModel;
@protocol SPTAccessoryActionLogger, SPTAudioSessionController, SPTNowPlayingRemoteControlEventPolicyControllerDelegate, SPTNowPlayingRemoteControlPolicy, SPTNowPlayingTestManager;

@interface SPTNowPlayingRemoteControlEventDefaultController : NSObject <AVAudioPlayerDelegate, SPTNowPlayingRemoteControlEventPolicyController, SPTNowPlayingRemoteEventSubtypesController>
{
    NSTimer *_seekTimer;
    AVAudioPlayer *play;
    AVAudioPlayer *pause;
    AVAudioPlayer *next;
    AVAudioPlayer *prev;
    AVAudioPlayer *toBeginning;
    AVAudioPlayer *fastprev_start;
    AVAudioPlayer *fastprev_end;
    AVAudioPlayer *ffwd_start;
    AVAudioPlayer *ffwd_end;
    _Bool _activeForRemoteControlPolicyUpdates;
    _Bool _playersLoaded;
    id <SPTNowPlayingRemoteControlEventPolicyControllerDelegate> _delegate;
    id <SPTNowPlayingRemoteControlPolicy> _remoteControlPolicy;
    id <SPTAudioSessionController> _audioSessionController;
    SPTNowPlayingModel *_nowPlayingModel;
    NSMapTable *_audioSessionActivators;
    MPRemoteCommandCenter *_remoteCommandCenter;
    CDUnknownBlockType _avAudioPlayerFactory;
    id <SPTNowPlayingTestManager> _testManager;
    id <SPTAccessoryActionLogger> _logger;
    SPTNowPlayingLockScreenUBILogger *_lockScreenUBILogger;
}

+ (id)soundsBundle;
- (void).cxx_destruct;
@property(nonatomic) _Bool playersLoaded; // @synthesize playersLoaded=_playersLoaded;
@property(readonly, nonatomic) SPTNowPlayingLockScreenUBILogger *lockScreenUBILogger; // @synthesize lockScreenUBILogger=_lockScreenUBILogger;
@property(readonly, nonatomic) id <SPTAccessoryActionLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(copy, nonatomic) CDUnknownBlockType avAudioPlayerFactory; // @synthesize avAudioPlayerFactory=_avAudioPlayerFactory;
@property(retain, nonatomic) MPRemoteCommandCenter *remoteCommandCenter; // @synthesize remoteCommandCenter=_remoteCommandCenter;
@property(retain, nonatomic) NSMapTable *audioSessionActivators; // @synthesize audioSessionActivators=_audioSessionActivators;
@property(retain, nonatomic) SPTNowPlayingModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(retain, nonatomic) id <SPTAudioSessionController> audioSessionController; // @synthesize audioSessionController=_audioSessionController;
@property(readonly, nonatomic) id <SPTNowPlayingRemoteControlPolicy> remoteControlPolicy; // @synthesize remoteControlPolicy=_remoteControlPolicy;
@property(nonatomic) __weak id <SPTNowPlayingRemoteControlEventPolicyControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isActiveForRemoteControlPolicyUpdates) _Bool activeForRemoteControlPolicyUpdates; // @synthesize activeForRemoteControlPolicyUpdates=_activeForRemoteControlPolicyUpdates;
- (void)performSeekToStartWithCommandEvent:(id)arg1;
- (void)performSkipToPreviousWithCommandEvent:(id)arg1 isContentWithEventOriginatingFromSiri:(_Bool)arg2;
- (void)perfromSkipToNextWithCommandEvent:(id)arg1;
- (_Bool)shouldSkip15sInsteadOfChangingTrackForEvent:(id)arg1;
- (_Bool)isEventOriginatingFromSiri:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (long long)shuffleButtonPressed:(id)arg1;
- (long long)repeatButtonPressed:(id)arg1;
- (void)playFeedbackSoundIfEnabled:(id)arg1;
- (id)playerForSoundNamed:(id)arg1;
- (void)logSeek:(id)arg1 withInterval:(long long)arg2;
- (void)seekForward;
- (void)seekForwardFromTimer:(id)arg1;
- (void)seekForwardWithEvent:(id)arg1;
- (void)seekBackward;
- (void)seekBackwardFromTimer:(id)arg1;
- (void)seekBackwardWithEvent:(id)arg1;
- (long long)bookmarkButtonPressed:(id)arg1;
- (void)logDislikeButtonPressed:(id)arg1;
- (long long)dislikeButtonPressed:(id)arg1;
- (void)logLikeButtonPressed:(id)arg1;
- (long long)likeButtonPressed:(id)arg1;
- (long long)handleChangePlaybackPosition:(id)arg1;
- (long long)handleSeekForwardCommand:(id)arg1;
- (long long)handleSeekBackwardCommand:(id)arg1;
- (long long)handleSkipForward:(id)arg1;
- (long long)handleSkipBackward:(id)arg1;
- (void)logHandlePreviousTrackCommand:(id)arg1;
- (long long)handlePreviousTrackCommand:(id)arg1;
- (void)logHandleNextTrackCommand:(id)arg1;
- (long long)handleNextTrackCommand:(id)arg1;
- (long long)handleStopCommand:(id)arg1;
- (long long)handleTogglePlayPauseCommand:(id)arg1;
- (void)logHandlePlayCommand:(id)arg1;
- (long long)handlePlayCommand:(id)arg1;
- (void)logHandlePauseCommand:(id)arg1;
- (long long)handlePauseCommand:(id)arg1;
- (long long)doNothing:(id)arg1;
- (void)applyRemoteControlPolicy:(id)arg1;
- (void)applyPolicyToCommand:(id)arg1 shouldBeAvailable:(_Bool)arg2 shouldBeEnabled:(_Bool)arg3 action:(SEL)arg4;
- (void)updateRemoteControlCenterWithPolicy:(id)arg1;
- (long long)priorityForUpdatingRemoteControlPolicy;
- (_Bool)handleRemoteEventSubType:(long long)arg1;
- (long long)priorityForHandlingRemoteEventSubtypes;
- (void)dealloc;
- (void)lazyLoadPlayers;
- (id)initWithNowPlayingModel:(id)arg1 audioSessionController:(id)arg2 remoteCommandCenter:(id)arg3 avAudioPlayerFactory:(CDUnknownBlockType)arg4 nowPlayingTestManager:(id)arg5 remoteControlEventLogger:(id)arg6 lockScreenUBILogger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

