//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeViewModelProviderObserver-Protocol.h"
#import "SPTPageLoadable-Protocol.h"

@class NSString, SPTHomeViewModelProvider;
@protocol SPTPageLoadStateHandler;

@interface SPTHomePageLoadable : NSObject <SPTPageLoadable, SPTHomeViewModelProviderObserver>
{
    SPTHomeViewModelProvider *_viewModelProvider;
    id <SPTPageLoadStateHandler> _handler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPageLoadStateHandler> handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) SPTHomeViewModelProvider *viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
- (void)viewModelProviderWillLoadRemoteViewModel:(id)arg1;
- (void)viewModelProviderWillLoadCachedViewModel:(id)arg1;
- (void)viewModelProvider:(id)arg1 didLoadRemoteViewModel:(id)arg2 withError:(id)arg3;
- (void)viewModelProvider:(id)arg1 didLoadCachedViewModel:(id)arg2 withError:(id)arg3;
- (void)cancel;
- (void)loadWithResultHandler:(id)arg1;
- (id)initWithViewModelProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

