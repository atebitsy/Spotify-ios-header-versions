//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPTBarButtonItemManagerObserver-Protocol.h"
#import "SPTCollectionArtistModelDelegate-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTOfflineSwitchDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"

@class GLUEButton, GLUEEntityRowStyle, NSString, NSURL, SPTCollectionArtistLogger, SPTCollectionEmptyEntityFooterView, SPTEntityTableHeaderView, SPTInfoView, SPTProgressView, SPTTableViewOfflineSwitchCell;
@protocol GLUETheme, SPTBarButtonItemManager, SPTCollectionArtistModel, SPTCollectionPlatformTestManager, SPTContextMenuPresenter, SPTImageLoader, SPTModalPresentationController, SPTNetworkConnectivityController, SPTPageContainer, SPTProductState, SPTShelves;

@interface SPTCollectionArtistViewController : SPTableViewController <SPTImageLoaderDelegate, SPTNavigationControllerNavigationBarState, SPTProductStateObserver, SPTOfflineSwitchDelegate, SPTBarButtonItemManagerObserver, SPTCollectionArtistModelDelegate, SPTPageController>
{
    _Bool _dataLoaded;
    _Bool _hasSetupContentOffset;
    id <SPTCollectionArtistModel> _artistModel;
    id <SPTProductState> _productState;
    id <SPTShelves> _shelves;
    id <SPTImageLoader> _imageLoader;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    SPTCollectionArtistLogger *_logger;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTModalPresentationController> _modalPresentationController;
    id <GLUETheme> _theme;
    GLUEEntityRowStyle *_trackRowStyle;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    SPTEntityTableHeaderView *_entityHeaderView;
    GLUEButton *_followButton;
    SPTTableViewOfflineSwitchCell *_offlineSwitchCell;
    SPTCollectionEmptyEntityFooterView *_emptyArtistFooterView;
    SPTProgressView *_progressView;
    SPTInfoView *_offlineView;
}

@property(nonatomic) _Bool hasSetupContentOffset; // @synthesize hasSetupContentOffset=_hasSetupContentOffset;
@property(nonatomic, getter=isDataLoaded) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(retain, nonatomic) SPTInfoView *offlineView; // @synthesize offlineView=_offlineView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTCollectionEmptyEntityFooterView *emptyArtistFooterView; // @synthesize emptyArtistFooterView=_emptyArtistFooterView;
@property(retain, nonatomic) SPTTableViewOfflineSwitchCell *offlineSwitchCell; // @synthesize offlineSwitchCell=_offlineSwitchCell;
@property(retain, nonatomic) GLUEButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) SPTEntityTableHeaderView *entityHeaderView; // @synthesize entityHeaderView=_entityHeaderView;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(readonly, nonatomic) GLUEEntityRowStyle *trackRowStyle; // @synthesize trackRowStyle=_trackRowStyle;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(readonly, nonatomic) SPTCollectionArtistLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) __weak id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTCollectionArtistModel> artistModel; // @synthesize artistModel=_artistModel;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)updateRightBarButtonItems;
- (void)configureRightBarButtonItems:(id)arg1;
- (void)barButtonItemManagerProvidersDidChange:(id)arg1;
- (void)offlineSwitchCellDidAbortStateChange:(id)arg1;
- (unsigned long long)offlineSwitchCellOfflineAvailability:(id)arg1;
- (void)offlineSwitchCellDidChangeState:(id)arg1 isOn:(_Bool)arg2;
- (id)spt_referrerIdentifier;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)refreshShuffleMode;
- (void)hideEmptyArtistView;
- (void)showEmptyArtistView;
- (void)enableContextMenuButton;
- (void)disableContextMenuButton;
- (void)changeContextMenuButtonState:(_Bool)arg1;
- (void)setupContextMenuButton;
- (void)updateHeaderFollowButtonEnabledState;
- (void)updateHeaderFollowButton;
- (void)updateHeaderView;
- (void)setupHeaderView;
- (id)trackIndexForTableIndexPath:(id)arg1;
- (unsigned long long)trackSectionForSection:(unsigned long long)arg1;
- (long long)offlineSyncStatusForTrackAtTrackIndexPath:(id)arg1;
- (void)toggleFollowButton:(id)arg1;
- (void)toggleOfflineState:(id)arg1;
- (void)invokeArtistContextMenu:(id)arg1;
- (void)invokeContextMenuForTrackButton:(id)arg1;
- (void)shufflePlay:(id)arg1;
- (id)URI;
- (id)URL;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)sp_updateContentInsets;
- (void)applyThemeLayout;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (unsigned long long)preferredNavigationBarState;
- (void)artistModelOfflineStateChanged:(id)arg1;
- (void)artistModelDidUpdateSessionOfflineStatus:(id)arg1;
- (void)artistModelFailedToLoad:(id)arg1 withError:(id)arg2;
- (void)artistModelDidLoadMetadata:(id)arg1;
- (void)artistModelDidUpdatePlayingRow:(id)arg1;
- (void)artistModelDidUpdate:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)configureMultipleAccessoriesViewForCell:(id)arg1 status:(long long)arg2 accessoryLabelType:(long long)arg3 ageRestrictionViewType:(long long)arg4;
- (void)setupTrailingAccessoryForCell:(id)arg1 indexPath:(id)arg2;
- (id)contentViewForCell:(id)arg1;
- (void)configureTrackCell:(id)arg1 withItem:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)showOfflineView;
- (void)hideOfflineView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithArtistModel:(id)arg1 productState:(id)arg2 shelves:(id)arg3 imageLoader:(id)arg4 networkConnectivityController:(id)arg5 logger:(id)arg6 barButtonItemManager:(id)arg7 collectionTestManager:(id)arg8 modalPresentationController:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

