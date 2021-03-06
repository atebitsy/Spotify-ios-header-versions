//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTMenuController-Protocol.h"

@class NSArray, NSString, SPTNavigationManager, SPTObserverManager, UIView, UIViewController;
@protocol SPTTabBarContainer;

@interface SPTMenuController : NSObject <SPTMenuController>
{
    UIViewController<SPTTabBarContainer> *_menuViewController;
    SPTNavigationManager *_navigationManager;
    SPTObserverManager *_observerManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) SPTNavigationManager *navigationManager; // @synthesize navigationManager=_navigationManager;
@property(retain, nonatomic) UIViewController<SPTTabBarContainer> *menuViewController; // @synthesize menuViewController=_menuViewController;
- (void)setContentHeaderView:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) UIView *contentHeaderView;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(nonatomic) __weak UIViewController *selectedViewController;
@property(copy, nonatomic) NSArray *viewControllers;
- (id)initWithTabBarFactory:(id)arg1 navigationManager:(id)arg2 logCenter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

