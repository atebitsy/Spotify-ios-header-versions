//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTEntityHeaderContentController-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTPodcastEpisodeDescriptionTableViewCellDelegate-Protocol.h"
#import "SPTPodcastEpisodeViewModelDelegate-Protocol.h"
#import "SPTShareableContext-Protocol.h"
#import "SPTThemableViewLayoutDelegate-Protocol.h"
#import "SPViewController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEEntityRowTableViewCell, NSString, NSURL, SPTEntityHeaderViewController, SPTPodcastEpisodeActionsTableViewCell, SPTPodcastEpisodeCoverArtTableViewCell, SPTPodcastEpisodeDescriptionTableViewCell, SPTPodcastEpisodeEntityHeaderContentViewController, SPTPodcastEpisodeFeatureProperties, SPTPodcastEpisodeLogger, SPTPodcastEpisodeTheme, SPTPodcastEpisodeViewModel, SPTProgressView, SPTTableView, UIBarButtonItem, UITableViewCell;
@protocol SPTImageLoaderFactory, SPTModalPresentationController, SPTPageContainer, SPTPodcastContextMenuProvider, SPTPodcastEpisodeFeaturedContentViewController, SPTPodcastRecommendationsViewController, SPTPodcastUIButtonsFactory, SPTProductState, SPTShareFeature, SPTShowContextMenuControllerOptions, SPTViewLogger, _TtP27PodcastHTMLComponentFeature20SPTPodcastHTMLParser_;

