//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAudioSessionControllerDelegate-Protocol.h"
#import "SPTVoiceLibraryAudioSession-Protocol.h"

@class NSHashTable, NSString, SPTAudioSessionActivator;
@protocol SPTAudioSessionController;

@interface SPTVoiceLibraryAudioSessionManager : NSObject <SPTAudioSessionControllerDelegate, SPTVoiceLibraryAudioSession>
{
    _Bool _sessionConfigured;
    _Bool _shouldRequestRecording;
    NSHashTable *delegates;
    id <SPTAudioSessionController> _audioSessionController;
    SPTAudioSessionActivator *_audioSessionActivator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldRequestRecording; // @synthesize shouldRequestRecording=_shouldRequestRecording;
@property(retain, nonatomic) SPTAudioSessionActivator *audioSessionActivator; // @synthesize audioSessionActivator=_audioSessionActivator;
@property(readonly, nonatomic) __weak id <SPTAudioSessionController> audioSessionController; // @synthesize audioSessionController=_audioSessionController;
@property(nonatomic, getter=isSessionConfigured) _Bool sessionConfigured; // @synthesize sessionConfigured=_sessionConfigured;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates;
- (_Bool)audioSessionShouldSupportRecording:(id)arg1;
- (_Bool)shouldModifyAudioSession:(id)arg1;
- (void)refreshAudioSessionConfiguration;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)disableAudioSessionForWakeword;
- (void)enableAudioSessionForWakeword;
- (void)relinquishSupportForAudioRecording;
- (void)requestSupportForAudioRecording;
- (void)deactiveAudioSession;
- (void)configureAudioSession;
- (void)dealloc;
- (id)initWithAudioSessionController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

