//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLoginTraitAwareViewController.h"

#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSString, NSURL, SPTLoginMethodLedStartScreenViewModel, SPTLoginMethodLedStartView, SPTLoginTheme;
@protocol SPTPageContainer;

@interface SPTLoginMethodLedStartViewController : SPTLoginTraitAwareViewController <SPTNavigationControllerNavigationBarState, SPTPageController>
{
    SPTLoginTheme *_theme;
    SPTLoginMethodLedStartScreenViewModel *_viewModel;
    unsigned long long _method;
}

@property(readonly, nonatomic) unsigned long long method; // @synthesize method=_method;
@property(readonly, nonatomic) SPTLoginMethodLedStartScreenViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)signupButtonTapped;
- (void)loginButtonTapped;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 method:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SPTLoginMethodLedStartView *view; // @dynamic view;

@end
