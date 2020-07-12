//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingModeResolverObserver-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"
#import "SPTQueueEnabling-Protocol.h"
#import "SPTQueueSelectableLeadingViewDelegate-Protocol.h"
#import "SPTQueueTableViewSectionHeaderViewDelegate-Protocol.h"
#import "SPTQueueViewModelDelegate-Protocol.h"
#import "SPTUITableViewExtendedDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"

@class GLUEEntityRowStyle, NSIndexPath, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSNotificationCenter, NSObject, NSString, NSURL, SPTQueueTableViewSectionHeaderView, SPTQueueTheme, SPTQueueViewModelDataSource, SPTTableView, UIButton, UIView;
@protocol GLUEImageLoader, OS_dispatch_queue, OS_dispatch_semaphore, SPTCrashReporter, SPTNowPlayingModeResolver, SPTPageContainer, SPTQueueLogger, SPTQueuePlaybackRestrictionHandler, SPTQueueViewControllerDelegate, SPTQueueViewModel, SPTShowEntityService;

@interface SPTQueueViewControllerImplementation : UIViewController <UITableViewDataSource, SPTUITableViewExtendedDelegate, SPTQueueSelectableLeadingViewDelegate, SPTQueueTableViewSectionHeaderViewDelegate, SPTQueueViewModelDelegate, SPTProductStateObserver, SPTNowPlayingModeResolverObserver, SPTQueueEnabling, SPTPageController>
{
    _Bool _hideNowPlayingCoverArt;
    _Bool _updatesEnabled;
    _Bool _draggingRows;
    _Bool _insertingAndDeletingRows;
    id <SPTQueueViewModel> _viewModel;
    id <SPTQueueViewControllerDelegate> _delegate;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTShowEntityService> _entityService;
    CDUnknownBlockType _presentContextMenuBlock;
    id <SPTNowPlayingModeResolver> _modeResolver;
    NSURL *_pageURI;
    SPTQueueTheme *_queueTheme;
    NSMutableSet *_selectedTracks;
    NSMutableArray *_layoutConstraints;
    NSMapTable *_tableViewSectionHeaderViews;
    NSMutableDictionary *_tableViewSectionHeaderHeights;
    SPTQueueTableViewSectionHeaderView *_tableViewSectionHeaderSizingView;
    NSObject<OS_dispatch_queue> *_tableUpdateQueue;
    NSObject<OS_dispatch_semaphore> *_tableUpdateSemaphore;
    UIView *_actionBarView;
    SPTTableView *_tableView;
    UIViewController *_footerViewController;
    SPTQueueViewModelDataSource *_dataSource;
    UIButton *_upNextButton;
    UIButton *_removeButton;
    NSIndexPath *_draggingRowPreviousIndexPath;
    NSIndexPath *_draggingRowCurrentIndexPath;
    UIViewController *_navBarViewController;
    UIViewController *_navigationBarButtonsViewController;
    UIViewController *_navigationBarViewControllerV2;
    id <SPTCrashReporter> _crashReporter;
    id <SPTQueueLogger> _logger;
    GLUEEntityRowStyle *_audioStyle;
    GLUEEntityRowStyle *_videoStyle;
    GLUEEntityRowStyle *_queueStyle;
    NSNotificationCenter *_notificationCenter;
    id <SPTQueuePlaybackRestrictionHandler> _playbackRestrictionHandler;
}

