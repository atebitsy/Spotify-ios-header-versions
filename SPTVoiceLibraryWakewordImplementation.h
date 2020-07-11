//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceLibraryAudioRecorderObserver-Protocol.h"
#import "SPTVoiceLibraryAudioSessionDelegate-Protocol.h"
#import "SPTVoiceLibraryWakeword-Protocol.h"

@class NSString, SPTVoiceLibraryAudioSessionManager;
@protocol OS_dispatch_queue, SPTVoiceLibraryAudioRecorder, SPTVoiceLibraryWakewordDelegate;

@interface SPTVoiceLibraryWakewordImplementation : NSObject <SPTVoiceLibraryAudioRecorderObserver, SPTVoiceLibraryAudioSessionDelegate, SPTVoiceLibraryWakeword>
{
    _Bool _isWakewordRunning;
    id <SPTVoiceLibraryWakewordDelegate> _delegate;
    struct SnsrSession_ *_session;
    struct SnsrStream_ *_audioStream;
    id <SPTVoiceLibraryAudioRecorder> _audioRecorder;
    SPTVoiceLibraryAudioSessionManager *_audioSessionManager;
    NSObject<OS_dispatch_queue> *_wakewordDetectionQueue;
    NSObject<OS_dispatch_queue> *_wakewordLoadingQueue;
    NSString *_modelPath;
}

@property(nonatomic) _Bool isWakewordRunning; // @synthesize isWakewordRunning=_isWakewordRunning;
@property(copy, nonatomic) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *wakewordLoadingQueue; // @synthesize wakewordLoadingQueue=_wakewordLoadingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *wakewordDetectionQueue; // @synthesize wakewordDetectionQueue=_wakewordDetectionQueue;
@property(retain, nonatomic) SPTVoiceLibraryAudioSessionManager *audioSessionManager; // @synthesize audioSessionManager=_audioSessionManager;
@property(retain, nonatomic) id <SPTVoiceLibraryAudioRecorder> audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(nonatomic) struct SnsrStream_ *audioStream; // @synthesize audioStream=_audioStream;
@property(nonatomic) struct SnsrSession_ *session; // @synthesize session=_session;
@property(nonatomic) __weak id <SPTVoiceLibraryWakewordDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioRecorder:(id)arg1 didRecordAudioChunk:(short **)arg2 ofSize:(unsigned int)arg3;
- (void)unload;
- (void)loadSensory;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (_Bool)hasActiveAudioSessionForAudioRecording;
- (void)dealloc;
- (id)initWithAudioRecorder:(id)arg1 audioSessionManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
