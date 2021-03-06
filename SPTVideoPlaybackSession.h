//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BMConnectionModeObserver-Protocol.h"
#import "BMDRMManagerObserver-Protocol.h"
#import "SPTVideoApplicationStateObserver-Protocol.h"
#import "SPTVideoPlayerSourceObserver-Protocol.h"
#import "SPTVideoResourceLoaderInternalDelegate-Protocol.h"

@class BMDRMManager, NSDate, NSString, SPTAudioFormatImpl, SPTPlayerItemErrorLogEventFilter, SPTVideoApplicationStateObservable, SPTVideoCDNSelector, SPTVideoFormatImpl, SPTVideoPlayerSource;
@protocol BMConnectionModeObservable, BMPlaybackIdentity, BMPlayerConfiguration, SPTNotificationCenter, SPTVideoEventDispatcher, SPTVideoPlaybackErrorFormatter, SPTVideoPlaybackSessionAssetLoader, SPTVideoPlaybackSessionDelegate, SPTVideoPlaybackTimeObservableInternal, SPTVideoResourceLoaderInternal;

@interface SPTVideoPlaybackSession : NSObject <SPTVideoResourceLoaderInternalDelegate, BMDRMManagerObserver, SPTVideoApplicationStateObserver, BMConnectionModeObserver, SPTVideoPlayerSourceObserver>
{
    _Bool _paused;
    _Bool _seeking;
    _Bool _stalled;
    _Bool _buffering;
    _Bool _rebufferedAfterForegrounding;
    _Bool _sessionStartNotificationSent;
    _Bool _requireRetryToResume;
    _Bool _retrying;
    float _preferredPlaybackSpeed;
    float _effectivePlaybackRate;
    id <BMPlaybackIdentity> _identity;
    id <SPTVideoPlaybackSessionDelegate> _delegate;
    SPTVideoPlayerSource *_playerSource;
    id <SPTVideoResourceLoaderInternal> _resourceLoader;
    BMDRMManager *_drmManager;
    id <SPTVideoEventDispatcher> _eventDispatcher;
    id <BMPlayerConfiguration> _playerConfiguration;
    id <SPTNotificationCenter> _notificationCenter;
    id <SPTVideoPlaybackErrorFormatter> _videoPlaybackErrorFormatter;
    id <SPTVideoPlaybackSessionAssetLoader> _sessionAssetLoader;
    id <SPTVideoPlaybackTimeObservableInternal> _playbackTimeObservable;
    SPTVideoCDNSelector *_cdnSelector;
    SPTVideoApplicationStateObservable *_appStateObservable;
    double _initialOffset;
    double _duration;
    double _lastSeekTime;
    NSDate *_lastSeekEventDate;
    long long _playerResetCount;
    SPTPlayerItemErrorLogEventFilter *_playerItemErrorLogEventFilter;
    SPTVideoFormatImpl *_currentVideoFormat;
    SPTAudioFormatImpl *_currentAudioFormat;
    id <BMConnectionModeObservable> _connectionModeObservable;
    unsigned long long _connectionMode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long connectionMode; // @synthesize connectionMode=_connectionMode;
@property(retain, nonatomic) id <BMConnectionModeObservable> connectionModeObservable; // @synthesize connectionModeObservable=_connectionModeObservable;
@property(retain, nonatomic) SPTAudioFormatImpl *currentAudioFormat; // @synthesize currentAudioFormat=_currentAudioFormat;
@property(retain, nonatomic) SPTVideoFormatImpl *currentVideoFormat; // @synthesize currentVideoFormat=_currentVideoFormat;
@property(retain, nonatomic) SPTPlayerItemErrorLogEventFilter *playerItemErrorLogEventFilter; // @synthesize playerItemErrorLogEventFilter=_playerItemErrorLogEventFilter;
@property(nonatomic) _Bool retrying; // @synthesize retrying=_retrying;
@property(nonatomic) _Bool requireRetryToResume; // @synthesize requireRetryToResume=_requireRetryToResume;
@property(nonatomic) _Bool sessionStartNotificationSent; // @synthesize sessionStartNotificationSent=_sessionStartNotificationSent;
@property(nonatomic) _Bool rebufferedAfterForegrounding; // @synthesize rebufferedAfterForegrounding=_rebufferedAfterForegrounding;
@property(nonatomic) long long playerResetCount; // @synthesize playerResetCount=_playerResetCount;
@property(retain, nonatomic) NSDate *lastSeekEventDate; // @synthesize lastSeekEventDate=_lastSeekEventDate;
@property(nonatomic) double lastSeekTime; // @synthesize lastSeekTime=_lastSeekTime;
@property(nonatomic) float effectivePlaybackRate; // @synthesize effectivePlaybackRate=_effectivePlaybackRate;
@property(nonatomic) _Bool buffering; // @synthesize buffering=_buffering;
@property(nonatomic) _Bool stalled; // @synthesize stalled=_stalled;
@property(nonatomic) _Bool seeking; // @synthesize seeking=_seeking;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double initialOffset; // @synthesize initialOffset=_initialOffset;
@property(retain, nonatomic) SPTVideoApplicationStateObservable *appStateObservable; // @synthesize appStateObservable=_appStateObservable;
@property(retain, nonatomic) SPTVideoCDNSelector *cdnSelector; // @synthesize cdnSelector=_cdnSelector;
@property(retain, nonatomic) id <SPTVideoPlaybackTimeObservableInternal> playbackTimeObservable; // @synthesize playbackTimeObservable=_playbackTimeObservable;
@property(retain, nonatomic) id <SPTVideoPlaybackSessionAssetLoader> sessionAssetLoader; // @synthesize sessionAssetLoader=_sessionAssetLoader;
@property(retain, nonatomic) id <SPTVideoPlaybackErrorFormatter> videoPlaybackErrorFormatter; // @synthesize videoPlaybackErrorFormatter=_videoPlaybackErrorFormatter;
@property(retain, nonatomic) id <SPTNotificationCenter> notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) id <BMPlayerConfiguration> playerConfiguration; // @synthesize playerConfiguration=_playerConfiguration;
@property(retain, nonatomic) id <SPTVideoEventDispatcher> eventDispatcher; // @synthesize eventDispatcher=_eventDispatcher;
@property(retain, nonatomic) BMDRMManager *drmManager; // @synthesize drmManager=_drmManager;
@property(retain, nonatomic) id <SPTVideoResourceLoaderInternal> resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(retain, nonatomic) SPTVideoPlayerSource *playerSource; // @synthesize playerSource=_playerSource;
@property(nonatomic) float preferredPlaybackSpeed; // @synthesize preferredPlaybackSpeed=_preferredPlaybackSpeed;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) __weak id <SPTVideoPlaybackSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <BMPlaybackIdentity> identity; // @synthesize identity=_identity;
- (void)refreshSession;
- (void)connectionModeDidChange:(unsigned long long)arg1;
- (void)triggerPlaybackEventsForAccessLogEvent:(id)arg1;
- (void)videoPlaybackdidEndPlaybackWithReason:(long long)arg1;
- (void)refreshBufferingState;
- (_Bool)playing;
- (void)markLastUsedCDNFail;
- (void)markLastUsedCDNOk;
- (void)resourceLoader:(id)arg1 didEncounterError:(id)arg2;
- (void)resourceLoaderDidLoadEncryptionKey:(id)arg1 ofEncryptionType:(long long)arg2;
- (void)resourceLoaderWillLoadEncryptionKey:(id)arg1;
- (void)resourceLoader:(id)arg1 didLoadManifestWithAvailableSubtitles:(id)arg2;
- (void)resourceLoaderWillLoadManifest:(id)arg1;
- (void)resourceLoader:(id)arg1 willDownloadVideoSegment:(long long)arg2;
- (void)resourceLoaderDidEnableFullVideoUsage:(id)arg1;
- (void)addPeriodicTimeObserver;
- (void)effectiveRateChanged;
- (void)playerSource:(id)arg1 newErrorLogEntry:(id)arg2;
- (void)playerSource:(id)arg1 newAccessLogEntry:(id)arg2;
- (void)playerSource:(id)arg1 playerItem:(id)arg2 failedToPlayToEndWithError:(id)arg3;
- (void)playerSource:(id)arg1 didReachEndForPlayerItem:(id)arg2;
- (void)playerSource:(id)arg1 didUpdateSeekableWindow:(id)arg2;
- (void)playerSource:(id)arg1 didChangeSubtitle:(id)arg2;
- (void)playerSource:(id)arg1 didChangeDuration:(double)arg2;
- (void)didChangeBackgroundState:(_Bool)arg1;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)didEndLicenceRequestWithError:(id)arg1;
- (void)didStartLicenceRequest;
- (void)sendPlaybackError:(id)arg1;
- (void)playerSource:(id)arg1 playerItem:(id)arg2 likelyToKeepUp:(_Bool)arg3;
- (void)playerSource:(id)arg1 playerItem:(id)arg2 statusChanged:(long long)arg3;
- (void)notifySurfaceChange:(id)arg1;
- (void)assetFailedToPrepareForPlayback:(id)arg1;
- (void)refreshAVStack;
- (void)processPlayerItem:(id)arg1;
- (void)playerSource:(id)arg1 resetPlayerWithError:(id)arg2;
- (void)resume;
- (void)pause;
- (double)adjustCurrentPosition:(double)arg1 forItem:(id)arg2;
- (double)currentPosition;
- (id)availableSubtitles;
- (void)seekTo:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)retrySession;
- (void)unloadPlayerAndResetState;
- (void)unloadSessionWithNextIdentity:(id)arg1;
- (void)loadSession;
- (void)dealloc;
- (id)initWithPlaybackIdentity:(id)arg1 options:(id)arg2 eventDispatcher:(id)arg3 resourceLoader:(id)arg4 drmManager:(id)arg5 connectionModeObservable:(id)arg6 notificationCenter:(id)arg7 videoPlaybackErrorFormatter:(id)arg8 playbackTimeObservable:(id)arg9 sessionAssetLoader:(id)arg10 playerSource:(id)arg11 cndSelector:(id)arg12 playerConfiguration:(id)arg13 appStateObservable:(id)arg14 playerItemErrorLogEventFilter:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

