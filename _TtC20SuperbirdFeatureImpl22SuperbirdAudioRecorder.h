//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceLibraryAudioRecorder-Protocol.h"

@interface _TtC20SuperbirdFeatureImpl22SuperbirdAudioRecorder : NSObject <SPTVoiceLibraryAudioRecorder>
{
    // Error parsing type: , name: observerManager
    // Error parsing type: , name: isRecording
    // Error parsing type: , name: sampleRate
}

- (void).cxx_destruct;
- (id)init;
- (void)stopRecording;
- (void)startRecording;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(nonatomic) double sampleRate; // @synthesize sampleRate;
@property(nonatomic) _Bool recording; // @synthesize recording=isRecording;
- (_Bool)isRecording;
@property(nonatomic, readonly) id observerManager; // @synthesize observerManager;

@end

