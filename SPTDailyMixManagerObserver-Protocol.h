//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTNowPlayingFeedbackManagerObserver-Protocol.h"

@class NSURL, SPTPlayerTrack;
@protocol SPTDailyMixManager;

@protocol SPTDailyMixManagerObserver <SPTNowPlayingFeedbackManagerObserver>

@optional
- (void)dailyMixManager:(id <SPTDailyMixManager>)arg1 track:(SPTPlayerTrack *)arg2 contextURL:(NSURL *)arg3 originalFeedback:(long long)arg4 didChangeTo:(long long)arg5;
@end
