//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSInternalErrorEventDelegate-Protocol.h"
#import "INSSchedulerDelegate-Protocol.h"

@class INSContextRegistry, INSEventSenderStatsDataSource, INSEventValidator, INSPersistentStoreDataDelegate, INSPersistentStoreDataSource, INSScheduler, INSSchedulerDataSourceComposition, NSHashTable, NSString;
@protocol INSLogger, INSMessageOwnerProvider, INSTimer, INSTransport;

@interface INSEventSender : NSObject <INSSchedulerDelegate, INSInternalErrorEventDelegate>
{
    id <INSTransport> _transport;
    INSScheduler *_scheduler;
    id <INSLogger> _logger;
    id <INSTimer> _timer;
    NSHashTable *_observers;
    INSContextRegistry *_contextRegistry;
    INSPersistentStoreDataSource *_authenticatedPersistentStoreDataSource;
    INSPersistentStoreDataSource *_nonAuthenticatedPersistentStoreDataSource;
    INSEventSenderStatsDataSource *_eventSenderStatsDataSource;
    INSPersistentStoreDataDelegate *_persistentStoreDataDelegate;
    INSSchedulerDataSourceComposition *_composition;
    INSEventValidator *_validator;
    id <INSMessageOwnerProvider> _messageOwnerProvider;
}

@property(retain, nonatomic) id <INSMessageOwnerProvider> messageOwnerProvider; // @synthesize messageOwnerProvider=_messageOwnerProvider;
@property(retain, nonatomic) INSEventValidator *validator; // @synthesize validator=_validator;
@property(retain, nonatomic) INSSchedulerDataSourceComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) INSPersistentStoreDataDelegate *persistentStoreDataDelegate; // @synthesize persistentStoreDataDelegate=_persistentStoreDataDelegate;
@property(retain, nonatomic) INSEventSenderStatsDataSource *eventSenderStatsDataSource; // @synthesize eventSenderStatsDataSource=_eventSenderStatsDataSource;
@property(retain, nonatomic) INSPersistentStoreDataSource *nonAuthenticatedPersistentStoreDataSource; // @synthesize nonAuthenticatedPersistentStoreDataSource=_nonAuthenticatedPersistentStoreDataSource;
@property(retain, nonatomic) INSPersistentStoreDataSource *authenticatedPersistentStoreDataSource; // @synthesize authenticatedPersistentStoreDataSource=_authenticatedPersistentStoreDataSource;
@property(retain, nonatomic) INSContextRegistry *contextRegistry; // @synthesize contextRegistry=_contextRegistry;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <INSTimer> timer; // @synthesize timer=_timer;
@property(retain, nonatomic) id <INSLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) INSScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) id <INSTransport> transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)internalErrorEventOccuredWithMessage:(id)arg1;
- (id)defaultContexts:(id)arg1 clientVersion:(id)arg2;
- (void)removeEventObserver:(id)arg1;
- (void)addEventObserver:(id)arg1;
- (void)schedulerDidRequestBackOff;
- (void)schedulerDidRetryBatch:(id)arg1;
- (void)schedulerDidFailBatch:(id)arg1;
- (void)schedulerDidFinishWithSuccessBatch:(id)arg1;
- (void)schedulerDidStartBatch:(id)arg1;
- (void)schedulerDidAddMessageNode:(id)arg1;
- (void)schedulerDidScheduleTimerWithInterval:(double)arg1 attempt:(unsigned long long)arg2;
- (id)version;
- (_Bool)sendNonAuthenticatedMessage:(id)arg1 error:(id *)arg2;
- (_Bool)sendMessage:(id)arg1 error:(id *)arg2;
- (_Bool)sendMessage:(id)arg1 authenticated:(_Bool)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithTransport:(id)arg1 store:(id)arg2 messageOwnerProvider:(id)arg3 clientId:(id)arg4 logger:(id)arg5 timer:(id)arg6 clientVersion:(id)arg7;
- (id)commonInitWithTransport:(id)arg1 messageOwnerProvider:(id)arg2 clientId:(id)arg3 logger:(id)arg4 timer:(id)arg5 clientVersion:(id)arg6;
- (id)initWithTransport:(id)arg1 messageOwnerProvider:(id)arg2 clientId:(id)arg3 logger:(id)arg4 clientVersion:(id)arg5;
- (id)initWithTransport:(id)arg1 messageOwnerProvider:(id)arg2 clientId:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

