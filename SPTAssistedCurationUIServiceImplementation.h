//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTUIPageService.h"

#import "SPTAssistedCurationLinkDispatcherPageProvider-Protocol.h"
#import "SPTAssistedCurationUIService-Protocol.h"

@class NSString, SPTAllocationContext, SPTAssistedCurationLinkDispatcherImplementation, SPTAssistedCurationPresentationHelper;
@protocol SPContextMenuFeature, SPTAssistedCurationService, SPTAssistedCurationUITestManager, SPTAssistedCurationUserInterfaceFactory, SPTAudioPreviewService, SPTExplicitContentService, SPTFreeTierPresentationService, SPTFreeTierService, SPTGLUEService, SPTPerformanceMetricsService, SPTSearchPlatformService, SPTSettingsFeature, SPTSnackbarService, SPTUBIService, _TtP22AgeVerificationFeature25SPTAgeVerificationService_;

@interface SPTAssistedCurationUIServiceImplementation : SPTUIPageService <SPTAssistedCurationLinkDispatcherPageProvider, SPTAssistedCurationUIService>
{
    id <SPTGLUEService> _glueService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <_TtP22AgeVerificationFeature25SPTAgeVerificationService_> _ageVerificationService;
    id <SPTAssistedCurationService> _assistedCurationService;
    id <SPTSearchPlatformService> _searchPlatformService;
    id <SPTAudioPreviewService> _audioPreviewService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTSnackbarService> _snackbarService;
    id <SPTFreeTierPresentationService> _freeTierPresentationService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTAssistedCurationUserInterfaceFactory> _userInterfaceFactory;
    SPTAssistedCurationLinkDispatcherImplementation *_linkDispatcher;
    SPTAssistedCurationPresentationHelper *_assistedCurationPresentationHelper;
    id <SPTFreeTierService> _freeTierService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTAssistedCurationUITestManager> _assistedCurationUITestManager;
    id <SPTUBIService> _ubiService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(retain, nonatomic) id <SPTAssistedCurationUITestManager> assistedCurationUITestManager; // @synthesize assistedCurationUITestManager=_assistedCurationUITestManager;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(retain, nonatomic) SPTAssistedCurationPresentationHelper *assistedCurationPresentationHelper; // @synthesize assistedCurationPresentationHelper=_assistedCurationPresentationHelper;
@property(retain, nonatomic) SPTAssistedCurationLinkDispatcherImplementation *linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTAssistedCurationUserInterfaceFactory> userInterfaceFactory; // @synthesize userInterfaceFactory=_userInterfaceFactory;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTFreeTierPresentationService> freeTierPresentationService; // @synthesize freeTierPresentationService=_freeTierPresentationService;
@property(nonatomic) __weak id <SPTSnackbarService> snackbarService; // @synthesize snackbarService=_snackbarService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTAudioPreviewService> audioPreviewService; // @synthesize audioPreviewService=_audioPreviewService;
@property(nonatomic) __weak id <SPTSearchPlatformService> searchPlatformService; // @synthesize searchPlatformService=_searchPlatformService;
@property(nonatomic) __weak id <SPTAssistedCurationService> assistedCurationService; // @synthesize assistedCurationService=_assistedCurationService;
@property(nonatomic) __weak id <_TtP22AgeVerificationFeature25SPTAgeVerificationService_> ageVerificationService; // @synthesize ageVerificationService=_ageVerificationService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (void).cxx_destruct;
- (id)cardProvidersToWaitWithMostPlayedCard:(_Bool)arg1;
- (id)provideAddSongsActionTaskForURL:(id)arg1 logContext:(id)arg2;
- (id)provideLoggerForURI:(id)arg1 playlistURI:(id)arg2;
- (id)provideInterfaceFactoryWithViewModel:(id)arg1;
- (id)provideGLUEImageLoader;
- (id)provideEducationSnackBarPresenter;
- (id)provideFeatureSettingsItemFactory;
- (id)provideSearchDrillDownViewControllerForURL:(id)arg1 context:(id)arg2;
- (id)provideAssistedCurationViewControllerForURI:(id)arg1 mostPlayedCard:(_Bool)arg2;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (id)providerCardsSortMechanism;
- (id)provideAssistedCurationPresentationHelper;
- (id)providerAssistedCurationLinkDispatcher;
- (_Bool)claimsURI:(id)arg1;
- (void)curateForURL:(id)arg1 withMostPlayedCard:(_Bool)arg2;
- (void)curateLikedSongs;
- (void)curatePlaylistURL:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

