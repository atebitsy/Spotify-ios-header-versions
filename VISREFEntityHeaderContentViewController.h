//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTEntityHeaderContentController-Protocol.h"
#import "VISREFHeaderControllerObserver-Protocol.h"
#import "VISREFTouchForwardingViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, UILayoutGuide, UIScrollView, VISREFBaseHeaderController, VISREFTouchForwardingView;

@interface VISREFEntityHeaderContentViewController : UIViewController <VISREFTouchForwardingViewDelegate, VISREFHeaderControllerObserver, SPTEntityHeaderContentController>
{
    _Bool _viewIsVisible;
    VISREFBaseHeaderController *_headerController;
    UIScrollView *_parentScrollView;
    NSLayoutConstraint *_headerViewTopConstraint;
    NSLayoutConstraint *_headerViewHeightConstraint;
    UILayoutGuide *_fullHeightLayoutGuide;
    NSLayoutConstraint *_layoutGuideHeightConstraint;
    VISREFTouchForwardingView *_touchForwardingView;
    double _fullHeaderHeight;
    double _statusBarHeight;
}

@property(nonatomic) _Bool viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) double fullHeaderHeight; // @synthesize fullHeaderHeight=_fullHeaderHeight;
@property(retain, nonatomic) VISREFTouchForwardingView *touchForwardingView; // @synthesize touchForwardingView=_touchForwardingView;
@property(retain, nonatomic) NSLayoutConstraint *layoutGuideHeightConstraint; // @synthesize layoutGuideHeightConstraint=_layoutGuideHeightConstraint;
@property(retain, nonatomic) UILayoutGuide *fullHeightLayoutGuide; // @synthesize fullHeightLayoutGuide=_fullHeightLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *headerViewHeightConstraint; // @synthesize headerViewHeightConstraint=_headerViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerViewTopConstraint; // @synthesize headerViewTopConstraint=_headerViewTopConstraint;
@property(nonatomic) __weak UIScrollView *parentScrollView; // @synthesize parentScrollView=_parentScrollView;
@property(retain, nonatomic) VISREFBaseHeaderController *headerController; // @synthesize headerController=_headerController;
- (void).cxx_destruct;
- (void)headerHeightDidChangeWithTotalHeaderHeight:(double)arg1 safeAreaTopInset:(double)arg2 contentHeight:(double)arg3 topAccessoryViewHeight:(double)arg4;
- (id)touchFowardingView:(id)arg1 didReceiveHitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)dealloc;
- (void)entityHeaderViewController:(id)arg1 didAttachToScrollView:(id)arg2 inViewController:(id)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (double)entityHeaderViewControllerMinimumHeight:(id)arg1;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (void)setupLayout;
- (id)initWithHeaderController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

