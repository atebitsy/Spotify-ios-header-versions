//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTUBILogger, SPTUBIMobileIosLockScreenEventFactory;

@interface SPTNowPlayingLockScreenUBILogger : NSObject
{
    id <SPTUBILogger> _ubiLogger;
    id <SPTUBIMobileIosLockScreenEventFactory> _eventFactory;
}

@property(readonly, nonatomic) id <SPTUBIMobileIosLockScreenEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
- (void).cxx_destruct;
- (void)logSkip15SecondsBackwardTapped;
- (void)logSkip15SecondsForwardTapped;
- (void)logBanButtonTappedWithFeedbackButtonBehavior:(long long)arg1 playerState:(id)arg2;
- (void)logHeartButtonTappedWithFeedbackButtonBehavior:(long long)arg1 playerState:(id)arg2;
- (void)logSkipToPreviousTappedWithPlayerState:(id)arg1;
- (void)logPlayButtonTappedWithBehavior:(long long)arg1 playerState:(id)arg2;
- (void)logSkipToNextTappedWithPlayerState:(id)arg1;
- (void)logProgressSliderScrubbedWithPlayerState:(id)arg1;
- (id)initWithUbiLogger:(id)arg1 eventFactory:(id)arg2;

@end
