//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAuthenticationHandlerLogger, SPTLogin5TestManager, SPTLoginDbManager, SPTLoginDelayedSignupAccountSwitcher, SPTLoginErrorDecorator, SPTLoginMainViewLoader, SPTLoginPerformanceLogging;
@protocol SPTLoginStateController;

@interface SPTAuthenticationHandler : NSObject
{
    id <SPTLoginStateController> _loginStateController;
    SPTAuthenticationHandlerLogger *_logger;
    SPTLoginErrorDecorator *_errorDecorator;
    SPTLoginPerformanceLogging *_performanceLogging;
    SPTLoginMainViewLoader *_mainViewLoader;
    SPTLoginDelayedSignupAccountSwitcher *_accountSwitcher;
    SPTLogin5TestManager *_login5TestManager;
    SPTLoginDbManager *_databaseManager;
}

@property(readonly, nonatomic) SPTLoginDbManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(readonly, nonatomic) SPTLogin5TestManager *login5TestManager; // @synthesize login5TestManager=_login5TestManager;
@property(readonly, nonatomic) SPTLoginDelayedSignupAccountSwitcher *accountSwitcher; // @synthesize accountSwitcher=_accountSwitcher;
@property(readonly, nonatomic) SPTLoginMainViewLoader *mainViewLoader; // @synthesize mainViewLoader=_mainViewLoader;
@property(readonly, nonatomic) SPTLoginPerformanceLogging *performanceLogging; // @synthesize performanceLogging=_performanceLogging;
@property(readonly, nonatomic) SPTLoginErrorDecorator *errorDecorator; // @synthesize errorDecorator=_errorDecorator;
@property(readonly, nonatomic) SPTAuthenticationHandlerLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLoginStateController> loginStateController; // @synthesize loginStateController=_loginStateController;
- (void).cxx_destruct;
- (void)storeStickyCredentialsUserInfoForScreen:(unsigned long long)arg1;
- (id)provideLoginOptionsForCredentials:(id)arg1;
- (void)didLoginWithPhoneNumber;
- (void)switchAccountWithCredentials:(id)arg1 fromScreen:(unsigned long long)arg2 userDidSignup:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)handleAuthenticationResultWithError:(id)arg1 fromScreen:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authenticateAndLoginWithOpenIDCredentials:(id)arg1 authSourceType:(unsigned long long)arg2 onLoginComplete:(CDUnknownBlockType)arg3 onSignupRequired:(CDUnknownBlockType)arg4;
- (void)authenticateAndLoginWithURI:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authenticateWithCredentials:(id)arg1 userDidSignUp:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authenticateAndLoginWithCredentials:(id)arg1 fromScreen:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)authenticateAndLoginWithOneTimeToken:(id)arg1 fromScreen:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithLoginStateController:(id)arg1 logger:(id)arg2 errorDecorator:(id)arg3 performanceLogging:(id)arg4 mainViewLoader:(id)arg5 accountSwitcher:(id)arg6 login5TestManager:(id)arg7 databaseManager:(id)arg8;

@end

