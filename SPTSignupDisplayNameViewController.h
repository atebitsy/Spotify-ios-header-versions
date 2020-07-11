//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLoginViewControllerProtocol-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTNavigationControllerTransitioning-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTSignupDisplayNameViewModelDelegate-Protocol.h"
#import "SPTSignupTermsAndPolicyViewModelDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSError, NSString, NSURL, SPTLoginLayoutTestManager, SPTLoginTheme, SPTSignupAnimatedTransitioning, SPTSignupDisplayNameView, SPTSignupDisplayNameViewModel;
@protocol SPTPageContainer;

@interface SPTSignupDisplayNameViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTNavigationControllerTransitioning, UITextFieldDelegate, SPTSignupTermsAndPolicyViewModelDelegate, SPTPageController, SPTSignupDisplayNameViewModelDelegate, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTSignupDisplayNameViewModel *_viewModel;
    SPTSignupAnimatedTransitioning *_animatedTransitioning;
    SPTLoginTheme *_theme;
    SPTLoginLayoutTestManager *_testManager;
}

@property(readonly, nonatomic) SPTLoginLayoutTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTSignupAnimatedTransitioning *animatedTransitioning; // @synthesize animatedTransitioning=_animatedTransitioning;
@property(retain, nonatomic) SPTSignupDisplayNameViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForPopOperationToViewController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForPushOperationFromViewController:(id)arg2;
- (unsigned long long)preferredNavigationBarState;
- (void)userDidAcceptAllLicences:(id)arg1;
@property(readonly, nonatomic) NSString *presentingControllerAdjustIdentifier;
@property(readonly, nonatomic) UIViewController *presentingController;
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
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2 testManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTSignupDisplayNameView *view; // @dynamic view;

@end
