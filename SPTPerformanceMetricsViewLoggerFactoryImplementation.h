//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPerformanceMetricsViewLoggerFactory-Protocol.h"

@class NSHashTable, NSString;
@protocol OS_os_log, SPTEventSender, SPTPerformanceKitUUIDProvider, SPTViewLoadSequenceTransport, SPTViewLoggerConnectionTypeProvider;

@interface SPTPerformanceMetricsViewLoggerFactoryImplementation : NSObject <SPTPerformanceMetricsViewLoggerFactory>
{
    id <SPTViewLoadSequenceTransport> _transport;
    id <SPTEventSender> _eventSender;
    id <SPTViewLoggerConnectionTypeProvider> _connectionTypeProvider;
    id <SPTPerformanceKitUUIDProvider> _uuidProvider;
    NSHashTable *_defaultObservers;
    NSObject<OS_os_log> *_instrumentationLog;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *instrumentationLog; // @synthesize instrumentationLog=_instrumentationLog;
@property(retain, nonatomic) NSHashTable *defaultObservers; // @synthesize defaultObservers=_defaultObservers;
@property(readonly, nonatomic) __weak id <SPTPerformanceKitUUIDProvider> uuidProvider; // @synthesize uuidProvider=_uuidProvider;
@property(readonly, nonatomic) __weak id <SPTViewLoggerConnectionTypeProvider> connectionTypeProvider; // @synthesize connectionTypeProvider=_connectionTypeProvider;
@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
- (id)createViewLoggerForViewURI:(id)arg1;
@property(readonly, nonatomic) id <SPTViewLoadSequenceTransport> transport; // @synthesize transport=_transport;
- (void)removeDefaultObserver:(id)arg1;
- (void)addDefaultObserver:(id)arg1;
- (id)initWithEventSender:(id)arg1 connectionTypeProvider:(id)arg2 uuidProvider:(id)arg3 instrumentationLog:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

