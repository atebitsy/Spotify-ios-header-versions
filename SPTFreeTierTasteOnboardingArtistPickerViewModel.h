//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SPTDataLoader, SPTDataLoaderRequest, SPTFreeTierTasteOnboardingArtistPickerViewLogger, SPTFreeTierTasteOnboardingDeeplinkStore, SPTFreeTierTasteOnboardingSession, SPTFreeTierTasteOnboardingTheme, SPTNetworkConnectivityController, SPTPopupManager;
@protocol SPTFollowModelFactory, SPTFreeTierTasteOnboardingArtistPickerViewModelDelegate, SPTFreeTierTasteOnboardingTestManager;

@interface SPTFreeTierTasteOnboardingArtistPickerViewModel : NSObject <SPTNetworkConnectivityControllerObserver, SPTDataLoaderDelegate>
{
    _Bool _repeatVisit;
    _Bool _isCloseButtonPermanent;
    _Bool _podcastOnboardingScheduled;
    id <SPTFreeTierTasteOnboardingArtistPickerViewModelDelegate> _delegate;
    SPTFreeTierTasteOnboardingArtistPickerViewLogger *_logger;
    SPTFreeTierTasteOnboardingSession *_session;
    long long _seedASessionVisualTreatment;
    SPTFreeTierTasteOnboardingTheme *_theme;
    SPTDataLoader *_dataLoader;
    id <SPTFollowModelFactory> _followModelFactory;
    SPTPopupManager *_popupManager;
    SPTFreeTierTasteOnboardingDeeplinkStore *_deeplinkStore;
    SPTNetworkConnectivityController *_networkConnectivityController;
    id <SPTFreeTierTasteOnboardingTestManager> _testManager;
    SPTDataLoaderRequest *_requestUsedWhileOffline;
    NSMutableArray *_items;
    NSMutableArray *_expandedItems;
    NSMutableDictionary *_followModels;
    unsigned long long _selectedItemsCount;
}

@property(nonatomic) unsigned long long selectedItemsCount; // @synthesize selectedItemsCount=_selectedItemsCount;
@property(readonly, nonatomic) NSMutableDictionary *followModels; // @synthesize followModels=_followModels;
@property(readonly, nonatomic) NSMutableArray *expandedItems; // @synthesize expandedItems=_expandedItems;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) SPTDataLoaderRequest *requestUsedWhileOffline; // @synthesize requestUsedWhileOffline=_requestUsedWhileOffline;
@property(readonly, nonatomic) id <SPTFreeTierTasteOnboardingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingDeeplinkStore *deeplinkStore; // @synthesize deeplinkStore=_deeplinkStore;
@property(readonly, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(readonly, nonatomic) id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) long long seedASessionVisualTreatment; // @synthesize seedASessionVisualTreatment=_seedASessionVisualTreatment;
@property(nonatomic, getter=isPodcastOnboardingScheduled) _Bool podcastOnboardingScheduled; // @synthesize podcastOnboardingScheduled=_podcastOnboardingScheduled;
@property(nonatomic) _Bool isCloseButtonPermanent; // @synthesize isCloseButtonPermanent=_isCloseButtonPermanent;
@property(nonatomic, getter=isRepeatVisit) _Bool repeatVisit; // @synthesize repeatVisit=_repeatVisit;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingArtistPickerViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTFreeTierTasteOnboardingArtistPickerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool seedASessionEnabled;
- (_Bool)canSelectSeedASessionItem;
- (void)logPodcastInFirstTimeFlowImpression;
- (void)logItemInteractionId:(id)arg1 forItem:(id)arg2 position:(unsigned long long)arg3 maxPosition:(unsigned long long)arg4;
- (void)didDeselectItem:(id)arg1 atIndexPath:(id)arg2;
- (void)didSelectItem:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)isFreshData;
- (void)handleOnlineStateIfPossible;
- (void)handleOfflineStateIfPossible;
- (_Bool)isOffline;
- (unsigned long long)insertItems:(id)arg1 atIndex:(unsigned long long)arg2 insertedIndexPaths:(id)arg3;
- (void)insertRelatedItems:(id)arg1 forItem:(id)arg2;
- (void)expandItemAtIndex:(unsigned long long)arg1 afterResponse:(_Bool)arg2;
- (void)artistItem:(id)arg1 setFollowing:(_Bool)arg2;
- (void)presentRetryDialogWithResponse:(id)arg1;
- (void)processFetchRelatedGenreItemsResponse:(id)arg1;
- (void)processFetchRelatedArtistItemsResponse:(id)arg1;
- (void)fetchRelatedItems:(id)arg1;
- (void)processFetchItemsResponse:(id)arg1;
- (void)performRequest:(id)arg1;
- (void)fetchItems;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)titleTextForRepeatVisit:(_Bool)arg1 requiredCount:(unsigned long long)arg2;
- (void)selectItem:(id)arg1;
- (id)searchPlaceholderText;
- (id)actionText;
- (id)titleText;
- (id)offlineViewStyle;
- (id)viewStyleForTraitCollection:(id)arg1;
@property(readonly, nonatomic) NSArray *viewItems;
- (unsigned long long)selectedItemsRequiredCount;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 logger:(id)arg2 session:(id)arg3 dataLoader:(id)arg4 followModelFactory:(id)arg5 popupManager:(id)arg6 networkConnectivityController:(id)arg7 testManager:(id)arg8 deeplinkStore:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

