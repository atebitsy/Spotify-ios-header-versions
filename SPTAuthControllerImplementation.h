//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAuthController-Protocol.h"
#import "SPTAuthRequestDelegate-Protocol.h"

@class NSString, SPSession, SPTAuthCache, SPTAuthLogger, SPTAuthPostAuthPlayerController, SPTAuthRequest, SPTAuthSourceApplicationValidationManager, SPTDefaultPopupPermissionManager, SPTHermesController, SPTObserverManager, SPTProgressView;
@protocol SPTAlertInterface, SPTAuthTestManager, SPTContainerUIService, SPTLinkDispatcher, SPTNetworkConnectivityController;

@interface SPTAuthControllerImplementation : NSObject <SPTAuthRequestDelegate, SPTAuthController>
{
    _Bool _authRequestInProgress;
    SPSession *_session;
    SPTHermesController *_hermesController;
    id <SPTContainerUIService> _containerUIService;
    id <SPTNetworkConnectivityController> _connectivityController;
    id <SPTAlertInterface> _alertController;
    SPTProgressView *_progressView;
    SPTObserverManager *_observerManager;
    id <SPTAuthTestManager> _testManager;
    SPTAuthSourceApplicationValidationManager *_sourceAppValidationManager;
    SPTAuthCache *_authCache;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTAuthRequest *_request;
    CDUnknownBlockType _completionHandler;
    SPTAuthLogger *_authLogger;
    SPTAuthPostAuthPlayerController *_postAuthPlayerController;
    SPTDefaultPopupPermissionManager *_popupPermissionsManager;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isAuthRequestInProgress) _Bool authRequestInProgress; // @synthesize authRequestInProgress=_authRequestInProgress;
@property(nonatomic) __weak SPTDefaultPopupPermissionManager *popupPermissionsManager; // @synthesize popupPermissionsManager=_popupPermissionsManager;
@property(retain, nonatomic) SPTAuthPostAuthPlayerController *postAuthPlayerController; // @synthesize postAuthPlayerController=_postAuthPlayerController;
@property(readonly, nonatomic) SPTAuthLogger *authLogger; // @synthesize authLogger=_authLogger;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) SPTAuthRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTAuthCache *authCache; // @synthesize authCache=_authCache;
@property(retain, nonatomic) SPTAuthSourceApplicationValidationManager *sourceAppValidationManager; // @synthesize sourceAppValidationManager=_sourceAppValidationManager;
@property(readonly, nonatomic) id <SPTAuthTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) id <SPTAlertInterface> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <SPTNetworkConnectivityController> connectivityController; // @synthesize connectivityController=_connectivityController;
@property(readonly, nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(readonly, nonatomic) SPTHermesController *hermesController; // @synthesize hermesController=_hermesController;
@property(readonly, nonatomic) __weak SPSession *session; // @synthesize session=_session;
- (void)authRequest:(id)arg1 didCompleteForAccountsRequest:(id)arg2 withResponseURI:(id)arg3;
- (void)authRequestDidStart:(id)arg1;
- (void)handleAuthorizationResultWithResponseURI:(id)arg1 silent:(_Bool)arg2;
- (void)showOfflineAlert;
- (void)playIfNeccessary:(id)arg1 options:(id)arg2 responseURI:(id)arg3 silent:(_Bool)arg4;
- (void)handleOfflineWithURL:(id)arg1 bundleId:(id)arg2 handleSilently:(_Bool)arg3;
- (_Bool)isOffline;
- (_Bool)isBelowMinimumVersionRequirement:(id)arg1;
- (_Bool)shouldDoNetworklessAuthorizationWithClientId:(id)arg1 scopes:(id)arg2 redirectUri:(id)arg3 bundleId:(id)arg4;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)authenticateWithURL:(id)arg1 sourceApplication:(id)arg2 shouldValidate:(_Bool)arg3 shouldDoSilentAuth:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)authenticateWithURL:(id)arg1 sourceApplication:(id)arg2 shouldDoSilentAuth:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleSoruceAppValidationRepsonse:(long long)arg1 sourceApplication:(id)arg2 url:(id)arg3 shouldDoSilentAuth:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)validateSourceApplication:(id)arg1 authenticateWithURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithSession:(id)arg1 hermesController:(id)arg2 containerUIService:(id)arg3 connectivityController:(id)arg4 alertController:(id)arg5 testManager:(id)arg6 authCache:(id)arg7 linkDispatcher:(id)arg8 postAuthPlayerController:(id)arg9 validationManager:(id)arg10 authLogger:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

