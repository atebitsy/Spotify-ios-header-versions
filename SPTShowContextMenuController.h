//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuPresenterDelegate-Protocol.h"
#import "SPTShowContextMenuMetadataViewDelegate-Protocol.h"

@class NSString, SPTPodcastFeatureProperties;
@protocol SPContextMenuActionsFactory, SPTCollectionPlatform, SPTCollectionPlatformTestManager, SPTContextMenuPresenter, SPTContextMenuPresenterFactory, SPTLinkDispatcher, SPTModalPresentationController, SPTPodcastSpeedControlManager, SPTPodcastTestManager, SPTScannablesUserInterfaceFactory, SPTSleepTimerContextMenuActionsProvider;

@interface SPTShowContextMenuController : NSObject <SPTShowContextMenuMetadataViewDelegate, SPTContextMenuPresenterDelegate>
{
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTScannablesUserInterfaceFactory> _scannablesUIFactory;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPTContextMenuPresenterFactory> _presenterFactory;
    id <SPContextMenuActionsFactory> _actionFactory;
    id <SPTPodcastSpeedControlManager> _speedControlManager;
    id <SPTSleepTimerContextMenuActionsProvider> _sleepTimerContextMenuActionsProvider;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTPodcastFeatureProperties *_featureProperties;
}

@property(readonly, nonatomic) SPTPodcastFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) id <SPTSleepTimerContextMenuActionsProvider> sleepTimerContextMenuActionsProvider; // @synthesize sleepTimerContextMenuActionsProvider=_sleepTimerContextMenuActionsProvider;
@property(readonly, nonatomic) id <SPTPodcastSpeedControlManager> speedControlManager; // @synthesize speedControlManager=_speedControlManager;
@property(readonly, nonatomic) id <SPContextMenuActionsFactory> actionFactory; // @synthesize actionFactory=_actionFactory;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> presenterFactory; // @synthesize presenterFactory=_presenterFactory;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(readonly, nonatomic) __weak id <SPTScannablesUserInterfaceFactory> scannablesUIFactory; // @synthesize scannablesUIFactory=_scannablesUIFactory;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(readonly, nonatomic) __weak id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
- (void).cxx_destruct;
- (void)contextMenuPresenterDidDismiss:(id)arg1;
- (_Bool)isIPad;
- (id)providePodcastMixActionForEpisode:(id)arg1 sourcePlaylistUri:(id)arg2 logContext:(id)arg3;
- (void)showCollectionConfirmationProgressViewForAddedState:(_Bool)arg1 entityURL:(id)arg2;
- (id)provideGoToEpisodeActionForEpisode:(id)arg1 inViewController:(id)arg2;
- (id)provideGoToShowActionForEpisode:(id)arg1 inViewController:(id)arg2;
- (id)provideMarkAsPlayedUnplayedActionForEpisode:(id)arg1 contextMenuDelegate:(id)arg2;
- (id)provideOfflineActionForEpisode:(id)arg1 contextMenuDelegate:(id)arg2 inViewController:(id)arg3;
- (id)subtitleContextMenuActionForURI:(id)arg1 sourceURL:(id)arg2 options:(id)arg3;
- (void)showContextMenuMetadataViewShowMore:(id)arg1;
- (id)logContext;
- (void)presentContextMenuForEpisode:(id)arg1 podcast:(id)arg2 URI:(id)arg3 metadata:(id)arg4 sourceURL:(id)arg5 contextMenuDelegate:(id)arg6 inViewController:(id)arg7 senderView:(id)arg8 options:(id)arg9;
- (void)presentContextMenuForEpisode:(id)arg1 URI:(id)arg2 metadata:(id)arg3 sourceURL:(id)arg4 contextMenuDelegate:(id)arg5 inViewController:(id)arg6 senderView:(id)arg7 options:(id)arg8;
- (id)provideGoToArtistActionTaskForTrackURL:(id)arg1 logContext:(id)arg2;
- (id)provideGoToAlbumActionTaskForTrackURL:(id)arg1 logContext:(id)arg2;
- (id)provideAddToPlaylistActionForTrackURL:(id)arg1 sourceURL:(id)arg2 logContext:(id)arg3 contextSourceURL:(id)arg4;
- (id)provideRemoveFromPlaylistActionForTrackURL:(id)arg1 sourceURL:(id)arg2 logContext:(id)arg3 contextSourceURL:(id)arg4;
- (void)dismissAnimated:(_Bool)arg1;
- (void)presentContexMenuForShow:(id)arg1 contextMenuDelegate:(id)arg2 inViewController:(id)arg3 senderView:(id)arg4 options:(id)arg5;
- (void)presentContexMenuWithHeaderView:(id)arg1 actions:(id)arg2 entityURL:(id)arg3 inViewController:(id)arg4 senderView:(id)arg5;
- (void)presentContexMenuWithMetaDataView:(id)arg1 actions:(id)arg2 entityURL:(id)arg3 inViewController:(id)arg4 senderView:(id)arg5;
- (id)initWithPodcastTestManager:(id)arg1 collectionPlatfrom:(id)arg2 collectionTestManager:(id)arg3 featureProperties:(id)arg4 speedControlManager:(id)arg5 sleepTimerContextMenuActionsProvider:(id)arg6 modalPresentationController:(id)arg7 presenterFactory:(id)arg8 actionFactory:(id)arg9 linkDispatcher:(id)arg10 scannablesUIFactory:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

