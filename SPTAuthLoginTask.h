//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAuthLoginTaskDelegate, SPTConnectivityAsyncScheduler;

@interface SPTAuthLoginTask : NSObject
{
    struct once_flag _startOnceFlag;
    struct shared_ptr<spotify::connectivity::auth::objc::impl::SPTAuthSchedulerBridge> _scheduler;
    struct mutex _sharedCompletionMutex;
    struct shared_ptr<std::__1::shared_ptr<void>> _sharedCompletion;
    id <SPTAuthLoginTaskDelegate> _delegate;
    CDUnknownBlockType _startOperation;
    id <SPTConnectivityAsyncScheduler> _coreScheduler;
}

@property(nonatomic) __weak id <SPTConnectivityAsyncScheduler> coreScheduler; // @synthesize coreScheduler=_coreScheduler;
@property(copy, nonatomic) CDUnknownBlockType startOperation; // @synthesize startOperation=_startOperation;
@property(nonatomic) __weak id <SPTAuthLoginTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setCompletion:(shared_ptr_b60d0e1e)arg1;
@property(readonly, nonatomic) struct Scheduler *scheduler;
@property(readonly, nonatomic) function_05dfbad0 callback;
- (void)cancel;
- (void)start;
- (void)setDelegate:(id)arg1 onScheduler:(id)arg2;
- (void)dealloc;
- (id)initWithStartOperation:(CDUnknownBlockType)arg1 coreScheduler:(id)arg2;

@end

