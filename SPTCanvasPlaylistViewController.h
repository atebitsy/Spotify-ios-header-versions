//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTCanvasPlaylistLayoutDelegate-Protocol.h"
#import "SPTCanvasPlaylistViewControllerViewModelDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, NSURL, SPTCanvasPlaylistViewControllerViewModel, UICollectionView, UIView;
@protocol GLUETheme, SPTPageContainer;

@interface SPTCanvasPlaylistViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, SPTCanvasPlaylistLayoutDelegate, SPTNavigationControllerNavigationBarState, SPTPageController, SPTCanvasPlaylistViewControllerViewModelDelegate>
{
    _Bool _shouldSholdMetadata;
    SPTCanvasPlaylistViewControllerViewModel *_viewModel;
    UICollectionView *_collectionView;
    UIView *_backButtonBackgroundView;
    id <GLUETheme> _theme;
}

@property(nonatomic) _Bool shouldSholdMetadata; // @synthesize shouldSholdMetadata=_shouldSholdMetadata;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *backButtonBackgroundView; // @synthesize backButtonBackgroundView=_backButtonBackgroundView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) SPTCanvasPlaylistViewControllerViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (_Bool)prefersBlurEffect;
- (id)preferredNavigationBarBackgroundColor;
- (unsigned long long)preferredNavigationBarState;
- (void)reloadSelected;
- (void)peformUpdatesWithInsertItemAtPaths:(id)arg1 deleteItemsAtIndexPaths:(id)arg2 reloadItemsAtIndexPaths:(id)arg3;
- (void)reloadData;
- (void)didEndDisplayingCell:(id)arg1 withItemAtIndexPath:(id)arg2;
- (void)willDisplayCell:(id)arg1 withItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)shouldShowSquareItemAtIndexPath:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)updateShouldSholdMetadata;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionViewCellSizeForNumOfColumns:(unsigned long long)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

