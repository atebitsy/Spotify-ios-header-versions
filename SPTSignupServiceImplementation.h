//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginServiceObserver-Protocol.h"
#import "SPTPageRegistryObserver-Protocol.h"
#import "SPTSignupService-Protocol.h"

@class NSString, SPTAllocationContext, SPTSignupConfigurationDataLoader, SPTSignupUserInfoModel;
@protocol SPTAuthLoginOptionsUtilsService, SPTContainerService, SPTContainerUIService, SPTGLUEService, SPTLoginLoggingService, SPTLoginService, SPTLoginSessionScopeServicesLoaderProviderService, SPTNetworkService, SPTPreSignupExperimentationService;

@interface SPTSignupServiceImplementation : NSObject <SPTPageRegistryObserver, SPTLoginServiceObserver, SPTSignupService>
{
    id <SPTLoginService> _loginService;
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTNetworkService> _networkService;
    id <SPTLoginSessionScopeServicesLoaderProviderService> _sessionScopeServicesLoaderProviderService;
    id <SPTPreSignupExperimentationService> _experimentationService;
    id <SPTLoginLoggingService> _loggerService;
    SPTSignupUserInfoModel *_userInfoModel;
    SPTSignupConfigurationDataLoader *_configurationDataLoader;
    id <SPTAuthLoginOptionsUtilsService> _authUtilsService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTAuthLoginOptionsUtilsService> authUtilsService; // @synthesize authUtilsService=_authUtilsService;
@property(retain, nonatomic) SPTSignupConfigurationDataLoader *configurationDataLoader; // @synthesize configurationDataLoader=_configurationDataLoader;
@property(retain, nonatomic) SPTSignupUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(nonatomic) __weak id <SPTLoginLoggingService> loggerService; // @synthesize loggerService=_loggerService;
@property(nonatomic) __weak id <SPTPreSignupExperimentationService> experimentationService; // @synthesize experimentationService=_experimentationService;
@property(nonatomic) __weak id <SPTLoginSessionScopeServicesLoaderProviderService> sessionScopeServicesLoaderProviderService; // @synthesize sessionScopeServicesLoaderProviderService=_sessionScopeServicesLoaderProviderService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
- (id)screenIdentifier:(id)arg1 signupType:(unsigned long long)arg2;
- (void)loginServiceWillLaunchLoginUI;
- (void)pageRegistryDidUnregisterFeaturePages:(id)arg1;
- (void)fetchSignupConfiguration;
- (id)provideAllowedCallingCodes;
- (void)loadSignupConfiguration;
- (id)provideDisplayNameViewController;
- (id)provideFacebookConfirmationViewController:(id)arg1 context:(id)arg2;
- (id)provideTermsAndPolicyViewModelWithTheme:(id)arg1 screenIdentifier:(id)arg2;
- (id)provideGenderForSignupViewController;
- (id)provideBirthDateViewController:(id)arg1 context:(id)arg2;
- (id)providePasswordForSignupViewController;
- (id)provideEmailForSignupViewController;
- (void)registerSignupViewControllers;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

