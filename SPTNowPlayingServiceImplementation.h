//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingService-Protocol.h"
#import "SPTQueueViewControllerDelegate-Protocol.h"
#import "SpotifyApplicationRemoteControlDelegate-Protocol.h"

@class NSString, SPTAllocationContext, SPTNowPlayingAuxiliaryActionsHandlerImplementation, SPTNowPlayingBackgroundViewController, SPTNowPlayingBarLogger, SPTNowPlayingBarModel, SPTNowPlayingContentLayerViewModel, SPTNowPlayingContextMenuHeaderFactory, SPTNowPlayingDefaultMode, SPTNowPlayingDeviceOrientationManager, SPTNowPlayingFeatureSettings, SPTNowPlayingFeedbackMode, SPTNowPlayingFreeMode, SPTNowPlayingLogger, SPTNowPlayingManagerImplementation, SPTNowPlayingModel, SPTNowPlayingPlaybackActionsHandlerImplementation, SPTNowPlayingPodcastMode, SPTNowPlayingRemoteControlEventDefaultController, SPTNowPlayingRemoteControlPolicyResolver, SPTNowPlayingSideBarLogger, SPTNowPlayingSideBarViewControllerFactory, SPTNowPlayingSkipLimitReachedMessageRequester, SPTNowPlayingStateProxy, SPTNowPlayingToggleViewController, SPTNowPlayingUBILogger, SPTNowPlayingVideoManagerImplementation, SPTNowPlayingVideoShowMode, SPTNowPlayingViewFullscreenConfigurator, SPTStatefulPlayer, UIViewController;
@protocol GaiaFeature, SPContextMenuFeature, SPTAdsBaseService, SPTAdsService, SPTBannerFeature, SPTCollectionPlatformService, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTFeedbackService, SPTFormatListPlatformService, SPTGLUEService, SPTInAppMessageService, SPTMediaPlayerService, SPTNetworkService, SPTNowPlayingInfoCenterManagerProtocol, SPTNowPlayingLegacyFeedbackCoordinator, SPTNowPlayingNavigationBarModel, SPTNowPlayingNavigationBarUnitManager, SPTNowPlayingPlatformService, SPTNowPlayingRemoteControlPolicyRegistry, SPTNowPlayingTestManager, SPTPersonalisedSetsService, SPTPlayer, SPTPlayerFeature, SPTPlaylistPlatformService, SPTPodcastFeature, SPTQueueInteractor, SPTQueueLogger, SPTQueueService, SPTRadioService, SPTSessionService, SPTSettingsFeature, SPTShareFeature, SPTSleepTimerService, SPTSnackbarConditionalPresenter, SPTSnackbarService, SPTUBIService, SPTUIPresentationService, SPTURIDispatchService, SPTVideoCoordinatorService, _TtP18ConnectUIV2Feature21SPTConnectUIV2Service_, _TtP21VoiceCompanionFeature24SPTVoiceCompanionService_, _TtP24ResponsiveShuffleFeature27SPTResponsiveShuffleService_;

