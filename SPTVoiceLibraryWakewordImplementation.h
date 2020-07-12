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
@protocol OS_dispatch_queue, SPTVoiceLibraryAudioRecorder, SPTVoiceLibraryWakewordDelegate, SPTVoiceLibraryWakewordProviderLogger;

@interface SPTVoiceLibraryWakewordImplementation : NSObject <SPTVoiceLibraryAudioRecorderObserver, SPTVoiceLibraryAudioSessionDelegate, SPTVoiceLibraryWakeword>
{
    id <SPTVoiceLibraryWakewordDelegate> _delegate;
    struct SnsrSession_ *_session;
    struct SnsrStream_ *_audioStream;
    id <SPTVoiceLibraryAudioRecorder> _audioRecorder;
    SPTVoiceLibraryAudioSessionManager *_audioSessionManager;
    NSObject<OS_dispatch_queue> *_wakewordDetectionQueue;
    NSObject<OS_dispatch_queue> *_wakewordLoadingQueue;
    NSString *_modelPath;
    unsigned long long _state;
    id <SPTVoiceLibraryWakewordProviderLogger> _logger;
    NSString *_sessionIdentifier;
}

@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) id <SPTVoiceLibraryWakewordProviderLogger> logger; // @synthesize logger=_logger;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *modelPath; // @synthesize modelPath=_modelPath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *wakewordLoadingQueue; // @synthesize wakewordLoadingQueue=_wakewordLoadingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *wakewordDetectionQueue; // @synthesize wakewordDetectionQueue=_wakewordDetectionQueue;
@property(retain, nonatomic) SPTVoiceLibraryAudioSessionManager *audioSessionManager; // @synthesize audioSessionManager=_audioSessionManager;
@property(retain, nonatomic) id <SPTVoiceLibraryAudioRecorder> audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(nonatomic) struct SnsrStream_ *audioStream; // @synthesize audioStream=_audioStream;
@property(nonatomic) struct SnsrSession_ *session; // @synthesize session=_session;
@property(nonatomic) __weak id <SPTVoiceLibraryWakewordDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)audioRecorderDidStartRecording:(id)arg1;
- (void)audioRecorder:(id)arg1 didFailWithError:(id)arg2;
- (void)audioRecorder:(id)arg1 didRecordAudioChunk:(short **)arg2 ofSize:(unsigned int)arg3;
- (_Bool)isActive;
- (void)logErrorWithDomain:(id)arg1 andDescription:(id)arg2;
- (id)generateSessionIdentifier;
- (void)unload;
- (void)loadSensoryWithCompletion:(CDUnknownBlockType)arg1;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (_Bool)hasActiveAudioSessionForAudioRecording;
- (void)dealloc;
- (id)initWithAudioRecorder:(id)arg1 audioSessionManager:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

