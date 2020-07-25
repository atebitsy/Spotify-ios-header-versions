//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTDynamicSignupFlowController, SPTLoginErrorDialogLogger, SPTLoginSplitEmailSignupViewLogger, SPTSignupGenderArray, SPTSignupTermsAndPolicyViewModel, SPTSignupUserInfoModel;
@protocol SPTSignupGenderViewModelDelegate;

@interface SPTSignupGenderViewModel : NSObject
{
    id <SPTSignupGenderViewModelDelegate> _delegate;
    SPTLoginSplitEmailSignupViewLogger *_logger;
    SPTDynamicSignupFlowController *_flowController;
    SPTSignupTermsAndPolicyViewModel *_termsAndPolicyViewModel;
    SPTSignupUserInfoModel *_userInfoModel;
    SPTLoginErrorDialogLogger *_dialogLogger;
    SPTSignupGenderArray *_genderArray;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTSignupGenderArray *genderArray; // @synthesize genderArray=_genderArray;
@property(readonly, nonatomic) SPTLoginErrorDialogLogger *dialogLogger; // @synthesize dialogLogger=_dialogLogger;
@property(readonly, nonatomic) SPTSignupUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(retain, nonatomic) SPTSignupTermsAndPolicyViewModel *termsAndPolicyViewModel; // @synthesize termsAndPolicyViewModel=_termsAndPolicyViewModel;
@property(retain, nonatomic) SPTDynamicSignupFlowController *flowController; // @synthesize flowController=_flowController;
@property(readonly, nonatomic) SPTLoginSplitEmailSignupViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTSignupGenderViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userDidTapNextButton;
- (id)genderForIndex:(long long)arg1;
- (long long)genderCount;
- (_Bool)isTermsAndPolicyViewHidden;
- (id)nextButtonText;
- (id)fieldTitleLabelText;
- (id)titleLabelText;
@property(nonatomic) long long selectedIndex;
- (id)initWithLogger:(id)arg1 userInfoModel:(id)arg2 dialogLogger:(id)arg3 termsAndPolicyViewModel:(id)arg4 flowController:(id)arg5 genderArray:(id)arg6;

@end

