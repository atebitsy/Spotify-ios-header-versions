//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, NSURL, SPTAccessory;

@protocol SPTAccessoryActionLogger <NSObject>
- (NSString *)logPlaySomethingFromAccessory:(SPTAccessory *)arg1;
- (NSString *)logSearchWithSearchQuery:(NSString *)arg1 fromAccessory:(SPTAccessory *)arg2;
- (NSString *)logSetPlaybackSpeedWithPlaybackSpeed:(NSNumber *)arg1 fromAccessory:(SPTAccessory *)arg2;
- (NSString *)logUiNavigateWithDestination:(NSURL *)arg1 fromAccessory:(SPTAccessory *)arg2;
- (NSString *)logAddItemToQueueWithItemToAddToQueue:(NSURL *)arg1 fromAccessory:(SPTAccessory *)arg2;
- (NSString *)logSeekByTimeWithSecondsSeekedOffset:(long long)arg1 fromAccessory:(SPTAccessory *)arg2;
- (NSString *)logSeekToTimeWithSecondsToSeekTo:(long long)arg1 fromAccessory:(SPTAccessory *)arg2;
- (NSString *)logRemoveLikeWithCurrentItemNoLongerLikedFromAccessory:(SPTAccessory *)arg1;
- (NSString *)logShuffleEnableFromAccessory:(SPTAccessory *)arg1;
- (NSString *)logShuffleDisableFromAccessory:(SPTAccessory *)arg1;
- (NSString *)logRepeatDisableFromAccessory:(SPTAccessory *)arg1;
- (NSString *)logRepeatOneEnableFromAccessory:(SPTAccessory *)arg1;
- (NSString *)logRepeatEnableFromAccessory:(SPTAccessory *)arg1;
- (NSString *)logLikeWithCurrentItemToBeLikedFromAccessory:(SPTAccessory *)arg1;
- (NSString *)logSkipToPreviousWithCurrentItemToBeSkippedFromAccessory:(SPTAccessory *)arg1;
- (NSString *)logSkipToNextWithCurrentItemToBeSkippedFromAccessory:(SPTAccessory *)arg1;
- (NSString *)logPauseWithCurrentItemToBePausedFromAccessory:(SPTAccessory *)arg1;
- (NSString *)logResumeWithCurrentItemToBeResumedFromAccessory:(SPTAccessory *)arg1;
- (NSString *)logPlayWithItemToBePlayed:(NSURL *)arg1 withInteractionId:(NSString *)arg2 fromAccessory:(SPTAccessory *)arg3;
@end

