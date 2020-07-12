//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString, SPTAuthSignupInfo;

@protocol SPTLoginNavigationCoordinator <NSObject>
- (void)openIntentLedStartScreen:(unsigned long long)arg1;
- (void)openMethodLedStartScreen:(unsigned long long)arg1;
- (void)openPhoneNumberScreen;
- (void)openFacebookConfirmationScreenWithUserInfo:(NSDictionary *)arg1;
- (void)openMagicLinkSentConfirmationScreenWithEmail:(NSString *)arg1;
- (void)openRequestMagicLinkScreenWithEmail:(NSString *)arg1 error:(NSError *)arg2;
- (void)openLoginScreenWithEmail:(NSString *)arg1;
- (void)openSignupFlowWithSignupInfo:(SPTAuthSignupInfo *)arg1 type:(unsigned long long)arg2 displayName:(NSString *)arg3 navigationCompletion:(void (^)(void))arg4;
- (void)openSignupFlowWithSignupInfo:(SPTAuthSignupInfo *)arg1 type:(unsigned long long)arg2 navigationCompletion:(void (^)(void))arg3;
- (void)openDisplayNameScreen;
- (void)openGenderScreen;
- (void)openAgeScreen;
- (void)openPasswordScreen;
- (void)openEmailScreen;
@end