@interface SPTPodcastEpisodeViewController : UIViewController <SPContentInsetViewController, SPTPodcastEpisodeViewModelDelegate, SPTEntityHeaderContentController, SPTPodcastEpisodeDescriptionTableViewCellDelegate, SPTNavigationControllerNavigationBarState, SPTThemableViewLayoutDelegate, UITableViewDelegate, UITableViewDataSource, SPTPageController, SPViewController, SPTShareableContext>
{
    _Bool _showLoadingOverlayProgressView;
    _Bool _viewHasAppeared;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTShareFeature> _shareFeature;
    SPTPodcastEpisodeViewModel *_podcastEpisodeViewModel;
    SPTPodcastEpisodeTheme *_podcastTheme;
    SPTPodcastEpisodeEntityHeaderContentViewController *_headerContentController;
    SPTEntityHeaderViewController *_headerView;
    SPTTableView *_tableView;
    SPTPodcastEpisodeActionsTableViewCell *_legacyActionsCell;
    SPTPodcastEpisodeDescriptionTableViewCell *_descriptionCell;
    SPTPodcastEpisodeCoverArtTableViewCell *_coverArtCell;
    UITableViewCell *_actionRowCell;
    UITableViewCell *_audioPlusCell;
    UITableViewCell *_quotesCell;
    UITableViewCell *_featuredContentCell;
    UITableViewCell *_trackListContentCell;
    GLUEEntityRowTableViewCell *_podcastCell;
    UITableViewCell *_pollCell;
    UITableViewCell *_recommendationsCell;
    UIBarButtonItem *_contextMenuBarButtonItem;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    SPTPodcastEpisodeLogger *_logger;
    id <SPTViewLogger> _viewLogger;
    UIViewController *_actionRow;
    UIViewController *_descriptionView;
    UIViewController *_coverArt;
    UIViewController *_seeAll;
    UIViewController *_audioPlus;
    UIViewController *_quotes;
    UIViewController *_pollViewController;
    UIViewController<SPTPodcastRecommendationsViewController> *_recommendations;
    UIViewController<SPTPodcastEpisodeFeaturedContentViewController> *_featuredContent;
    UIViewController *_trackList;
    id <SPTShowContextMenuControllerOptions> _contextMenuOptions;
    id <SPTPodcastUIButtonsFactory> _buttonsFactory;
    SPTProgressView *_progressView;
    double _featuredContentBottomMargin;
    SPTPodcastEpisodeFeatureProperties *_featureProperties;
    id <_TtP27PodcastHTMLComponentFeature20SPTPodcastHTMLParser_> _htmlParser;
    id <SPTProductState> _productState;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <_TtP27PodcastHTMLComponentFeature20SPTPodcastHTMLParser_> htmlParser; // @synthesize htmlParser=_htmlParser;
@property(retain, nonatomic) SPTPodcastEpisodeFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(nonatomic) double featuredContentBottomMargin; // @synthesize featuredContentBottomMargin=_featuredContentBottomMargin;
@property(nonatomic) _Bool viewHasAppeared; // @synthesize viewHasAppeared=_viewHasAppeared;
@property(nonatomic) _Bool showLoadingOverlayProgressView; // @synthesize showLoadingOverlayProgressView=_showLoadingOverlayProgressView;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) id <SPTPodcastUIButtonsFactory> buttonsFactory; // @synthesize buttonsFactory=_buttonsFactory;
@property(retain, nonatomic) id <SPTShowContextMenuControllerOptions> contextMenuOptions; // @synthesize contextMenuOptions=_contextMenuOptions;
@property(retain, nonatomic) UIViewController *trackList; // @synthesize trackList=_trackList;
@property(retain, nonatomic) UIViewController<SPTPodcastEpisodeFeaturedContentViewController> *featuredContent; // @synthesize featuredContent=_featuredContent;
@property(retain, nonatomic) UIViewController<SPTPodcastRecommendationsViewController> *recommendations; // @synthesize recommendations=_recommendations;
@property(retain, nonatomic) UIViewController *pollViewController; // @synthesize pollViewController=_pollViewController;
@property(retain, nonatomic) UIViewController *quotes; // @synthesize quotes=_quotes;
@property(retain, nonatomic) UIViewController *audioPlus; // @synthesize audioPlus=_audioPlus;
@property(retain, nonatomic) UIViewController *seeAll; // @synthesize seeAll=_seeAll;
@property(retain, nonatomic) UIViewController *coverArt; // @synthesize coverArt=_coverArt;
@property(retain, nonatomic) UIViewController *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UIViewController *actionRow; // @synthesize actionRow=_actionRow;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) SPTPodcastEpisodeLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(retain, nonatomic) UIBarButtonItem *contextMenuBarButtonItem; // @synthesize contextMenuBarButtonItem=_contextMenuBarButtonItem;
@property(retain, nonatomic) UITableViewCell *recommendationsCell; // @synthesize recommendationsCell=_recommendationsCell;
@property(retain, nonatomic) UITableViewCell *pollCell; // @synthesize pollCell=_pollCell;
@property(retain, nonatomic) GLUEEntityRowTableViewCell *podcastCell; // @synthesize podcastCell=_podcastCell;
@property(retain, nonatomic) UITableViewCell *trackListContentCell; // @synthesize trackListContentCell=_trackListContentCell;
@property(retain, nonatomic) UITableViewCell *featuredContentCell; // @synthesize featuredContentCell=_featuredContentCell;
@property(retain, nonatomic) UITableViewCell *quotesCell; // @synthesize quotesCell=_quotesCell;
@property(retain, nonatomic) UITableViewCell *audioPlusCell; // @synthesize audioPlusCell=_audioPlusCell;
@property(retain, nonatomic) UITableViewCell *actionRowCell; // @synthesize actionRowCell=_actionRowCell;
@property(retain, nonatomic) SPTPodcastEpisodeCoverArtTableViewCell *coverArtCell; // @synthesize coverArtCell=_coverArtCell;
@property(retain, nonatomic) SPTPodcastEpisodeDescriptionTableViewCell *descriptionCell; // @synthesize descriptionCell=_descriptionCell;
@property(retain, nonatomic) SPTPodcastEpisodeActionsTableViewCell *legacyActionsCell; // @synthesize legacyActionsCell=_legacyActionsCell;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SPTEntityHeaderViewController *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SPTPodcastEpisodeEntityHeaderContentViewController *headerContentController; // @synthesize headerContentController=_headerContentController;
@property(retain, nonatomic) SPTPodcastEpisodeTheme *podcastTheme; // @synthesize podcastTheme=_podcastTheme;
@property(retain, nonatomic) SPTPodcastEpisodeViewModel *podcastEpisodeViewModel; // @synthesize podcastEpisodeViewModel=_podcastEpisodeViewModel;
@property(readonly, nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
- (void)themableViewWillUpdateLayout:(id)arg1;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)playURIInContext:(id)arg1;
- (void)determineIfContextContainsURI:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (void)sp_updateContentInsets;
- (void)downloadButtonTapped:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (void)setupConstraints;
- (void)setupHeaderViewController;
- (void)setTableViewStyleIfNeeded;
- (void)initializeView;
- (void)tableViewReload;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)episodeDescriptionURLTapped:(id)arg1;
- (void)episodeDescriptionTimestampTapped:(double)arg1;
- (void)episodeDescriptionDidExpand;
- (void)viewModelUpdatedPlaybackState:(id)arg1;
- (void)viewModel:(id)arg1 didUpdateWithError:(id)arg2;
- (void)reloadDataWithViewModel:(id)arg1 error:(id)arg2;
- (void)removeViewControllerFromCell:(id)arg1;
- (void)addViewController:(id)arg1 toCell:(id)arg2;
- (_Bool)isStandaloneComponentEnabledForSectionIndex:(long long)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)makeComponentCellWithChildViewController:(id)arg1;
- (id)cellForIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly, nonatomic) NSURL *URI;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (unsigned long long)preferredNavigationBarState;
- (_Bool)computeAllowEpisodeDownload;
- (void)invokeHeaderContextMenu:(id)arg1;
- (void)setupContextMenuButtons;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadComponentViews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithEpisodeViewModel:(id)arg1 imageLoaderFactory:(id)arg2 modalPresentationController:(id)arg3 podcastContextMenuProvider:(id)arg4 shareFeature:(id)arg5 logger:(id)arg6 viewLogger:(id)arg7 actionRow:(id)arg8 descriptionView:(id)arg9 coverArt:(id)arg10 seeAll:(id)arg11 recommendations:(id)arg12 featuredContent:(id)arg13 trackList:(id)arg14 audioPlus:(id)arg15 poll:(id)arg16 quotes:(id)arg17 buttonsFactory:(id)arg18 featureProperties:(id)arg19 htmlParser:(id)arg20 productState:(id)arg21;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

