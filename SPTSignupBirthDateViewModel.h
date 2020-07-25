//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTDynamicSignupFlowController, SPTLoginErrorDialogLogger, SPTLoginSplitEmailSignupViewLogger, SPTSignupAgeFieldValidator, SPTSignupTermsAndPolicyViewModel, SPTSignupUserInfoModel;
@protocol SPTSignupBirthDateViewModelDelegate;

@interface SPTSignupBirthDateViewModel : NSObject
{
    id <SPTSignupBirthDateViewModelDelegate> _delegate;
    SPTLoginSplitEmailSignupViewLogger *_logger;
    SPTSignupTermsAndPolicyViewModel *_termsAndPolicyViewModel;
    SPTDynamicSignupFlowController *_flowController;
    SPTSignupAgeFieldValidator *_ageValidator;
    SPTSignupUserInfoModel *_userInfoModel;
    SPTLoginErrorDialogLogger *_dialogLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTLoginErrorDialogLogger *dialogLogger; // @synthesize dialogLogger=_dialogLogger;
@property(retain, nonatomic) SPTSignupUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(readonly, nonatomic) SPTSignupAgeFieldValidator *ageValidator; // @synthesize ageValidator=_ageValidator;
@property(readonly, nonatomic) SPTDynamicSignupFlowController *flowController; // @synthesize flowController=_flowController;
@property(readonly, nonatomic) SPTSignupTermsAndPolicyViewModel *termsAndPolicyViewModel; // @synthesize termsAndPolicyViewModel=_termsAndPolicyViewModel;
@property(readonly, nonatomic) SPTLoginSplitEmailSignupViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTSignupBirthDateViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)navigateToNextPageWithBirthDate:(id)arg1;
- (void)validateBirthDate:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)userDidDismissPickerViewWithValue:(id)arg1 shouldValidate:(_Bool)arg2;
- (void)userDidChangePickerViewWithValue:(id)arg1;
- (void)userDidTapNextButtonWithValue:(id)arg1;
- (id)previouslySelectedDate;
- (id)initialBirthDate;
- (_Bool)isTermsAndPolicyViewHidden;
- (id)minimumBirthDate;
- (id)maximumBirthDate;
- (id)nextButtonText;
- (id)fieldTitleLabelText;
- (id)titleLabelText;
- (id)initWithAgeValidator:(id)arg1 userInfoModel:(id)arg2 logger:(id)arg3 dialogLogger:(id)arg4 termsAndPolicyViewModel:(id)arg5 flowController:(id)arg6;

@end

