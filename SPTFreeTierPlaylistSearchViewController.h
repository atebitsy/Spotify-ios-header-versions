//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTFreeTierPlaylistViewModelDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEEntityRowStyle, NSLayoutConstraint, NSString, NSURL, SPTFreeTierPlaylistCellProviderCoordinator, SPTSearchBar, SPTTableView;
@protocol SPTFreeTierPlaylistConfiguration, SPTFreeTierPlaylistItemsViewModel, SPTFreeTierPlaylistLogger, SPTFreeTierPlaylistViewModel, SPTPageContainer;

@interface SPTFreeTierPlaylistSearchViewController : UIViewController <UITableViewDelegate, SPTNavigationControllerNavigationBarState, UISearchBarDelegate, SPTPageController, SPTFreeTierPlaylistViewModelDelegate>
{
    _Bool _shouldBecomeFirstResponder;
    SPTTableView *_tableView;
    GLUEEntityRowStyle *_trackRowStyle;
    SPTFreeTierPlaylistCellProviderCoordinator *_cellProviderCoordinator;
    id <SPTFreeTierPlaylistViewModel> _playlistViewModel;
    id <SPTFreeTierPlaylistItemsViewModel> _itemsViewModel;
    id <SPTFreeTierPlaylistLogger> _logger;
    id <SPTFreeTierPlaylistConfiguration> _configuration;
    NSLayoutConstraint *_bottomConstraint;
    SPTSearchBar *_searchBar;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool shouldBecomeFirstResponder; // @synthesize shouldBecomeFirstResponder=_shouldBecomeFirstResponder;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistConfiguration> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistItemsViewModel> itemsViewModel; // @synthesize itemsViewModel=_itemsViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistViewModel> playlistViewModel; // @synthesize playlistViewModel=_playlistViewModel;
@property(readonly, nonatomic) SPTFreeTierPlaylistCellProviderCoordinator *cellProviderCoordinator; // @synthesize cellProviderCoordinator=_cellProviderCoordinator;
@property(readonly, nonatomic) GLUEEntityRowStyle *trackRowStyle; // @synthesize trackRowStyle=_trackRowStyle;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
- (id)noResultsView;
- (void)playlistSponsorshipDidChange;
- (void)freeTierPlaylistViewModel:(id)arg1 error:(id)arg2;
- (void)freeTierPlaylistViewModel:(id)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistViewModelDidChangeEmptyState:(id)arg1;
- (void)freeTierPlaylistViewModelDidChange:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)enableCancelButtonInView:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
- (void)didPressCancel;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupConstraints;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)initWithPlaylistViewModel:(id)arg1 itemsViewModel:(id)arg2 trackRowStyle:(id)arg3 cellProviderCoordinator:(id)arg4 configuration:(id)arg5 logger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

