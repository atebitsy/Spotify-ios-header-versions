//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierFindViewModelProvider-Protocol.h"
#import "SPTFreeTierFindViewModelProviderObserver-Protocol.h"

@class NSString, SPTObserverManager;
@protocol HUBViewModel, SPTFreeTierFindViewModelProvider;

@interface SPTFreeTierFindTransformingViewModelProvider : NSObject <SPTFreeTierFindViewModelProviderObserver, SPTFreeTierFindViewModelProvider>
{
    id <SPTFreeTierFindViewModelProvider> _viewModelProvider;
    CDUnknownBlockType _transformer;
    id <HUBViewModel> _viewModel;
    SPTObserverManager *_observers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <HUBViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, copy, nonatomic) CDUnknownBlockType transformer; // @synthesize transformer=_transformer;
@property(readonly, nonatomic) id <SPTFreeTierFindViewModelProvider> viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
- (void)transformAndSetViewModel:(id)arg1;
- (void)viewModelProvider:(id)arg1 didUpdateFromViewModel:(id)arg2 toViewModel:(id)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)refreshViewModel;
- (id)initWithViewModelProvider:(id)arg1 transformer:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