@interface SPTNowPlayingServiceImplementation : NSObject <SpotifyApplicationRemoteControlDelegate, SPTQueueViewControllerDelegate, SPTNowPlayingService>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkFeature;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTSettingsFeature> _settingsFeature;
    id <GaiaFeature> _gaiaFeature;
    id <_TtP18ConnectUIV2Feature21SPTConnectUIV2Service_> _connectUIV2Service;
    id <SPTRadioService> _radioService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTQueueService> _queueService;
    id <SPTAdsService> _adsService;
    id <SPTAdsBaseService> _adsBaseService;
    id <SPTVideoCoordinatorService> _videoCoordinatorService;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTMediaPlayerService> _mediaPlayerService;
    id <SPTFormatListPlatformService> _formatListPlatformService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTShareFeature> _shareFeature;
    id <SPTPersonalisedSetsService> _personalisedSetsService;
    id <SPTFeedbackService> _feedbackService;
    id <SPTUIPresentationService> _presentationService;
    id <SPTSleepTimerService> _sleepTimerService;
    id <SPTInAppMessageService> _inappmessageService;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTGLUEService> _glueService;
    id <_TtP21VoiceCompanionFeature24SPTVoiceCompanionService_> _voiceCompanionService;
    id <SPTBannerFeature> _bannerFeature;
    id <SPTUBIService> _ubiService;
    id <SPTSnackbarService> _snackbarService;
    id <_TtP24ResponsiveShuffleFeature27SPTResponsiveShuffleService_> _responsiveShuffleService;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    SPTNowPlayingToggleViewController *_nowPlayingToggleVC;
    UIViewController *_nowPlayingViewController;
    UIViewController *_nowPlayingBarViewController;
    UIViewController *_nowPlayingSideBarViewController;
    id <SPTQueueInteractor> _queueInteractor;
    id <SPTNowPlayingRemoteControlPolicyRegistry> _remoteControlPolicyRegistry;
    SPTNowPlayingViewFullscreenConfigurator *_fullscreenConfigurator;
    id <SPTNowPlayingInfoCenterManagerProtocol> _nowPlayingInfoCenterManager;
    id <SPTPlayer> _player;
    SPTNowPlayingDeviceOrientationManager *_deviceOrientationManager;
    SPTNowPlayingManagerImplementation *_nowPlayingManager;
    SPTNowPlayingVideoManagerImplementation *_videoManager;
    SPTNowPlayingRemoteControlEventDefaultController *_remoteControlEventController;
    SPTNowPlayingModel *_nowPlayingModel;
    SPTNowPlayingBarModel *_nowPlayingBarModel;
    SPTNowPlayingRemoteControlPolicyResolver *_remoteControlPolicyResolver;
    id <SPTNowPlayingNavigationBarModel> _navigationBarModel;
    SPTStatefulPlayer *_statefulPlayer;
    SPTNowPlayingLogger *_nowPlayingLogger;
    SPTNowPlayingBarLogger *_nowPlayingBarLogger;
    SPTNowPlayingUBILogger *_nowPlayingUBILogger;
    SPTNowPlayingSideBarLogger *_nowPlayingSideBarLogger;
    SPTNowPlayingPlaybackActionsHandlerImplementation *_sideBarPlaybackActionsHandler;
    SPTNowPlayingAuxiliaryActionsHandlerImplementation *_sideBarAuxiliaryActionsHandler;
    id <SPTQueueLogger> _queueLogger;
    SPTNowPlayingStateProxy *_nowPlayingStateProxy;
    id <SPTNowPlayingLegacyFeedbackCoordinator> _feedbackCoordinator;
    id <SPTNowPlayingTestManager> _testManager;
    SPTNowPlayingPlaybackActionsHandlerImplementation *_playbackActionsHandler;
    SPTNowPlayingAuxiliaryActionsHandlerImplementation *_auxiliaryActionsHandler;
    SPTNowPlayingContextMenuHeaderFactory *_contextMenuHeaderFactory;
    UIViewController *_queueNavigationBarViewController;
    SPTNowPlayingDefaultMode *_defaultMode;
    SPTNowPlayingFeedbackMode *_feedbackMode;
    SPTNowPlayingFreeMode *_freeMode;
    SPTNowPlayingVideoShowMode *_videoShowMode;
    SPTNowPlayingPodcastMode *_podcastMode;
    SPTNowPlayingContentLayerViewModel *_contentLayerViewModel;
    SPTNowPlayingBackgroundViewController *_backgroundViewController;
    SPTNowPlayingSkipLimitReachedMessageRequester *_skipLimitReachedMessageRequester;
    SPTNowPlayingSideBarViewControllerFactory *_sideBarFactory;
    id <SPTNowPlayingNavigationBarUnitManager> _navigationBarUnitManager;
    SPTNowPlayingFeatureSettings *_featureSettings;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTNowPlayingFeatureSettings *featureSettings; // @synthesize featureSettings=_featureSettings;
