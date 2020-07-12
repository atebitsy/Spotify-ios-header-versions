//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIInteractionEvent;

@protocol SPTUBIMobileExternalAccessoryEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitUiNavigateWithDestination:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitAddItemToQueueWithItemToAddToQueue:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitSeekByTimeWithMsSeekedOffset:(long long)arg1;
- (id <SPTUBIInteractionEvent>)hitSeekToTimeWithMsToSeekTo:(long long)arg1;
- (id <SPTUBIInteractionEvent>)hitRemoveLikeWithItemNoLongerLiked:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitShuffleEnable;
- (id <SPTUBIInteractionEvent>)hitShuffleDisable;
- (id <SPTUBIInteractionEvent>)hitRepeatDisable;
- (id <SPTUBIInteractionEvent>)hitRepeatOneEnable;
- (id <SPTUBIInteractionEvent>)hitRepeatEnable;
- (id <SPTUBIInteractionEvent>)hitLikeWithItemToBeLiked:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitSkipToPreviousWithItemToBeSkipped:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitSkipToNextWithItemToBeSkipped:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitPauseWithItemToBePaused:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitResumeWithItemToBeResumed:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitPlayWithItemToBePlayed:(NSURL *)arg1;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
