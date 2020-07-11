//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingContainerIdleMonitorObserver-Protocol.h"
#import "SPTNowPlayingContainerIdleMonitorReceiving-Protocol.h"
#import "SPTNowPlayingContentLayerResolverDelegate-Protocol.h"
#import "SPTNowPlayingContentLayerViewModelDelegate-Protocol.h"
#import "SPTNowPlayingContentViewController-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableSet, NSNotificationCenter, NSString, SPTNowPlayingContainerIdleMonitor, SPTNowPlayingContentLayerViewModel, SPTNowPlayingLogger, SPTNowPlayingShowsFormatOverlayView, SPTObserverManager, SPTTheme, UICollectionView;

@interface SPTNowPlayingContentLayerViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, SPTNowPlayingContentLayerViewModelDelegate, SPTNowPlayingContentLayerResolverDelegate, SPTNowPlayingContainerIdleMonitorObserver, SPTNowPlayingContentViewController, SPTNowPlayingContainerIdleMonitorReceiving>
{
    _Bool _isScrolling;
    UICollectionView *_collectionView;
    SPTNowPlayingContentLayerViewModel *_viewModel;
    SPTTheme *_theme;
    SPTNowPlayingContainerIdleMonitor *_idleMonitor;
    SPTObserverManager *_observerManager;
    NSNotificationCenter *_notificationCenter;
    SPTNowPlayingLogger *_nowPlayingLogger;
    SPTNowPlayingShowsFormatOverlayView *_overlayView;
    UIViewController *_contentDecorationViewController;
    NSMutableSet *_unconfiguredIndexPaths;
    NSArray *_contentDecorationFullscreenContentConstraints;
    NSArray *_contentDecorationWindowedContentConstraints;
    struct UIEdgeInsets _windowedContentInsets;
}

@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(copy, nonatomic) NSArray *contentDecorationWindowedContentConstraints; // @synthesize contentDecorationWindowedContentConstraints=_contentDecorationWindowedContentConstraints;
@property(copy, nonatomic) NSArray *contentDecorationFullscreenContentConstraints; // @synthesize contentDecorationFullscreenContentConstraints=_contentDecorationFullscreenContentConstraints;
@property(retain, nonatomic) NSMutableSet *unconfiguredIndexPaths; // @synthesize unconfiguredIndexPaths=_unconfiguredIndexPaths;
@property(retain, nonatomic) UIViewController *contentDecorationViewController; // @synthesize contentDecorationViewController=_contentDecorationViewController;
@property(retain, nonatomic) SPTNowPlayingShowsFormatOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(readonly, nonatomic) SPTNowPlayingLogger *nowPlayingLogger; // @synthesize nowPlayingLogger=_nowPlayingLogger;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) SPTNowPlayingContainerIdleMonitor *idleMonitor; // @synthesize idleMonitor=_idleMonitor;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTNowPlayingContentLayerViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct UIEdgeInsets windowedContentInsets; // @synthesize windowedContentInsets=_windowedContentInsets;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)idlePeriodDidEnd;
- (void)idlePeriodDidBegin;
- (void)setIdleMonitor:(id)arg1;
- (void)contentLayerViewModelDidChangePreviousTrack:(id)arg1;
- (void)contentLayerViewModelDidChangeNextTrack:(id)arg1;
- (void)contentLayerViewModelDidChangeScrollBoundaries:(id)arg1;
- (void)contentLayerViewModelDidMoveToTrackAtIndexPath:(id)arg1 relativeMovement:(long long)arg2;
- (void)contentLayerResolverDidRefreshProviders:(id)arg1;
- (void)contentLayerResolver:(id)arg1 didRefreshProviderForTrack:(id)arg2;
- (void)reloadOverlayForTrack:(id)arg1;
- (void)contentLayerResolver:(id)arg1 didRegisterProvider:(id)arg2;
- (void)scrollDidFinish;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)visibleIndexPath;
- (void)updateOverlayWithScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withProvider:(id)arg3 forTrack:(id)arg4;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)refreshLeftInset;
- (void)reloadCurrentItemIfNeeded;
- (void)reloadDataMovingToIndexPath:(id)arg1 relativeMovement:(long long)arg2;
- (id)cellAsCoverArtCell:(id)arg1;
- (void)updateContentDecorationViewControllerFrame;
- (_Bool)isShowingOverlayForCurrentPage;
- (void)refreshContentDecorationFullscreenContentConstraints;
- (void)refreshContentDecorationWindowedContentConstraints;
@property(readonly, nonatomic) _Bool shouldTrackIdlePeriodChanges;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)setupCollectionView;
- (void)updateOverlay;
- (void)setupOverlay;
- (void)setupUI;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)reloadLayoutWithSize:(struct CGSize)arg1;
- (void)reloadLayout;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 notificationCenter:(id)arg3 nowPlayingLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

