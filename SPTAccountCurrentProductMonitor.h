//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTProductStateObserver-Protocol.h"

@class NSDate, NSString, SPTAccountTrialController, SPTObserverManager;
@protocol SPTProductState;

@interface SPTAccountCurrentProductMonitor : NSObject <SPTProductStateObserver>
{
    long long _currentProduct;
    NSDate *_currentProductExpieryDate;
    SPTObserverManager *_observers;
    id <SPTProductState> _productState;
    SPTAccountTrialController *_trialController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTAccountTrialController *trialController; // @synthesize trialController=_trialController;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSDate *currentProductExpieryDate; // @synthesize currentProductExpieryDate=_currentProductExpieryDate;
@property(nonatomic) long long currentProduct; // @synthesize currentProduct=_currentProduct;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)removeCurrentProductObserver:(id)arg1;
- (void)addCurrentProductObserver:(id)arg1;
- (id)productExpiryDateForProduct:(long long)arg1;
- (id)productExpiryDateForProductState:(id)arg1;
- (long long)accountForProductState:(id)arg1;
- (void)updateCurrentProduct;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 trialController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

