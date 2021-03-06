//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingContainedViewController-Protocol.h"
#import "SPTNowPlayingInformationUnitViewModelDelegate-Protocol.h"

@class NSString, SPTDrivingModeTrackInfoView;
@protocol SPTNowPlayingContainingViewController, SPTNowPlayingInformationUnitViewModel;

@interface SPTDrivingModeTrackInfoViewController : UIViewController <SPTNowPlayingInformationUnitViewModelDelegate, SPTNowPlayingContainedViewController>
{
    id <SPTNowPlayingInformationUnitViewModel> _viewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTNowPlayingInformationUnitViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)viewModelDidUpdate:(id)arg1 trackDidChange:(_Bool)arg2;
- (void)updateLabels;
- (struct CGSize)preferredContentSizeForContainerSize:(struct CGSize)arg1;
- (double)viewControllerPriority;
- (unsigned long long)leadingEdge;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithInfoViewModel:(id)arg1;

// Remaining properties
@property(nonatomic) __weak UIViewController<SPTNowPlayingContainingViewController> *container;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTDrivingModeTrackInfoView *view; // @dynamic view;

@end

