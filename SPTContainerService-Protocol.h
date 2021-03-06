//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class SPTNavigationManager, SPTStartupTracer;
@protocol SPTEmailUniversalLinkResolverDelegate, SPTKeychainManager, SPTLogCenter, SPTLogCenterCoreIntegration, SPTMetaViewController, SPTNavigationRouter, SPTNotificationSystemDelegate, SPTPageRegistry, SPTRemoteControl, SPTUICompletionNotifier;

@protocol SPTContainerService <SPTService>
@property(nonatomic) __weak id <SPTEmailUniversalLinkResolverDelegate> emailUniversalLinkResolverDelegate;
@property(nonatomic) __weak id <SPTNotificationSystemDelegate> notificationSystemDelegate;
- (void (^)(void))provideContainerLogoutHandler;
- (id <SPTRemoteControl>)provideRemoteControl;
- (id <SPTKeychainManager>)provideKeychainManager;
- (id <SPTLogCenterCoreIntegration>)provideLogCenterCoreIntegration;
- (id <SPTLogCenter>)provideLogCenter;
- (id <SPTUICompletionNotifier>)provideUICompletionNotifier;
- (id <SPTNavigationRouter>)provideNavigationRouter;
- (SPTNavigationManager *)provideNavigationManager;
- (id <SPTMetaViewController>)provideMetaViewController;
- (SPTStartupTracer *)provideStartupTracer;
- (id <SPTPageRegistry>)providePageRegistry;
@end

