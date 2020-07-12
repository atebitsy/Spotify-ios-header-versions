//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTFrameDropTrackerDelegate-Protocol.h"
#import "SPTFreeTierPlaylistBarButtonManagerDelegate-Protocol.h"
#import "SPTFreeTierPlaylistViewModelDelegate-Protocol.h"
#import "SPTFreeTierRecommendationsPlaylistFooterViewControllerDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTShareableContext-Protocol.h"
#import "SPTSortingFilteringPickerDelegate-Protocol.h"
#import "SPTStatusBarManagerObserver-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, NSURL, SPTEntityHeaderViewController, SPTFrameDropTracker, SPTFreeTierPlaylistBarButtonManager, SPTFreeTierPlaylistCellConfigurator, SPTFreeTierPlaylistCellProviderCoordinator, SPTFreeTierPlaylistFooterProvider, SPTFreeTierPlaylistGLUETheme, SPTFreeTierPlaylistHeaderPlaceholder, SPTFreeTierPlaylistLogger, SPTFreeTierPlaylistSponsoredLogoCellStyle, SPTProgressView, SPTTableView;
@protocol GLUEImageLoader, SPTCollectionPlatformConfiguration, SPTFreeTierPlaylistConfiguration, SPTFreeTierPlaylistEntityContextMenuPresenter, SPTFreeTierPlaylistHeader><SPTEntityHeaderContentController, SPTFreeTierPlaylistTestManager, SPTFreeTierPlaylistViewModel, SPTFreeTierRecommendationsPlaylistFooterViewController, SPTPageContainer, SPTSortingFilteringUIFactory;

@interface SPTFreeTierPlaylistViewController : UIViewController <SPTFreeTierRecommendationsPlaylistFooterViewControllerDelegate, SPTNavigationControllerNavigationBarState, SPTShareableContext, SPContentInsetViewController, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UITextFieldDelegate, SPTSortingFilteringPickerDelegate, SPTFrameDropTrackerDelegate, SPTFreeTierPlaylistBarButtonManagerDelegate, SPTStatusBarManagerObserver, SPTPageController, SPTFreeTierPlaylistViewModelDelegate>
{
    id <SPTFreeTierPlaylistViewModel> _playlistViewModel;
    id <GLUEImageLoader> _imageLoader;
    SPTFreeTierPlaylistGLUETheme *_theme;
    SPTFreeTierPlaylistBarButtonManager *_playlistBarButtonManager;
    SPTFreeTierPlaylistFooterProvider *_footerProvider;
    SPTFreeTierPlaylistLogger *_logger;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTFreeTierPlaylistConfiguration> _configuration;
    SPTTableView *_tableView;
    UIViewController<SPTFreeTierRecommendationsPlaylistFooterViewController> *_footerViewController;
    UIViewController<SPTFreeTierPlaylistHeader><SPTEntityHeaderContentController> *_headerViewController;
    SPTEntityHeaderViewController *_entityHeaderViewController;
    SPTProgressView *_progressView;
    SPTFreeTierPlaylistHeaderPlaceholder *_headerPlaceholderView;
    SPTFreeTierPlaylistSponsoredLogoCellStyle *_sponsorshipStyle;
    SPTFreeTierPlaylistCellConfigurator *_cellConfigurator;
    CDUnknownBlockType _searchViewControllerFactory;
    id <SPTSortingFilteringUIFactory> _sortingFilteringUIFactory;
    SPTFrameDropTracker *_scrollPerformanceTracker;
    id <SPTFreeTierPlaylistTestManager> _playlistTestManager;
    SPTFreeTierPlaylistCellProviderCoordinator *_cellProviderCoordinator;
    id <SPTFreeTierPlaylistEntityContextMenuPresenter> _entityContextMenuPresenter;
    CDUnknownBlockType _whenDataIsLoaded;
}

