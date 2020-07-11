//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSortingFilteringPickerDelegate-Protocol.h"
#import "SPTYourLibraryMusicPlaylistsModelDelegate-Protocol.h"
#import "SPTYourLibraryMusicPlaylistsViewModel-Protocol.h"

@class NSArray, NSString, SPTYourLibraryMusicGroupLabelReader, SPTYourLibraryMusicLogger;
@protocol SPTFreeTierCreatePlaylistController, SPTLinkDispatcher, SPTPlaylistPlatformPlaylistSynchroniser, SPTSortingFilteringUIFactory, SPTYourLibraryMusicLikedSongsModelEntity, SPTYourLibraryMusicPlaylistsModel, SPTYourLibraryMusicPlaylistsModelEntity, SPTYourLibraryMusicPlaylistsViewModelDelegate, SPTYourLibraryMusicTestManager;

@interface SPTYourLibraryMusicPlaylistsViewModelImplementation : NSObject <SPTSortingFilteringPickerDelegate, SPTYourLibraryMusicPlaylistsViewModel, SPTYourLibraryMusicPlaylistsModelDelegate>
{
    _Bool _textFilteringMode;
    _Bool _didLogScrollIndexSelected;
    id <SPTYourLibraryMusicPlaylistsViewModelDelegate> delegate;
    id <SPTYourLibraryMusicPlaylistsModel> _model;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPlaylistPlatformPlaylistSynchroniser> _playlistSynchroniser;
    id <SPTFreeTierCreatePlaylistController> _createPlaylistController;
    SPTYourLibraryMusicLogger *_logger;
    id <SPTYourLibraryMusicTestManager> _testManager;
    id <SPTYourLibraryMusicPlaylistsModelEntity> _modelEntity;
    id <SPTYourLibraryMusicLikedSongsModelEntity> _favoriteMixEntity;
    id <SPTSortingFilteringUIFactory> _sortingFilteringPickerFactory;
    SPTYourLibraryMusicGroupLabelReader *_groupLabelReader;
}

@property(retain, nonatomic) SPTYourLibraryMusicGroupLabelReader *groupLabelReader; // @synthesize groupLabelReader=_groupLabelReader;
@property(nonatomic) _Bool didLogScrollIndexSelected; // @synthesize didLogScrollIndexSelected=_didLogScrollIndexSelected;
@property(nonatomic) _Bool textFilteringMode; // @synthesize textFilteringMode=_textFilteringMode;
@property(retain, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringPickerFactory; // @synthesize sortingFilteringPickerFactory=_sortingFilteringPickerFactory;
@property(retain, nonatomic) id <SPTYourLibraryMusicLikedSongsModelEntity> favoriteMixEntity; // @synthesize favoriteMixEntity=_favoriteMixEntity;
@property(retain, nonatomic) id <SPTYourLibraryMusicPlaylistsModelEntity> modelEntity; // @synthesize modelEntity=_modelEntity;
@property(retain, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) SPTYourLibraryMusicLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTFreeTierCreatePlaylistController> createPlaylistController; // @synthesize createPlaylistController=_createPlaylistController;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistSynchroniser> playlistSynchroniser; // @synthesize playlistSynchroniser=_playlistSynchroniser;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTYourLibraryMusicPlaylistsModel> model; // @synthesize model=_model;
@property(nonatomic) __weak id <SPTYourLibraryMusicPlaylistsViewModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)didCancelSortingFilteringPicker:(id)arg1;
- (void)sortingFilteringPicker:(id)arg1 deselectedFilterRule:(id)arg2;
- (void)sortingFilteringPicker:(id)arg1 selectedFilterRule:(id)arg2;
- (void)sortingFilteringPicker:(id)arg1 selectedSortRule:(id)arg2;
- (void)playlistsModel:(id)arg1 error:(id)arg2;
- (void)playlistsModel:(id)arg1 didUpdateEntity:(id)arg2;
- (id)modelItemEntityAtIndexPath:(id)arg1;
- (void)createPlaylistActionInInfoView:(_Bool)arg1;
- (id)playlistEntityForRowAtIndexPath:(id)arg1;
- (void)endObservingRowAtIndexPath:(id)arg1;
- (void)beginObservingRowAtIndexPath:(id)arg1;
- (void)willEndTextFiltering;
- (void)willBeginTextFiltering;
- (id)indexPathForScrollSectionIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *sectionIndexTitles;
- (void)removeFilterAtIndex:(long long)arg1;
- (void)logQuickScrollDragEnded;
- (void)logQuickScrollDragStarted;
- (void)logQuickScrollIsVisible;
- (void)logSectionIndexSelected;
- (void)logFilterSortInteractionType:(unsigned long long)arg1;
- (void)resetFilters;
- (id)sortingAndFilteringPickerViewController;
@property(copy, nonatomic) NSString *textFilter;
- (_Bool)showSeparatorForSection:(long long)arg1;
@property(readonly, nonatomic, getter=isSortingAndFilteringEnabled) _Bool sortingAndFilteringEnabled;
- (unsigned long long)countOfItemsInSection:(unsigned long long)arg1;
- (void)itemSelectedAtIndexPath:(id)arg1;
- (_Bool)navigateToIndexPath:(id)arg1 loggingBlock:(CDUnknownBlockType)arg2;
- (id)groupLabelAtIndexPath:(id)arg1;
- (id)itemViewModelAtIndexPath:(id)arg1;
- (id)sectionViewModelForSection:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *title;
- (_Bool)hasMoreInSection:(unsigned long long)arg1;
- (void)loadMoreInSection:(unsigned long long)arg1;
- (void)viewWillAppear;
- (void)loadViewModel;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isGroupLabelAvailable) _Bool groupLabelAvailable;
@property(readonly, nonatomic) unsigned long long quickScrollMechanism;
@property(readonly, nonatomic) NSArray *activeFilterTitles;
@property(readonly, nonatomic) unsigned long long filteredContentState;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)initWithModel:(id)arg1 linkDispatcher:(id)arg2 playlistSynchroniser:(id)arg3 createPlaylistController:(id)arg4 logger:(id)arg5 testManager:(id)arg6 sortingFilteringPickerFactory:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
