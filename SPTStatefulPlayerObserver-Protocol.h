//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, SPTStatefulPlayer;

@protocol SPTStatefulPlayerObserver <NSObject>
- (void)playerDidReceiveStateUpdate:(SPTStatefulPlayer *)arg1;
- (void)playerDidUpdatePlaybackControls:(SPTStatefulPlayer *)arg1;
- (void)playerDidUpdateTrackPosition:(SPTStatefulPlayer *)arg1;
- (void)player:(SPTStatefulPlayer *)arg1 didMoveToRelativeTrack:(NSNumber *)arg2;

@optional
- (void)playerWillSkipToNextTrack:(SPTStatefulPlayer *)arg1;
- (void)playerDidSynchronizeQueue:(SPTStatefulPlayer *)arg1;
- (void)playerPreviousTrackDidChange:(SPTStatefulPlayer *)arg1;
- (void)playerNextTrackDidChange:(SPTStatefulPlayer *)arg1;
@end

