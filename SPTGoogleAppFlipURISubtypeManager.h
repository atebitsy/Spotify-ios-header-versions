//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTURISubtypeHandler-Protocol.h"

@class NSString;
@protocol SPTGoogleAppFlipAuthorizer, SPTGoogleAppFlipParameterValidator, SPTGoogleAppFlipURIManager, SPTNetworkConnectivityController, SPTURIDispatchService;

@interface SPTGoogleAppFlipURISubtypeManager : NSObject <SPTURISubtypeHandler>
{
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    id <SPTGoogleAppFlipParameterValidator> _validator;
    id <SPTGoogleAppFlipURIManager> _uriManager;
    id <SPTGoogleAppFlipAuthorizer> _authorizer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTGoogleAppFlipAuthorizer> authorizer; // @synthesize authorizer=_authorizer;
@property(retain, nonatomic) id <SPTGoogleAppFlipURIManager> uriManager; // @synthesize uriManager=_uriManager;
@property(retain, nonatomic) id <SPTGoogleAppFlipParameterValidator> validator; // @synthesize validator=_validator;
@property(retain, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
- (long long)URISubtypeHandlerOpenURI:(id)arg1 context:(id)arg2;
- (_Bool)URISubtypeHandlerCanHandleURI:(id)arg1;
- (void)deregisterSubtypeHandler;
- (void)registerSubtypeHandler;
- (void)dealloc;
- (id)initWithURIDispatchService:(id)arg1 networkConnectivityController:(id)arg2 parameterValidator:(id)arg3 uriManager:(id)arg4 authorizer:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

