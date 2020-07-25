//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAuthenticationHandlerLogger, SPTLoginDbManager, SPTLoginDelayedSignupAccountSwitcher, SPTLoginErrorDecorator, SPTLoginMainViewLoader, SPTLoginTestManager;
@protocol SPTLoginStateController;

@interface SPTAuthenticationHandler : NSObject
{
    id <SPTLoginStateController> _loginStateController;
    SPTAuthenticationHandlerLogger *_logger;
    SPTLoginErrorDecorator *_errorDecorator;
    SPTLoginMainViewLoader *_mainViewLoader;
    SPTLoginDelayedSignupAccountSwitcher *_accountSwitcher;
    SPTLoginTestManager *_login5TestManager;
    SPTLoginDbManager *_databaseManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTLoginDbManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(readonly, nonatomic) SPTLoginTestManager *login5TestManager; // @synthesize login5TestManager=_login5TestManager;
@property(readonly, nonatomic) SPTLoginDelayedSignupAccountSwitcher *accountSwitcher; // @synthesize accountSwitcher=_accountSwitcher;
@property(readonly, nonatomic) SPTLoginMainViewLoader *mainViewLoader; // @synthesize mainViewLoader=_mainViewLoader;
@property(readonly, nonatomic) SPTLoginErrorDecorator *errorDecorator; // @synthesize errorDecorator=_errorDecorator;
@property(readonly, nonatomic) SPTAuthenticationHandlerLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLoginStateController> loginStateController; // @synthesize loginStateController=_loginStateController;
- (void)storeStickyCredentialsUserInfoForScreen:(unsigned long long)arg1;
- (id)authLogin5Options;
- (void)switchAccountWithCredentials:(id)arg1 fromScreen:(unsigned long long)arg2 userDidSignup:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)handleAuthenticationResultWithError:(id)arg1 fromScreen:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didLoginWithPhoneNumber;
- (void)authenticateAndLoginWithOpenIDCredentials:(id)arg1 authSourceType:(unsigned long long)arg2 onLoginComplete:(CDUnknownBlockType)arg3 onSignupRequired:(CDUnknownBlockType)arg4;
- (void)authenticateAndLoginWithURI:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authenticateAndLoginWithCredentials:(id)arg1 fromScreen:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)authenticateAndLoginWithOneTimeToken:(id)arg1 fromScreen:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithLoginStateController:(id)arg1 logger:(id)arg2 errorDecorator:(id)arg3 mainViewLoader:(id)arg4 accountSwitcher:(id)arg5 login5TestManager:(id)arg6 databaseManager:(id)arg7;

@end

