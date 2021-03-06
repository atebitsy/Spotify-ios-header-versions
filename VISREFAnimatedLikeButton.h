//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEButtonAnimatable.h"

#import "VISREFActionRowButtonViewModelDelegate-Protocol.h"

@class NSString, UINotificationFeedbackGenerator;
@protocol GLUEAnimationLottieStyling, VISREFActionRowButtonViewModel;

@interface VISREFAnimatedLikeButton : GLUEButtonAnimatable <VISREFActionRowButtonViewModelDelegate>
{
    _Bool _isUserInitiatedTransitionInProgress;
    id <VISREFActionRowButtonViewModel> _viewModel;
    id <GLUEAnimationLottieStyling> _heartAnimationStyler;
    UINotificationFeedbackGenerator *_feedbackGenerator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UINotificationFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(retain, nonatomic) id <GLUEAnimationLottieStyling> heartAnimationStyler; // @synthesize heartAnimationStyler=_heartAnimationStyler;
@property(nonatomic) _Bool isUserInitiatedTransitionInProgress; // @synthesize isUserInitiatedTransitionInProgress=_isUserInitiatedTransitionInProgress;
@property(retain, nonatomic) id <VISREFActionRowButtonViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)updateAccessibilityLabel:(id)arg1;
- (void)updateSelectedState:(_Bool)arg1 userInitiated:(_Bool)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)updateEnabledState:(_Bool)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

