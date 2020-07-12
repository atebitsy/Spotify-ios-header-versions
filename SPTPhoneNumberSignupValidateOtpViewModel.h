//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPhoneNumberSignupOtpSessionHandlerDelegate-Protocol.h"

@class NSString, SPTAuthCodeChallenge, SPTPhoneNumberSignupOtpSessionHandler, SPTPhoneNumberSignupValidateOtpViewLogger;
@protocol SPTPhoneNumberSignupValidateOtpViewModelDelegate;

@interface SPTPhoneNumberSignupValidateOtpViewModel : NSObject <SPTPhoneNumberSignupOtpSessionHandlerDelegate>
{
    _Bool _isNextButtonEnabled;
    _Bool _isNextButtonLoading;
    _Bool _inErrorMode;
    _Bool _didUserEditOtp;
    id <SPTPhoneNumberSignupValidateOtpViewModelDelegate> _delegate;
    SPTAuthCodeChallenge *_codeChallenge;
    NSString *_password;
    SPTPhoneNumberSignupOtpSessionHandler *_otpSessionHandler;
    SPTPhoneNumberSignupValidateOtpViewLogger *_logger;
}

@property(nonatomic) _Bool didUserEditOtp; // @synthesize didUserEditOtp=_didUserEditOtp;
@property(readonly, nonatomic) SPTPhoneNumberSignupValidateOtpViewLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTPhoneNumberSignupOtpSessionHandler *otpSessionHandler; // @synthesize otpSessionHandler=_otpSessionHandler;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(nonatomic) _Bool inErrorMode; // @synthesize inErrorMode=_inErrorMode;
@property(nonatomic) _Bool isNextButtonLoading; // @synthesize isNextButtonLoading=_isNextButtonLoading;
@property(nonatomic) _Bool isNextButtonEnabled; // @synthesize isNextButtonEnabled=_isNextButtonEnabled;
@property(retain, nonatomic) SPTAuthCodeChallenge *codeChallenge; // @synthesize codeChallenge=_codeChallenge;
@property(nonatomic) __weak id <SPTPhoneNumberSignupValidateOtpViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didOtpSessionTimeout;
- (void)didEndEditingPassword;
- (void)viewWillDisappear;
- (_Bool)isValidPassword:(id)arg1;
- (void)updateCurrentOtpSessionWithTimeToLiveSeconds:(double)arg1;
- (void)resendSMS;
- (void)onSubmitOneTimePasswordClicked;
@property(readonly, copy, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) unsigned long long numberOfInputs;
- (id)initWithCodeChallenge:(id)arg1 otpSessionHandler:(id)arg2 logger:(id)arg3;
- (void)logOtpValidationFailureIfNeeded:(unsigned long long)arg1;
- (void)logOtpSessionExpired;
- (void)logOtpValidationSuccess;
- (void)logUserDidTapNextButton;
- (void)logUserDidTapEditPhoneNumberButton;
- (void)logUserDidTapResendSMSButton;
- (void)logUserDidEditOtp;
- (void)logUserDidSeeDialogType:(unsigned long long)arg1;
- (void)logUserDidSeeView;
@property(readonly, nonatomic) NSString *sendingNewCodeMessage;
@property(readonly, nonatomic) NSString *dialogButtonTitle;
@property(readonly, nonatomic) NSString *dialogGeneralErrorMessage;
@property(readonly, nonatomic) NSString *dialogGeneralErrorTitle;
@property(readonly, nonatomic) NSString *dialogResendSMSRequestedTooEarlyButtonTitle;
@property(readonly, nonatomic) NSString *dialogResendSMSRequestedTooEarlyMessage;
@property(readonly, nonatomic) NSString *dialogResendSMSRequestedTooEarlyTitle;
@property(readonly, nonatomic) NSString *dialogTimeoutButtonTitle;
@property(readonly, nonatomic) NSString *dialogTimeoutMessage;
@property(readonly, nonatomic) NSString *dialogTimeoutTitle;
@property(readonly, nonatomic) NSString *dialogTryAgainMessage;
@property(readonly, nonatomic) NSString *dialogTryAgainTitle;
@property(readonly, nonatomic) NSString *dialogTryAgainButtonTitle;
@property(readonly, nonatomic) NSString *dialogInactiveInternetMessage;
@property(readonly, nonatomic) NSString *dialogInactiveInternetTitle;
@property(readonly, nonatomic) NSString *dialogTooManyAttemptsMessage;
@property(readonly, nonatomic) NSString *dialogTooManyAttemptsTitle;
@property(readonly, nonatomic) NSString *editPhoneNumberTitle;
@property(readonly, nonatomic) NSString *resendButtonTitle;
@property(readonly, nonatomic) NSString *nextButtonTitle;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

