//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"
#import "SPTSortingFilteringPickerDelegate-Protocol.h"
#import "SPTYourLibraryMusicSongsHeaderViewModelActionDelegate-Protocol.h"
#import "SPTYourLibraryMusicSongsModelDelegate-Protocol.h"
#import "SPTYourLibraryMusicSongsViewModel-Protocol.h"

@class NSArray, NSString, NSURL, SPTObserverManager, SPTPlayOrigin, SPTPlayerState, SPTYourLibraryMusicGroupLabelReader, SPTYourLibraryMusicSongsHeaderViewModelImplementation, SPTYourLibraryMusicSongsLogger;
@protocol SPContextMenuFeature, SPTAlertInterface, SPTAudioPreviewPlayer, SPTOfflineModeState, SPTPlayer, SPTSortingFilteringUIFactory, SPTYourLibraryMusicSongsModel, SPTYourLibraryMusicSongsViewModelDelegate, SPTYourLibraryMusicTestManager;

@interface SPTYourLibraryMusicSongsViewModelImplementation : NSObject <SPTYourLibraryMusicSongsHeaderViewModelActionDelegate, SPTPlayerObserver, SPTSortingFilteringPickerDelegate, SPTYourLibraryMusicSongsViewModel, SPTYourLibraryMusicSongsModelDelegate>
{
    _Bool _scrollingToTop;
    _Bool _scrolling;
    _Bool _needsNonCriticalModelUpdate;
    _Bool _filteringActive;
    _Bool _activeFiltersChanged;
    id <SPTYourLibraryMusicSongsViewModelDelegate> _delegate;
    id <SPTYourLibraryMusicSongsModel> _model;
    id <SPContextMenuFeature> _contextMenuFeature;
    SPTPlayOrigin *_playOrigin;
    id <SPTPlayer> _player;
    id <SPTOfflineModeState> _offlineModeState;
    SPTYourLibraryMusicSongsLogger *_logger;
    SPTPlayerState *_lastPlayerState;
    SPTYourLibraryMusicSongsHeaderViewModelImplementation *_headerViewModel;
    unsigned long long _offlineAvailability;
    NSURL *_URL;
    id <SPTYourLibraryMusicTestManager> _testManager;
    id <SPTSortingFilteringUIFactory> _sortingFilteringPickerFactory;
    id <SPTAudioPreviewPlayer> _audioPreviewPlayer;
    SPTObserverManager *_filterChipsObserverManager;
    id <SPTAlertInterface> _alertInterface;
    NSArray *_sectionConfiguration;
    SPTYourLibraryMusicGroupLabelReader *_groupLabelReader;
}

