//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAdVoiceCommandAudioPlayer;

@interface SPTAdVoicePlayEarconEffectHandler : NSObject
{
    SPTAdVoiceCommandAudioPlayer *_voiceCommandPlayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTAdVoiceCommandAudioPlayer *voiceCommandPlayer; // @synthesize voiceCommandPlayer=_voiceCommandPlayer;
- (void)handleEffect:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)initWithVoiceCommandPlayer:(id)arg1;

@end

