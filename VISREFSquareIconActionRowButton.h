//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEButton.h"

#import "VISREFActionRowButtonViewModelDelegate-Protocol.h"

@class GLUEViewAnimator, NSString;
@protocol VISREFActionRowButtonViewModel;

@interface VISREFSquareIconActionRowButton : GLUEButton <VISREFActionRowButtonViewModelDelegate>
{
    id <VISREFActionRowButtonViewModel> _viewModel;
    GLUEViewAnimator *_animator;
    NSString *_accessibilityLabelText;
}

@property(copy, nonatomic) NSString *accessibilityLabelText; // @synthesize accessibilityLabelText=_accessibilityLabelText;
@property(retain, nonatomic) GLUEViewAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) id <VISREFActionRowButtonViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (struct CGSize)intrinsicContentSize;
- (void)updateStyle:(id)arg1;
- (void)updateTitle:(id)arg1;
- (void)updateSelectedState:(_Bool)arg1;
- (void)updateEnabledState:(_Bool)arg1;
- (void)updateAccessibilityLabel:(id)arg1;
- (void)animateToHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateIcon:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

