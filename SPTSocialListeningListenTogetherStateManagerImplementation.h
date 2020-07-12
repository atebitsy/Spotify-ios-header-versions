//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningListenTogetherStateManager-Protocol.h"
#import "SPTSocialListeningModelObserver-Protocol.h"

@class NSString, SPTObserverManager;

@interface SPTSocialListeningListenTogetherStateManagerImplementation : NSObject <SPTSocialListeningListenTogetherStateManager, SPTSocialListeningModelObserver>
{
    long long _currentState;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (void)socialListeningModel:(id)arg1 updatedSession:(id)arg2 updateEvent:(id)arg3;
- (void)socialListeningModel:(id)arg1 didReceiveError:(id)arg2;
- (void)socialListeningModel:(id)arg1 didDeleteSession:(id)arg2;
- (void)updateCurrentState:(long long)arg1;
- (void)removeListenTogetherStateObserver:(id)arg1;
- (void)addListenTogetherStateObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