@property(retain, nonatomic) SPTYourLibraryMusicGroupLabelReader *groupLabelReader; // @synthesize groupLabelReader=_groupLabelReader;
@property(nonatomic) _Bool activeFiltersChanged; // @synthesize activeFiltersChanged=_activeFiltersChanged;
@property(copy, nonatomic) NSArray *sectionConfiguration; // @synthesize sectionConfiguration=_sectionConfiguration;
@property(readonly, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(retain, nonatomic) SPTObserverManager *filterChipsObserverManager; // @synthesize filterChipsObserverManager=_filterChipsObserverManager;
@property(nonatomic, getter=isFilteringActive) _Bool filteringActive; // @synthesize filteringActive=_filteringActive;
@property(nonatomic) _Bool needsNonCriticalModelUpdate; // @synthesize needsNonCriticalModelUpdate=_needsNonCriticalModelUpdate;
@property(nonatomic) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) _Bool scrollingToTop; // @synthesize scrollingToTop=_scrollingToTop;
@property(readonly, nonatomic) id <SPTAudioPreviewPlayer> audioPreviewPlayer; // @synthesize audioPreviewPlayer=_audioPreviewPlayer;
@property(retain, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringPickerFactory; // @synthesize sortingFilteringPickerFactory=_sortingFilteringPickerFactory;
@property(readonly, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) unsigned long long offlineAvailability; // @synthesize offlineAvailability=_offlineAvailability;
@property(retain, nonatomic) SPTYourLibraryMusicSongsHeaderViewModelImplementation *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(retain, nonatomic) SPTPlayerState *lastPlayerState; // @synthesize lastPlayerState=_lastPlayerState;
@property(readonly, nonatomic) SPTYourLibraryMusicSongsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTPlayOrigin *playOrigin; // @synthesize playOrigin=_playOrigin;
@property(readonly, nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(readonly, nonatomic) id <SPTYourLibraryMusicSongsModel> model; // @synthesize model=_model;
@property(nonatomic) __weak id <SPTYourLibraryMusicSongsViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)filterReasonForPlaybackLogging;
- (void)logQuickScrollDragEnded;
- (void)logQuickScrollDragStarted;
- (void)logQuickScrollIsVisible;
- (_Bool)activeFiltersEqualTo:(id)arg1;
- (_Bool)updateActiveFilters:(id)arg1;
- (id)itemProxyForFilterChipItem:(id)arg1;
- (void)filterChipsInteractionObserverClearedSelection;
- (void)filterChipsInteractionObserverItemDeSelected:(id)arg1;
- (void)filterChipsInteractionObserverItemSelected:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)updateFilterChips;
- (void)loadItems;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)willEndFilteringSongsHeaderViewModel:(id)arg1;
- (void)willStartFilteringSongsHeaderViewModel:(id)arg1;
- (void)songsHeaderViewModel:(id)arg1 presentSortingFilterPicker:(id)arg2;
- (void)songsHeaderViewModel:(id)arg1 interactionType:(unsigned long long)arg2;
- (void)songsHeaderViewModel:(id)arg1 textFilter:(id)arg2;
- (void)playActionForSongsHeaderViewModel:(id)arg1;
- (void)songsModelAvailableFiltersDidUpdate:(id)arg1;
- (void)songsModelDidUpdate:(id)arg1 itemsCountChanged:(_Bool)arg2;
- (void)songsModel:(id)arg1 error:(id)arg2;
- (void)notifyUpdate;
- (_Bool)shouldShowFilterChips;
- (_Bool)shouldShowAddSongsButton;
- (void)deselectFilterRyle:(id)arg1;
- (void)selectFilterRule:(id)arg1;
- (unsigned long long)globalIndexFromIndexPath:(id)arg1;
- (id)trackURIAtIndexPath:(id)arg1;
- (unsigned long long)itemType;
- (unsigned long long)sectionIdForSection:(long long)arg1;
- (_Bool)isPlaying;
- (void)didCancelSortingFilteringPicker:(id)arg1 reason:(unsigned long long)arg2;
- (void)sortingFilteringPicker:(id)arg1 deselectedFilterRule:(id)arg2;
- (void)sortingFilteringPicker:(id)arg1 selectedFilterRule:(id)arg2;
- (void)sortingFilteringPicker:(id)arg1 selectedSortRule:(id)arg2;
- (void)didEndScrolling;
- (void)willStartScrolling;
- (void)didScrollToTop;
- (void)willScrollToTop;
- (id)sortingAndFilteringPickerViewController;
@property(readonly, nonatomic) NSArray *activeFilterTitles;
@property(readonly, nonatomic) unsigned long long filteredContentState;
@property(copy, nonatomic) NSString *textFilter;
- (unsigned long long)trailingAccessoryType;
- (void)logFilterSortInteractionType:(unsigned long long)arg1;
- (void)removeFilterAtIndex:(long long)arg1;
- (void)resetFilters;
- (_Bool)isSnackBarsUsedForMessaging;
- (void)stopAudioPreviewViewPlayerForTrackURI:(id)arg1;
- (void)stopAudioPreviewViewPlayer;
- (void)logFilterChipsImpressionIfNeeded;
- (void)logEmptyViewImpression;
- (void)logSwipeCellActionForIndexPath:(id)arg1 shelfPosition:(long long)arg2;
- (void)logAddSongsButtonAction;
- (void)logCancelRemoveDownloads;
- (void)logCloseExtraSongsExplanation;
- (void)logExtraSongsWhyAction;
- (void)logAudioPreviewAtIndexPath:(id)arg1 playing:(_Bool)arg2 isOriginCoverItem:(_Bool)arg3;
- (void)endObservingTrackStateAtIndexPath:(id)arg1;
- (void)startObservingTrackStateAtIndexPath:(id)arg1;
- (void)toggleTrackBanAtIndexPath:(id)arg1;
- (void)unlikeTrackAtIndex:(unsigned long long)arg1 trackURI:(id)arg2 songName:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)toggleTrackLikeAtIndexPath:(id)arg1;
- (void)presentMenuForSongAtIndexPath:(id)arg1 targetViewController:(id)arg2 withSenderControl:(id)arg3;
- (void)setAvailableOffline:(_Bool)arg1;
- (_Bool)isOfflineSwitchCellAtIndex:(id)arg1;
- (_Bool)isAdditionalControlsSection:(unsigned long long)arg1;
- (_Bool)showOfflineSyncControl;
- (id)modelItemAtIndexPath:(id)arg1;
- (long long)modelItemsSectionFromViewModelSection:(long long)arg1;
- (_Bool)isFilterChipsSection:(unsigned long long)arg1;
- (_Bool)isRecommendedSection:(unsigned long long)arg1;
- (_Bool)isSongsSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSections:(long long)arg1;
- (id)currentSectionsConfiguration;
- (id)sectionViewModelAtIndex:(unsigned long long)arg1;
- (void)itemSelectedAtIndexPath:(id)arg1;
- (id)groupLabelAtIndexPath:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)loadViewModel;
@property(readonly, nonatomic, getter=isContentFiltered) _Bool contentFiltered;
@property(readonly, nonatomic, getter=isSortingAndFilteringEnabled) _Bool sortingAndFilteringEnabled;
@property(readonly, nonatomic, getter=isPreviewList) _Bool previewList;
@property(readonly, nonatomic) unsigned long long songsSection;
@property(readonly, nonatomic) unsigned long long numberSections;
@property(readonly, nonatomic, getter=isGroupLabelAvailable) _Bool groupLabelAvailable;
@property(readonly, nonatomic) long long quickScrollMinPages;
@property(readonly, nonatomic) _Bool quickScrollUseDarkStyle;
@property(readonly, nonatomic) unsigned long long quickScrollMechanism;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)initWithModel:(id)arg1 contextMenuFeature:(id)arg2 playOrigin:(id)arg3 player:(id)arg4 offlineModeState:(id)arg5 logger:(id)arg6 testManager:(id)arg7 sortingFilteringPickerFactory:(id)arg8 audioPreviewPlayer:(id)arg9 collectionPlatformConfigurator:(id)arg10 alertInterface:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

