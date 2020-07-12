//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SPTVoiceLibrarySpeechProxyRequest;
@protocol SPTVoiceLibraryAudioRecorder;

@interface SPTVoiceLibrarySessionHandlingOptions : NSObject <NSCopying>
{
    _Bool _requiresBackgroundRecording;
    _Bool _shouldPausePlayback;
    SPTVoiceLibrarySpeechProxyRequest *_speechProxyRequest;
    id <SPTVoiceLibraryAudioRecorder> _externalAudioRecorder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTVoiceLibraryAudioRecorder> externalAudioRecorder; // @synthesize externalAudioRecorder=_externalAudioRecorder;
@property(retain, nonatomic) SPTVoiceLibrarySpeechProxyRequest *speechProxyRequest; // @synthesize speechProxyRequest=_speechProxyRequest;
@property(nonatomic) _Bool shouldPausePlayback; // @synthesize shouldPausePlayback=_shouldPausePlayback;
@property(nonatomic) _Bool requiresBackgroundRecording; // @synthesize requiresBackgroundRecording=_requiresBackgroundRecording;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

