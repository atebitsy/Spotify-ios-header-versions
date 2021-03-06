//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "VISREFHeaderControllerObserver-Protocol.h"

@class NSString;
@protocol VISREFHeaderController, VISREFTableHeaderViewDelegate;

@interface VISREFTableHeaderView : UIView <VISREFHeaderControllerObserver>
{
    id <VISREFTableHeaderViewDelegate> _delegate;
    double _suggestedScrollViewOffset;
    id <VISREFHeaderController> _visrefHeaderController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <VISREFHeaderController> visrefHeaderController; // @synthesize visrefHeaderController=_visrefHeaderController;
@property(nonatomic) double suggestedScrollViewOffset; // @synthesize suggestedScrollViewOffset=_suggestedScrollViewOffset;
@property(nonatomic) __weak id <VISREFTableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)headerHeightDidChangeWithTotalHeaderHeight:(double)arg1 safeAreaTopInset:(double)arg2 contentHeight:(double)arg3 topAccessoryViewHeight:(double)arg4;
- (void)dealloc;
- (void)setupLayout;
- (double)viewMinimumHeight;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)didMoveToSuperview;
- (id)initWithVISREFHeaderController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

