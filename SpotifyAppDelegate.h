//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAppStartupControllerDelegate-Protocol.h"
#import "SPTServiceOrchestratorDelegate-Protocol.h"
#import "SPTSessionServicesLoader-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SPTApplicationDelegateLogger, SPTCookieStorageManager, SPTPerfTracingSignpostObserver, SPTPlayModeMonitor, SPTServiceOrchestrator, SPTStartupTracer, UIWindow;
@protocol OS_os_log, SPTAppStartupController, SPTCrashReporter, SPTLinkDispatcher, SPTLogCenter, SPTMetaViewController, SPTNavigationRouter, SPTReminderHandlerService, SPTThirdPartyTrackerBroadcaster, SPTUserActivityController;

@interface SpotifyAppDelegate : NSObject <SPTServiceOrchestratorDelegate, SPTAppStartupControllerDelegate, UNUserNotificationCenterDelegate, SPTSessionServicesLoader, UIApplicationDelegate>
{
    id <SPTAppStartupController> _appStartupController;
    UIWindow *_window;
    NSObject<OS_os_log> *_lifecycleLog;
    id <SPTNavigationRouter> _navigationRouter;
    id <SPTCrashReporter> _crashReporter;
    id <SPTUserActivityController> _userActivityController;
    SPTPlayModeMonitor *_playModeMonitor;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTThirdPartyTrackerBroadcaster> _trackerBroadcaster;
    SPTApplicationDelegateLogger *_appDelegateLogger;
    SPTCookieStorageManager *_cookieStorageManager;
    id <SPTMetaViewController> _metaViewController;
    NSMutableDictionary *_deferredBlocks;
    id <SPTReminderHandlerService> _reminderHandlerService;
    SPTPerfTracingSignpostObserver *_perfTracingObserver;
    SPTServiceOrchestrator *_serviceOrchestrator;
    id <SPTLogCenter> _logCenter;
    SPTStartupTracer *_startupTracer;
}

+ (id)appDelegate;
@property(retain, nonatomic) SPTStartupTracer *startupTracer; // @synthesize startupTracer=_startupTracer;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(retain, nonatomic) SPTServiceOrchestrator *serviceOrchestrator; // @synthesize serviceOrchestrator=_serviceOrchestrator;
@property(retain, nonatomic) SPTPerfTracingSignpostObserver *perfTracingObserver; // @synthesize perfTracingObserver=_perfTracingObserver;
@property(nonatomic) __weak id <SPTReminderHandlerService> reminderHandlerService; // @synthesize reminderHandlerService=_reminderHandlerService;
@property(retain, nonatomic) NSMutableDictionary *deferredBlocks; // @synthesize deferredBlocks=_deferredBlocks;
@property(retain, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(retain, nonatomic) SPTCookieStorageManager *cookieStorageManager; // @synthesize cookieStorageManager=_cookieStorageManager;
@property(retain, nonatomic) SPTApplicationDelegateLogger *appDelegateLogger; // @synthesize appDelegateLogger=_appDelegateLogger;
@property(retain, nonatomic) id <SPTThirdPartyTrackerBroadcaster> trackerBroadcaster; // @synthesize trackerBroadcaster=_trackerBroadcaster;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTPlayModeMonitor *playModeMonitor; // @synthesize playModeMonitor=_playModeMonitor;
@property(retain, nonatomic) id <SPTUserActivityController> userActivityController; // @synthesize userActivityController=_userActivityController;
@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(readonly, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)loadSessionScopeServices;
- (void)idleStateWasReachedForAppStartupController:(id)arg1;
- (void)initialViewDidAppearForAppStartupController:(id)arg1;
- (void)serviceOrchestrator:(id)arg1 didUnloadServicesForScope:(id)arg2;
- (void)serviceOrchestrator:(id)arg1 willUnloadServicesForScope:(id)arg2;
- (void)serviceOrchestrator:(id)arg1 didLoadServicesForScope:(id)arg2;
- (void)serviceOrchestrator:(id)arg1 willLoadServicesForScope:(id)arg2;
- (void)executeDeferredBlock:(CDUnknownBlockType)arg1 scope:(id)arg2 origin:(id)arg3;
- (void)withLoadedScope:(id)arg1 origin:(SEL)arg2 do:(CDUnknownBlockType)arg3;
- (void)runDeferredBlocksForScope:(id)arg1;
- (id)optionalServiceForIdentifier:(id)arg1 inScope:(id)arg2;
- (id)serviceForIdentifier:(id)arg1 inScope:(id)arg2;
- (id)debugController;
- (void)userWillLogOut;
- (void)applyThemeAppearance;
- (void)setupTheme;
@property(readonly, nonatomic) NSObject<OS_os_log> *lifecycleLog; // @synthesize lifecycleLog=_lifecycleLog;
@property(readonly, nonatomic) id <SPTAppStartupController> appStartupController; // @synthesize appStartupController=_appStartupController;
- (void)removePlainTextFBToken;
- (void)performVersionMigrations;
- (void)setupAndShowMainWindow;
- (void)startReceivingRemoteControlEvents;
- (_Bool)handleLaunchOptions:(id)arg1;
- (void)addCrashReporterHooks;
- (void)setupInstanceVariables;
- (void)configureTracing;
- (void)setupColdStartTracking;
- (void)setupLogging;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 willChangeStatusBarOrientation:(long long)arg2 duration:(double)arg3;
- (void)applicationWillTerminate:(id)arg1;
- (void)application:(id)arg1 didUpdateUserActivity:(id)arg2;
- (void)handlePotentialDeepLinkEventWithURL:(id)arg1 sourceApplication:(id)arg2;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)application:(id)arg1 handleIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