@property(retain, nonatomic) id <SPTNowPlayingNavigationBarUnitManager> navigationBarUnitManager; // @synthesize navigationBarUnitManager=_navigationBarUnitManager;
@property(retain, nonatomic) SPTNowPlayingSideBarViewControllerFactory *sideBarFactory; // @synthesize sideBarFactory=_sideBarFactory;
@property(retain, nonatomic) SPTNowPlayingSkipLimitReachedMessageRequester *skipLimitReachedMessageRequester; // @synthesize skipLimitReachedMessageRequester=_skipLimitReachedMessageRequester;
@property(retain, nonatomic) SPTNowPlayingBackgroundViewController *backgroundViewController; // @synthesize backgroundViewController=_backgroundViewController;
@property(retain, nonatomic) SPTNowPlayingContentLayerViewModel *contentLayerViewModel; // @synthesize contentLayerViewModel=_contentLayerViewModel;
@property(retain, nonatomic) SPTNowPlayingPodcastMode *podcastMode; // @synthesize podcastMode=_podcastMode;
@property(retain, nonatomic) SPTNowPlayingVideoShowMode *videoShowMode; // @synthesize videoShowMode=_videoShowMode;
@property(retain, nonatomic) SPTNowPlayingFreeMode *freeMode; // @synthesize freeMode=_freeMode;
@property(retain, nonatomic) SPTNowPlayingFeedbackMode *feedbackMode; // @synthesize feedbackMode=_feedbackMode;
@property(retain, nonatomic) SPTNowPlayingDefaultMode *defaultMode; // @synthesize defaultMode=_defaultMode;
@property(retain, nonatomic) UIViewController *queueNavigationBarViewController; // @synthesize queueNavigationBarViewController=_queueNavigationBarViewController;
@property(retain, nonatomic) SPTNowPlayingContextMenuHeaderFactory *contextMenuHeaderFactory; // @synthesize contextMenuHeaderFactory=_contextMenuHeaderFactory;
@property(retain, nonatomic) SPTNowPlayingAuxiliaryActionsHandlerImplementation *auxiliaryActionsHandler; // @synthesize auxiliaryActionsHandler=_auxiliaryActionsHandler;
@property(retain, nonatomic) SPTNowPlayingPlaybackActionsHandlerImplementation *playbackActionsHandler; // @synthesize playbackActionsHandler=_playbackActionsHandler;
@property(retain, nonatomic) id <SPTNowPlayingTestManager> testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTNowPlayingLegacyFeedbackCoordinator> feedbackCoordinator; // @synthesize feedbackCoordinator=_feedbackCoordinator;
@property(retain, nonatomic) SPTNowPlayingStateProxy *nowPlayingStateProxy; // @synthesize nowPlayingStateProxy=_nowPlayingStateProxy;
@property(readonly, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(retain, nonatomic) SPTNowPlayingAuxiliaryActionsHandlerImplementation *sideBarAuxiliaryActionsHandler; // @synthesize sideBarAuxiliaryActionsHandler=_sideBarAuxiliaryActionsHandler;
@property(retain, nonatomic) SPTNowPlayingPlaybackActionsHandlerImplementation *sideBarPlaybackActionsHandler; // @synthesize sideBarPlaybackActionsHandler=_sideBarPlaybackActionsHandler;
@property(retain, nonatomic) SPTNowPlayingSideBarLogger *nowPlayingSideBarLogger; // @synthesize nowPlayingSideBarLogger=_nowPlayingSideBarLogger;
@property(retain, nonatomic) SPTNowPlayingUBILogger *nowPlayingUBILogger; // @synthesize nowPlayingUBILogger=_nowPlayingUBILogger;
@property(retain, nonatomic) SPTNowPlayingBarLogger *nowPlayingBarLogger; // @synthesize nowPlayingBarLogger=_nowPlayingBarLogger;
@property(retain, nonatomic) SPTNowPlayingLogger *nowPlayingLogger; // @synthesize nowPlayingLogger=_nowPlayingLogger;
@property(retain, nonatomic) SPTStatefulPlayer *statefulPlayer; // @synthesize statefulPlayer=_statefulPlayer;
@property(retain, nonatomic) id <SPTNowPlayingNavigationBarModel> navigationBarModel; // @synthesize navigationBarModel=_navigationBarModel;
@property(retain, nonatomic) SPTNowPlayingRemoteControlPolicyResolver *remoteControlPolicyResolver; // @synthesize remoteControlPolicyResolver=_remoteControlPolicyResolver;
@property(retain, nonatomic) SPTNowPlayingBarModel *nowPlayingBarModel; // @synthesize nowPlayingBarModel=_nowPlayingBarModel;
@property(retain, nonatomic) SPTNowPlayingModel *nowPlayingModel; // @synthesize nowPlayingModel=_nowPlayingModel;
@property(retain, nonatomic) SPTNowPlayingRemoteControlEventDefaultController *remoteControlEventController; // @synthesize remoteControlEventController=_remoteControlEventController;
@property(retain, nonatomic) SPTNowPlayingVideoManagerImplementation *videoManager; // @synthesize videoManager=_videoManager;
@property(retain, nonatomic) SPTNowPlayingManagerImplementation *nowPlayingManager; // @synthesize nowPlayingManager=_nowPlayingManager;
@property(retain, nonatomic) SPTNowPlayingDeviceOrientationManager *deviceOrientationManager; // @synthesize deviceOrientationManager=_deviceOrientationManager;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTNowPlayingInfoCenterManagerProtocol> nowPlayingInfoCenterManager; // @synthesize nowPlayingInfoCenterManager=_nowPlayingInfoCenterManager;
@property(retain, nonatomic) SPTNowPlayingViewFullscreenConfigurator *fullscreenConfigurator; // @synthesize fullscreenConfigurator=_fullscreenConfigurator;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicyRegistry> remoteControlPolicyRegistry; // @synthesize remoteControlPolicyRegistry=_remoteControlPolicyRegistry;
@property(retain, nonatomic) id <SPTQueueInteractor> queueInteractor; // @synthesize queueInteractor=_queueInteractor;
@property(retain, nonatomic) UIViewController *nowPlayingSideBarViewController; // @synthesize nowPlayingSideBarViewController=_nowPlayingSideBarViewController;
@property(retain, nonatomic) UIViewController *nowPlayingBarViewController; // @synthesize nowPlayingBarViewController=_nowPlayingBarViewController;
@property(retain, nonatomic) UIViewController *nowPlayingViewController; // @synthesize nowPlayingViewController=_nowPlayingViewController;
@property(retain, nonatomic) SPTNowPlayingToggleViewController *nowPlayingToggleVC; // @synthesize nowPlayingToggleVC=_nowPlayingToggleVC;
@property(retain, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(nonatomic) __weak id <_TtP24ResponsiveShuffleFeature27SPTResponsiveShuffleService_> responsiveShuffleService; // @synthesize responsiveShuffleService=_responsiveShuffleService;
@property(nonatomic) __weak id <SPTSnackbarService> snackbarService; // @synthesize snackbarService=_snackbarService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTBannerFeature> bannerFeature; // @synthesize bannerFeature=_bannerFeature;
@property(nonatomic) __weak id <_TtP21VoiceCompanionFeature24SPTVoiceCompanionService_> voiceCompanionService; // @synthesize voiceCompanionService=_voiceCompanionService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(nonatomic) __weak id <SPTInAppMessageService> inappmessageService; // @synthesize inappmessageService=_inappmessageService;
@property(nonatomic) __weak id <SPTSleepTimerService> sleepTimerService; // @synthesize sleepTimerService=_sleepTimerService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPTFeedbackService> feedbackService; // @synthesize feedbackService=_feedbackService;
@property(nonatomic) __weak id <SPTPersonalisedSetsService> personalisedSetsService; // @synthesize personalisedSetsService=_personalisedSetsService;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTFormatListPlatformService> formatListPlatformService; // @synthesize formatListPlatformService=_formatListPlatformService;
@property(nonatomic) __weak id <SPTMediaPlayerService> mediaPlayerService; // @synthesize mediaPlayerService=_mediaPlayerService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPTVideoCoordinatorService> videoCoordinatorService; // @synthesize videoCoordinatorService=_videoCoordinatorService;
@property(nonatomic) __weak id <SPTAdsBaseService> adsBaseService; // @synthesize adsBaseService=_adsBaseService;
@property(nonatomic) __weak id <SPTAdsService> adsService; // @synthesize adsService=_adsService;
@property(nonatomic) __weak id <SPTQueueService> queueService; // @synthesize queueService=_queueService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTRadioService> radioService; // @synthesize radioService=_radioService;
@property(nonatomic) __weak id <_TtP18ConnectUIV2Feature21SPTConnectUIV2Service_> connectUIV2Service; // @synthesize connectUIV2Service=_connectUIV2Service;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (void)registerFeatureSettings;
- (void)registerContextMenuActions;
- (void)queue:(struct UIViewController *)arg1 didTapNowPlayingTrack:(id)arg2;
- (_Bool)spotifyApplication:(id)arg1 handleRemoteControlEventOfSubtype:(long long)arg2;
- (void)registerDefaultModes;
- (id)provideSideBarFactory;
- (void)setupSideBarViewControllerRegistry;
- (void)registerDefaultModeViewControllers;
- (id)provideRemoteControlEventDefaultController;
- (id)provideLockScreenUBILogger;
- (id)provideQueueLogger;
- (id)provideVideoManager;
- (id)provideLocalSettings;
- (id)provideNowPlayingStateObservable;
- (id)provideNowPlayingContainerIdleMonitorObservable;
- (id)provideNowPlayingManager;
- (id)provideDeviceOrientationManager;
- (void)loadRemoteControlPolicyResolver;
- (id)provideNowPlayingBarViewController:(id)arg1;
- (id)createNowPlayingSideBarContentView;
- (id)provideNowPlayingSideBarViewController:(id)arg1;
- (id)createNowPlayingViewController:(id)arg1;
- (id)provideFeedbackCoordinator;
- (id)provideAuxiliaryActionsHandler;
- (id)providePlaybackActionsHandler;
- (id)createDurationUnitViewModel;
- (id)createInformationUnitViewModel;
- (id)createInformationUnitViewModelWithPositiveFeedback:(_Bool)arg1;
- (id)provideNavigationBarModel;
- (id)provideNowPlayingViewController:(id)arg1;
- (void)unload;
- (id)provideFeedbackSoundsSettingsSection:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

