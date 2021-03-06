//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInstrumentationServiceMessagingHandler-Protocol.h"
#import "SPTInstrumentationServicePrivate-Protocol.h"

@class NSHashTable, NSString, SPTAllocationContext, SPTInstrumentationAppFocusStateMonitor, SPTInstrumentationNavigationObserver, SPTInstrumentationPageStreamFactory, SPTInstrumentationPageStreamObserver, SPTInstrumentationStackedPageStream, SPTInstrumentationTransports;
@protocol SPTAbbaFeatureFlags, SPTAbbaService, SPTContainerService, SPTEventSenderService, SPTInstrumentationRemotePlayingHandler, SPTInstrumentationServiceMessagingHandler, SPTLoginService, SPTNavigationFeature, SPTPlayerFeature;

@interface SPTInstrumentationServiceImplementation : NSObject <SPTInstrumentationServiceMessagingHandler, SPTInstrumentationServicePrivate>
{
    id <SPTInstrumentationServiceMessagingHandler> _messagingHandler;
    id <SPTInstrumentationRemotePlayingHandler> _remotePlayingHandler;
    id <SPTContainerService> _containerService;
    id <SPTLoginService> _loginService;
    id <SPTPlayerFeature> _playerService;
    id <SPTAbbaService> _abbaService;
    id <SPTNavigationFeature> _navigationService;
    id <SPTEventSenderService> _eventSenderService;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    SPTInstrumentationTransports *_transports;
    SPTInstrumentationPageStreamObserver *_pageViewObserver;
    SPTInstrumentationAppFocusStateMonitor *_appFocusStateMonitor;
    SPTInstrumentationStackedPageStream *_unifiedPageStream;
    SPTInstrumentationPageStreamFactory *_pageStreamFactory;
    SPTInstrumentationNavigationObserver *_navigationObserver;
    NSHashTable *_observers;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SPTInstrumentationNavigationObserver *navigationObserver; // @synthesize navigationObserver=_navigationObserver;
@property(retain, nonatomic) SPTInstrumentationPageStreamFactory *pageStreamFactory; // @synthesize pageStreamFactory=_pageStreamFactory;
@property(retain, nonatomic) SPTInstrumentationStackedPageStream *unifiedPageStream; // @synthesize unifiedPageStream=_unifiedPageStream;
@property(retain, nonatomic) SPTInstrumentationAppFocusStateMonitor *appFocusStateMonitor; // @synthesize appFocusStateMonitor=_appFocusStateMonitor;
@property(retain, nonatomic) SPTInstrumentationPageStreamObserver *pageViewObserver; // @synthesize pageViewObserver=_pageViewObserver;
@property(retain, nonatomic) SPTInstrumentationTransports *transports; // @synthesize transports=_transports;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTLoginService> loginService; // @synthesize loginService=_loginService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(retain, nonatomic) id <SPTInstrumentationRemotePlayingHandler> remotePlayingHandler; // @synthesize remotePlayingHandler=_remotePlayingHandler;
@property(nonatomic) __weak id <SPTInstrumentationServiceMessagingHandler> messagingHandler; // @synthesize messagingHandler=_messagingHandler;
- (void)instrumentationServiceObservedUninstrumentedPage:(id)arg1;
- (void)removeCurrentPageViewObserver:(id)arg1;
- (void)addCurrentPageViewObserver:(id)arg1;
- (id)provideModalPresentationMonitor;
- (id)provideTransportRegistry;
- (_Bool)dualSendingEnabled;
- (void)configurePageViewObserverWithClock:(id)arg1;
- (void)configureNavigationObservers;
- (void)configureAppFocusStateMonitorWithClock:(id)arg1;
- (void)configureAbbaFeatureFlags;
- (id)currentPageView;
- (void)currentPageViewDidChange:(id)arg1 forPageStream:(id)arg2;
- (void)observerCurrentPageStream;
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

