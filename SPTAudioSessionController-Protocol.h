//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTAudioSessionActivator;
@protocol SPTAudioSessionControllerDelegate, SPTAudioSessionControllerObserver;

@protocol SPTAudioSessionController <NSObject>
- (void)wakewordModeEnabled:(_Bool)arg1;
- (_Bool)refreshAudioSessionConfiguration:(id *)arg1;
- (void)noteExplictPauseCommandIssued;
- (void)removeObserver:(id <SPTAudioSessionControllerObserver>)arg1;
- (void)addObserver:(id <SPTAudioSessionControllerObserver>)arg1;
- (_Bool)isActive;
@property(nonatomic) __weak id <SPTAudioSessionControllerDelegate> delegate;
- (SPTAudioSessionActivator *)activateAudioSession;

// Remaining properties
@property(nonatomic, readonly) _Bool active;
@end

