//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTBarInteractiveTransitionParticipant-Protocol.h"

@class SPBarViewController, UIScrollView;
@protocol SPTNowPlayingScrollViewControllerGestureDelegate;

@protocol SPTBarOverlayViewController <SPTBarInteractiveTransitionParticipant>

@optional
- (void)setGestureDelegate:(id <SPTNowPlayingScrollViewControllerGestureDelegate>)arg1;
- (UIScrollView *)scrollViewForBarTransition;
- (void)overlayWillDismissInteractively;
- (void)overlayWillPresentInteractively;
- (_Bool)barViewControllerInteractiveTransitionEnabled:(SPBarViewController *)arg1;
- (void)overlayWasShown;
- (void)overlayWasHidden;
@end

