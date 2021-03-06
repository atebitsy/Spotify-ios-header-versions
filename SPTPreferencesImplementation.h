//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPrefs.h"

#import "SPTPreferences-Protocol.h"

@class NSString;

@interface SPTPreferencesImplementation : SPTPrefs <SPTPreferences>
{
}

@property(nonatomic) long long audioLoudnessEnvironment;
@property(nonatomic, getter=isAudioNormalised) _Bool audioNormalised;
@property(nonatomic) _Bool audioResyncBitrate;
@property(nonatomic) long long audioSyncBitrate;
@property(nonatomic) long long audioPlayBitrate;
@property(nonatomic) _Bool audioAutomix;
@property(nonatomic) long long audioCrossfadeTime;
@property(nonatomic) _Bool audioCrossfade;
@property(nonatomic) _Bool audioGapless;
- (id)initWithScheduler:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

