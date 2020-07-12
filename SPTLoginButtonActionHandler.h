//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTDynamicSignupFlowController, SPTLoginButtonActionLogger;
@protocol SPTLoginNavigationCoordinator, SPTLoginThirdPartyLoginController, SPTLoginThirdPartyLoginControllerDelegate;

@interface SPTLoginButtonActionHandler : NSObject
{
    id <SPTLoginThirdPartyLoginControllerDelegate> _delegate;
    id <SPTLoginThirdPartyLoginController> _facebookAuthController;
    id <SPTLoginThirdPartyLoginController> _appleAuthController;
    SPTDynamicSignupFlowController *_flowController;
    id <SPTLoginNavigationCoordinator> _navigationCoordinator;
    SPTLoginButtonActionLogger *_logger;
}

@property(readonly, nonatomic) SPTLoginButtonActionLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLoginNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(readonly, nonatomic) SPTDynamicSignupFlowController *flowController; // @synthesize flowController=_flowController;
@property(readonly, nonatomic) id <SPTLoginThirdPartyLoginController> appleAuthController; // @synthesize appleAuthController=_appleAuthController;
@property(readonly, nonatomic) id <SPTLoginThirdPartyLoginController> facebookAuthController; // @synthesize facebookAuthController=_facebookAuthController;
@property(nonatomic) __weak id <SPTLoginThirdPartyLoginControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleAction:(unsigned long long)arg1;
- (id)initWithFacebookAuthController:(id)arg1 appleAuthController:(id)arg2 flowController:(id)arg3 navigationCoordinator:(id)arg4 logger:(id)arg5;

@end

