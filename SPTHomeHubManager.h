//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTHomeCommandHandlerFactory, SPTHomeDebugger, SPTHomeEndpointFactory, SPTHomeFeatureProperties, SPTHomeHubProvider, SPTHomeLocalViewModelOverrides, SPTHomeViewModelLoaderFactory, SPTHomeViewModelProvider;
@protocol GLUETheme, SPTOfflineModeState, SPTShareDragDelegateFactory;

@interface SPTHomeHubManager : NSObject
{
    SPTHomeViewModelProvider *_viewModelProvider;
    SPTHomeHubProvider *_homeHubProvider;
    SPTHomeEndpointFactory *_endpointFactory;
    SPTHomeCommandHandlerFactory *_homeCommandHandlerFactory;
    id <GLUETheme> _GLUETheme;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTShareDragDelegateFactory> _shareDragDelegateFactory;
    SPTHomeViewModelLoaderFactory *_viewModelLoaderFactory;
    SPTHomeFeatureProperties *_homeFeatureProperties;
    SPTHomeLocalViewModelOverrides *_localViewModelOverrides;
    SPTHomeDebugger *_homeDebugger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTHomeDebugger *homeDebugger; // @synthesize homeDebugger=_homeDebugger;
@property(readonly, nonatomic) SPTHomeLocalViewModelOverrides *localViewModelOverrides; // @synthesize localViewModelOverrides=_localViewModelOverrides;
@property(readonly, nonatomic) SPTHomeFeatureProperties *homeFeatureProperties; // @synthesize homeFeatureProperties=_homeFeatureProperties;
@property(readonly, nonatomic) SPTHomeViewModelLoaderFactory *viewModelLoaderFactory; // @synthesize viewModelLoaderFactory=_viewModelLoaderFactory;
@property(readonly, nonatomic) id <SPTShareDragDelegateFactory> shareDragDelegateFactory; // @synthesize shareDragDelegateFactory=_shareDragDelegateFactory;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <GLUETheme> GLUETheme; // @synthesize GLUETheme=_GLUETheme;
@property(readonly, nonatomic) SPTHomeCommandHandlerFactory *homeCommandHandlerFactory; // @synthesize homeCommandHandlerFactory=_homeCommandHandlerFactory;
@property(readonly, nonatomic) SPTHomeEndpointFactory *endpointFactory; // @synthesize endpointFactory=_endpointFactory;
@property(readonly, nonatomic) SPTHomeHubProvider *homeHubProvider; // @synthesize homeHubProvider=_homeHubProvider;
@property(readonly, nonatomic) SPTHomeViewModelProvider *viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
- (id)makeCommandDispatcherWithURL:(id)arg1 referrerIdentifier:(id)arg2 hubLogger:(id)arg3 viewModelProvider:(id)arg4 overrides:(id)arg5;
- (id)makeViewModelProviderForSourceIdentifier:(id)arg1 overrides:(id)arg2;
- (id)provideHubViewControllerForURL:(id)arg1 initialViewModel:(id)arg2 referrerIdentifier:(id)arg3 viewLogger:(id)arg4;
- (id)initWithHomeHubProvider:(id)arg1 endpointFactory:(id)arg2 homeCommandHandlerFactory:(id)arg3 GLUETheme:(id)arg4 offlineModeState:(id)arg5 shareDragDelegateFactory:(id)arg6 viewModelLoaderFactory:(id)arg7 homeFeatureProperties:(id)arg8 sourceIdentifier:(id)arg9 homeDebugger:(id)arg10;

@end

