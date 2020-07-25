//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTBarButtonItemManagerObserver-Protocol.h"
#import "SPTChartEntityDataSourceDelegate-Protocol.h"
#import "SPTChartViewModelPlayerDelegate-Protocol.h"
#import "SPTEncoreTrackRowChartDelegate-Protocol.h"
#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTFormatListPlatformManagerOfflineDelegate-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTOfflineSwitchDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"
#import "SPViewController-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEButton, GLUEEntityRowStyle, NSString, NSURL, SPTChartFeatureProperties, SPTChartLogger, SPTChartMetadataView, SPTChartViewModel, SPTEntityTableHeaderView, SPTInfoView, SPTProgressView, SPTTableView, SPTTableViewOfflineSwitchCell;
@protocol GLUETheme, SPContextMenuFeature, SPTBarButtonItemManager, SPTChartEntityDataSource, SPTCollectionPlatformTestManager, SPTContextMenuOptions, SPTContextMenuPresenter, SPTEncoreTrackRowChartFactory, SPTExplicitContentAccessManager, SPTFormatListPlatformManager, SPTImageLoader, SPTModalPresentationController, SPTNetworkConnectivityController, SPTPageContainer, SPTProductState, SPTShelves;

@interface SPTChartViewController : UIViewController <SPContentInsetViewController, UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, SPTImageLoaderDelegate, SPTNavigationControllerNavigationBarState, SPTChartEntityDataSourceDelegate, SPTChartViewModelPlayerDelegate, SPViewController, SPTProductStateObserver, SPTOfflineSwitchDelegate, SPTFormatListPlatformManagerOfflineDelegate, SPTBarButtonItemManagerObserver, SPTExplicitContentEnabledStateObserver, SPTEncoreTrackRowChartDelegate, SPTPageController>
{
    SPTChartMetadataView *_metadataView;
    NSURL *_URL;
    id <SPTShelves> _shelves;
    id <SPTProductState> _productState;
    SPTInfoView *_infoView;
    SPTProgressView *_progressView;
    SPTChartViewModel *_viewModel;
    SPTTableView *_tableView;
    SPTEntityTableHeaderView *_entityHeaderView;
    id <SPTImageLoader> _imageLoader;
    GLUEButton *_followButton;
    id <SPTChartEntityDataSource> _entityDataSource;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPTContextMenuOptions> _contextMenuOptions;
    id <SPTBarButtonItemManager> _barButtonItemManager;
    SPTChartLogger *_chartLogger;
    SPTTableViewOfflineSwitchCell *_offlineSwitchCell;
    id <SPTNetworkConnectivityController> _networkConnectivityController;
    id <SPTFormatListPlatformManager> _formatListPlatformManager;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <GLUETheme> _theme;
    GLUEEntityRowStyle *_trackRowStyle;
    id <SPTEncoreTrackRowChartFactory> _trackRowFactory;
    SPTChartFeatureProperties *_properties;
}

