//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTProductStateObserver-Protocol.h"
#import "SPTSearchOnDemandPermissionMonitor-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTProductState;

@interface SPTSearchOnDemandPermissionMonitorImplementation : NSObject <SPTProductStateObserver, SPTSearchOnDemandPermissionMonitor>
{
    _Bool _onDemandAllowed;
    id <SPTProductState> _productState;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic, getter=isOnDemandAllowed) _Bool onDemandAllowed; // @synthesize onDemandAllowed=_onDemandAllowed;
- (void).cxx_destruct;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithProductState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