@property(copy, nonatomic) CDUnknownBlockType whenDataIsLoaded; // @synthesize whenDataIsLoaded=_whenDataIsLoaded;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistEntityContextMenuPresenter> entityContextMenuPresenter; // @synthesize entityContextMenuPresenter=_entityContextMenuPresenter;
@property(readonly, nonatomic) SPTFreeTierPlaylistCellProviderCoordinator *cellProviderCoordinator; // @synthesize cellProviderCoordinator=_cellProviderCoordinator;
@property(retain, nonatomic) id <SPTFreeTierPlaylistTestManager> playlistTestManager; // @synthesize playlistTestManager=_playlistTestManager;
@property(readonly, nonatomic) SPTFrameDropTracker *scrollPerformanceTracker; // @synthesize scrollPerformanceTracker=_scrollPerformanceTracker;
@property(retain, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringUIFactory; // @synthesize sortingFilteringUIFactory=_sortingFilteringUIFactory;
@property(copy, nonatomic) CDUnknownBlockType searchViewControllerFactory; // @synthesize searchViewControllerFactory=_searchViewControllerFactory;
@property(retain, nonatomic) SPTFreeTierPlaylistCellConfigurator *cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) SPTFreeTierPlaylistSponsoredLogoCellStyle *sponsorshipStyle; // @synthesize sponsorshipStyle=_sponsorshipStyle;
@property(retain, nonatomic) SPTFreeTierPlaylistHeaderPlaceholder *headerPlaceholderView; // @synthesize headerPlaceholderView=_headerPlaceholderView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTEntityHeaderViewController *entityHeaderViewController; // @synthesize entityHeaderViewController=_entityHeaderViewController;
@property(retain, nonatomic) UIViewController<SPTFreeTierPlaylistHeader><SPTEntityHeaderContentController> *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) UIViewController<SPTFreeTierRecommendationsPlaylistFooterViewController> *footerViewController; // @synthesize footerViewController=_footerViewController;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistConfiguration> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(readonly, nonatomic) SPTFreeTierPlaylistLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTFreeTierPlaylistFooterProvider *footerProvider; // @synthesize footerProvider=_footerProvider;
@property(readonly, nonatomic) SPTFreeTierPlaylistBarButtonManager *playlistBarButtonManager; // @synthesize playlistBarButtonManager=_playlistBarButtonManager;
@property(readonly, nonatomic) SPTFreeTierPlaylistGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistViewModel> playlistViewModel; // @synthesize playlistViewModel=_playlistViewModel;
- (void).cxx_destruct;
- (void)statusBarManager:(id)arg1 didToggleStatusBarState:(_Bool)arg2;
- (void)statusBarManager:(id)arg1 didChangeStatusBarHeight:(double)arg2;
- (void)didTapContextMenuButton:(id)arg1;
- (void)frameDropTracker:(id)arg1 reportDuration:(double)arg2 maxFrameTime:(double)arg3 smallDropCount:(double)arg4 largeDropCount:(double)arg5;
- (void)playURIInContext:(id)arg1;
- (void)determineIfContextContainsURI:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)indexPathForView:(id)arg1;
- (void)didCancelSortingFilteringPicker:(id)arg1 reason:(unsigned long long)arg2;
- (void)sortingFilteringPicker:(id)arg1 deselectedFilterRule:(id)arg2;
- (void)sortingFilteringPicker:(id)arg1 selectedFilterRule:(id)arg2;
- (void)sortingFilteringPicker:(id)arg1 selectedSortRule:(id)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)playlistSponsorshipDidChange;
- (void)freeTierPlaylistViewModel:(id)arg1 error:(id)arg2;
- (void)freeTierPlaylistViewModel:(id)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistViewModelDidChangeEmptyState:(id)arg1;
- (double)bottomContentInsetForShortPlaylist;
- (void)updateBottomContentInset;
- (void)freeTierPlaylistViewModelDidChange:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)adjustContentOffsetToShowOrHideFilterBarWithTargetContentOffset:(inout struct CGPoint *)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)cloudCellForRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)sp_updateContentInsets;
- (void)addFooterIfApproachingBottomOfList;
- (void)updateFooterViewIfLoaded;
- (void)footerViewControllerUpdated:(id)arg1;
- (void)hideHeaderPlaceholder;
- (void)showHeaderPlaceholder;
- (void)hideProgressViewWithError:(id)arg1;
- (void)sortContextMenuButtonTapped:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)setupHeaderViewController;
- (id)createSearchBar;
- (void)adjustContentOffsetToShowExpandedHeader;
- (void)setupHeaderIfNeeded;
- (void)initializeInterface;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)whenDataIsLoadedDo:(CDUnknownBlockType)arg1;
- (id)initWithPlaylistViewModel:(id)arg1 imageLoader:(id)arg2 theme:(id)arg3 playlistBarButtonManager:(id)arg4 footerProvider:(id)arg5 logger:(id)arg6 collectionConfiguration:(id)arg7 searchViewControllerFactory:(CDUnknownBlockType)arg8 sortingFilteringUIFactory:(id)arg9 configuration:(id)arg10 playlistTestManager:(id)arg11 frameDropTracker:(id)arg12 cellProviderCoordinator:(id)arg13 playlistContextMenuPresenter:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