+ (Class)reusableClassForEncoreTrackRowEnabled:(_Bool)arg1;
+ (id)reusableIdentifierForEncoreTrackRowEnabled:(_Bool)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTChartFeatureProperties *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) id <SPTEncoreTrackRowChartFactory> trackRowFactory; // @synthesize trackRowFactory=_trackRowFactory;
@property(readonly, nonatomic) GLUEEntityRowStyle *trackRowStyle; // @synthesize trackRowStyle=_trackRowStyle;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) id <SPTFormatListPlatformManager> formatListPlatformManager; // @synthesize formatListPlatformManager=_formatListPlatformManager;
@property(readonly, nonatomic) id <SPTNetworkConnectivityController> networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) SPTTableViewOfflineSwitchCell *offlineSwitchCell; // @synthesize offlineSwitchCell=_offlineSwitchCell;
@property(readonly, nonatomic) SPTChartLogger *chartLogger; // @synthesize chartLogger=_chartLogger;
@property(readonly, nonatomic) __weak id <SPTBarButtonItemManager> barButtonItemManager; // @synthesize barButtonItemManager=_barButtonItemManager;
@property(retain, nonatomic) id <SPTContextMenuOptions> contextMenuOptions; // @synthesize contextMenuOptions=_contextMenuOptions;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(retain, nonatomic) id <SPTChartEntityDataSource> entityDataSource; // @synthesize entityDataSource=_entityDataSource;
@property(retain, nonatomic) GLUEButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SPTEntityTableHeaderView *entityHeaderView; // @synthesize entityHeaderView=_entityHeaderView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTChartViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) __weak id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) SPTChartMetadataView *metadataView; // @synthesize metadataView=_metadataView;
- (void)unlikeWithSender:(id)arg1;
- (void)unhideWithSender:(id)arg1;
- (void)unbanWithSender:(id)arg1;
- (void)contextMenuTappedWithSender:(id)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)indexPathOfSubview:(id)arg1;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)formatListPlatformManagerDidChangeOfflineStatus:(id)arg1;
- (unsigned long long)offlineSwitchCellOfflineAvailability:(id)arg1;
- (void)offlineSwitchCellDidChangeState:(id)arg1 isOn:(_Bool)arg2;
- (_Bool)isAvailableOfflineTableSection:(long long)arg1;
- (void)setupOfflineSwitchCell;
- (id)provideContextMenuOptions;
- (void)mainContextMenuButtonTapped:(id)arg1;
- (void)configureRightBarButtonItems:(id)arg1;
- (void)updateNavigationBarAnimated;
- (void)barButtonItemManagerProvidersDidChange:(id)arg1;
- (void)sp_updateContentInsets;
- (void)chartViewModel:(id)arg1 didChangePlaybackURI:(id)arg2 isPlaying:(_Bool)arg3;
- (void)chartEntityDataSource:(id)arg1 didEncounterError:(id)arg2;
- (void)chartEntityDataSource:(id)arg1 didLoadChart:(id)arg2;
- (void)populateViewsWithChartViewModel:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)tableViewCellContextMenuButtonTapped:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)setupTrailingAccessoryForCell:(id)arg1 indexPath:(id)arg2;
- (void)configureMultipleAccessoriesViewForCell:(id)arg1 status:(long long)arg2 accessoryLabelType:(long long)arg3;
- (void)configureSwipeGesturesOnCell:(id)arg1 viewModel:(id)arg2 atIndexPath:(id)arg3;
- (id)encoreModelForTrackViewModel:(id)arg1 isPressed:(_Bool)arg2 atIndexPath:(id)arg3;
- (void)configureEncoreCell:(id)arg1 withViewModel:(id)arg2 atIndexPath:(id)arg3;
- (id)contentViewForCell:(id)arg1;
- (void)configureTrackCell:(id)arg1 atIndexPath:(id)arg2 withModel:(id)arg3;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
@property(readonly, nonatomic) NSURL *URI;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)followButtonTapped;
- (void)shuffleButtonTapped;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)reloadTableView;
- (void)updateFollowButtonState:(_Bool)arg1;
- (void)setupFollowButton;
- (void)setupShuffleButton;
- (void)setupHeaderView;
- (void)setupTableView;
- (void)setupInfoView;
- (void)setupProgressView;
- (void)setupView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1 productState:(id)arg2 logCenter:(id)arg3 viewModel:(id)arg4 contextMenuFeature:(id)arg5 entityDataSource:(id)arg6 shelves:(id)arg7 imageLoader:(id)arg8 barButtonItemManager:(id)arg9 networkConnectivityController:(id)arg10 formatListPlatformManager:(id)arg11 collectionTestManager:(id)arg12 modalPresentationController:(id)arg13 explicitContentAccessManager:(id)arg14 trackRowFactory:(id)arg15 properties:(id)arg16;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

