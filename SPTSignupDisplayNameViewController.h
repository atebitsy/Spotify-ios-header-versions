//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLoginTraitAwareViewController.h"

#import "SPTDynamicSignupFlowControllerDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTNavigationControllerTransitioning-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTSignupDisplayNameViewModelDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, NSURL, SPTLoginTheme, SPTSignupAnimatedTransitioning, SPTSignupDisplayNameView, SPTSignupDisplayNameViewModel, UIViewController;
@protocol SPTPageContainer;

@interface SPTSignupDisplayNameViewController : SPTLoginTraitAwareViewController <SPTNavigationControllerNavigationBarState, SPTNavigationControllerTransitioning, UITextFieldDelegate, SPTDynamicSignupFlowControllerDelegate, SPTPageController, SPTSignupDisplayNameViewModelDelegate>
{
    SPTSignupDisplayNameViewModel *_viewModel;
    SPTSignupAnimatedTransitioning *_animatedTransitioning;
    SPTLoginTheme *_theme;
}

@property(retain, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTSignupAnimatedTransitioning *animatedTransitioning; // @synthesize animatedTransitioning=_animatedTransitioning;
@property(retain, nonatomic) SPTSignupDisplayNameViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForPopOperationToViewController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForPushOperationFromViewController:(id)arg2;
- (unsigned long long)preferredNavigationBarState;
- (void)userDidAcceptAllLicences:(id)arg1;
@property(readonly, nonatomic) NSString *presentingControllerAdjustIdentifier;
@property(readonly, nonatomic) UIViewController *presentingFlowController;
- (void)createUserRequestDidFinishWithError:(id)arg1;
- (void)createUserRequestDidStart;
- (void)updateSubmitButtonState:(_Bool)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)nextButtonTapped:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTSignupDisplayNameView *view; // @dynamic view;

@end