@property(readonly, nonatomic) id <SPTQueuePlaybackRestrictionHandler> playbackRestrictionHandler; // @synthesize playbackRestrictionHandler=_playbackRestrictionHandler;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) GLUEEntityRowStyle *queueStyle; // @synthesize queueStyle=_queueStyle;
@property(readonly, nonatomic) GLUEEntityRowStyle *videoStyle; // @synthesize videoStyle=_videoStyle;
@property(readonly, nonatomic) GLUEEntityRowStyle *audioStyle; // @synthesize audioStyle=_audioStyle;
@property(retain, nonatomic) id <SPTQueueLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(readonly, nonatomic) UIViewController *navigationBarViewControllerV2; // @synthesize navigationBarViewControllerV2=_navigationBarViewControllerV2;
@property(retain, nonatomic) UIViewController *navigationBarButtonsViewController; // @synthesize navigationBarButtonsViewController=_navigationBarButtonsViewController;
@property(readonly, nonatomic) UIViewController *navBarViewController; // @synthesize navBarViewController=_navBarViewController;
@property(retain, nonatomic) NSIndexPath *draggingRowCurrentIndexPath; // @synthesize draggingRowCurrentIndexPath=_draggingRowCurrentIndexPath;
@property(retain, nonatomic) NSIndexPath *draggingRowPreviousIndexPath; // @synthesize draggingRowPreviousIndexPath=_draggingRowPreviousIndexPath;
@property(retain, nonatomic) UIButton *removeButton; // @synthesize removeButton=_removeButton;
@property(retain, nonatomic) UIButton *upNextButton; // @synthesize upNextButton=_upNextButton;
@property(nonatomic, getter=isInsertingAndDeletingRows) _Bool insertingAndDeletingRows; // @synthesize insertingAndDeletingRows=_insertingAndDeletingRows;
@property(nonatomic, getter=isDraggingRows) _Bool draggingRows; // @synthesize draggingRows=_draggingRows;
@property(nonatomic, getter=areUpdatesEnabled) _Bool updatesEnabled; // @synthesize updatesEnabled=_updatesEnabled;
@property(retain, nonatomic) SPTQueueViewModelDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIViewController *footerViewController; // @synthesize footerViewController=_footerViewController;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool hideNowPlayingCoverArt; // @synthesize hideNowPlayingCoverArt=_hideNowPlayingCoverArt;
@property(retain, nonatomic) UIView *actionBarView; // @synthesize actionBarView=_actionBarView;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *tableUpdateSemaphore; // @synthesize tableUpdateSemaphore=_tableUpdateSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *tableUpdateQueue; // @synthesize tableUpdateQueue=_tableUpdateQueue;
@property(retain, nonatomic) SPTQueueTableViewSectionHeaderView *tableViewSectionHeaderSizingView; // @synthesize tableViewSectionHeaderSizingView=_tableViewSectionHeaderSizingView;
@property(retain, nonatomic) NSMutableDictionary *tableViewSectionHeaderHeights; // @synthesize tableViewSectionHeaderHeights=_tableViewSectionHeaderHeights;
@property(retain, nonatomic) NSMapTable *tableViewSectionHeaderViews; // @synthesize tableViewSectionHeaderViews=_tableViewSectionHeaderViews;
@property(retain, nonatomic) NSMutableArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) NSMutableSet *selectedTracks; // @synthesize selectedTracks=_selectedTracks;
@property(readonly, nonatomic) SPTQueueTheme *queueTheme; // @synthesize queueTheme=_queueTheme;
@property(retain, nonatomic, getter=spt_pageURI) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, nonatomic) id <SPTNowPlayingModeResolver> modeResolver; // @synthesize modeResolver=_modeResolver;
@property(readonly, nonatomic) CDUnknownBlockType presentContextMenuBlock; // @synthesize presentContextMenuBlock=_presentContextMenuBlock;
@property(readonly, nonatomic) id <SPTShowEntityService> entityService; // @synthesize entityService=_entityService;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) __weak id <SPTQueueViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SPTQueueViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)setNavBarViewController:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)modeResolver:(id)arg1 didChangeToMode:(id)arg2 fromMode:(id)arg3;
- (id)createAccessoryViewForTrack:(id)arg1;
- (void)replaceOldFooterViewController:(id)arg1 withNewViewController:(id)arg2;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)queueViewModelDidUpdate:(id)arg1 dataSource:(id)arg2;
- (void)fadeTableViewRowsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateTableViewRowsForPriorDataSource:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateFooterAnimated:(_Bool)arg1;
- (void)updateTableViewEditingAnimated:(_Bool)arg1;
- (void)performCurrentTrackAction;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didCancelReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginReorderingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)titleForTableViewHeaderInSection:(long long)arg1;
- (void)setupLeadingAccessoryForQueueCell:(id)arg1 atIndexPath:(id)arg2 forTrack:(id)arg3;
- (void)setupLeadingAccessoryForAudioCell:(id)arg1 atIndexPath:(id)arg2 forTrack:(id)arg3;
- (void)setupLeadingAccessoryForVideoCell:(id)arg1 atIndexPath:(id)arg2 forTrack:(id)arg3;
- (void)setupTrailingAccessoryForCell:(id)arg1 atIndexPath:(id)arg2 forTrack:(id)arg3;
- (void)setupSubtitleAccessoryForCell:(id)arg1 forTrack:(id)arg2;
- (void)setupSubtitleAccessoryForVideoCell:(id)arg1 forTrack:(id)arg2;
- (void)setupContentViewForCell:(id)arg1;
- (void)decorateView:(id)arg1 forHeaderInSection:(unsigned long long)arg2;
- (void)decorateQueueCell:(id)arg1 forTrack:(id)arg2 atIndexPath:(id)arg3;
- (void)decorateVideoCell:(id)arg1 forTrack:(id)arg2 atIndexPath:(id)arg3;
- (void)decorateAudioCell:(id)arg1 forTrack:(id)arg2 atIndexPath:(id)arg3;
- (void)decorateMetaCell:(id)arg1 forTrack:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)gradientMaskWithFrame:(struct CGRect)arg1 location:(double)arg2 length:(double)arg3;
- (void)updateMaskForCell:(id)arg1 forSection:(long long)arg2;
- (void)updateMaskForCell:(id)arg1 atIndexPath:(id)arg2;
- (void)updateMaskForCell:(id)arg1;
- (void)updateMaskForSectionHeader:(id)arg1;
- (void)updateTableViewHeaderMask;
- (void)updateTableViewMasks;
- (void)setDragging:(_Bool)arg1 forCell:(id)arg2;
- (_Bool)cellIsDragging:(id)arg1;
- (void)tableViewCellSectionHeaderView:(id)arg1 didUpdateCGRect:(struct CGRect)arg2;
- (void)upNextSelectedTracks:(id)arg1;
- (void)removeSelectedTracks:(id)arg1;
- (_Bool)shouldHideFooterViewController;
- (void)updateFooterFromCurrentSelection;
- (void)queueCellLeadingView:(id)arg1 didDeselectTrack:(id)arg2;
- (void)queueCellLeadingView:(id)arg1 didSelectTrack:(id)arg2;
- (void)pruneRemovedTracksFromSelection;
- (void)deselectTracks;
- (_Bool)hasSelectedNonRemovableTracks;
- (_Bool)hasSelectedNonQueueableTracks;
- (_Bool)hasSelectedTracks;
- (void)contextButtonTouchUpInside:(id)arg1;
- (void)updateTextColorForCell:(id)arg1 forTrack:(id)arg2 active:(_Bool)arg3;
- (void)updateDragHandleOpacityForCell:(id)arg1 forTrack:(id)arg2;
- (id)findView:(id)arg1 inView:(id)arg2;
- (unsigned long long)trackTypeForRowAtIndexPath:(id)arg1;
- (id)trackForRowAtIndexPath:(id)arg1;
- (unsigned long long)queueSectionForTableSection:(unsigned long long)arg1;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)logUpNextTrackTappedAtIndex:(id)arg1;
- (void)logTapToDeselectUpNextTrack:(id)arg1;
- (void)logTapToSelectUpNextTrack:(id)arg1;
- (void)logDragCellAtIndexPath:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)fontSizeDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2 glueImageLoader:(id)arg3 entityService:(id)arg4 presentContextMenuBlock:(CDUnknownBlockType)arg5 modeResolver:(id)arg6 navigationBarViewControllerV2:(id)arg7 pageURI:(id)arg8 queueTheme:(id)arg9 logger:(id)arg10 crashReporter:(id)arg11 notificationCenter:(id)arg12 playbackRestrictionHandler:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

