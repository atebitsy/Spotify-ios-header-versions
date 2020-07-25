//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLyricsUIFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTLyricsFeatureImplementation, SPTLyricsV2Configuration, SPTLyricsV2GLUETheme, SPTVocalRemovalConfiguration;
@protocol CosmosFeature, GaiaFeature, SPContextMenuFeature, SPTBannerFeature, SPTContainerService, SPTCoreService, SPTEventSenderService, SPTGLUEService, SPTInAppMessageService, SPTNetworkService, SPTNowPlayingPlatformService, SPTNowPlayingService, SPTPlayer, SPTPlayerFeature, SPTUBIService, SPTUIPresentationApplicationService, SPTUIPresentationService, SPTURIDispatchService;

@interface SPTLyricsUIFeatureImplementation : NSObject <SPTLyricsUIFeature>
{
    id <SPTContainerService> _containerService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTCoreService> _coreService;
    id <SPTEventSenderService> _eventSenderService;
    id <SPTGLUEService> _glueService;
    id <SPTNetworkService> _networkService;
    id <SPTNowPlayingService> _nowPlayingService;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTPlayerFeature> _playerService;
    id <SPTUBIService> _ubiService;
    id <SPTUIPresentationApplicationService> _uiPresentationApplicationService;
    id <SPTUIPresentationService> _uiPresentationSessionService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTPlayer> _player;
    id <SPTBannerFeature> _bannerService;
    id <CosmosFeature> _cosmosFeature;
    id <GaiaFeature> _gaiaFeature;
    id <SPTInAppMessageService> _inAppMessageService;
    SPTLyricsV2GLUETheme *_theme;
    SPTLyricsV2Configuration *_lyricsConfiguration;
    SPTVocalRemovalConfiguration *_vocalRemovalConfiguration;
    SPTLyricsFeatureImplementation *_lyricsService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak SPTLyricsFeatureImplementation *lyricsService; // @synthesize lyricsService=_lyricsService;
@property(retain, nonatomic) SPTVocalRemovalConfiguration *vocalRemovalConfiguration; // @synthesize vocalRemovalConfiguration=_vocalRemovalConfiguration;
@property(retain, nonatomic) SPTLyricsV2Configuration *lyricsConfiguration; // @synthesize lyricsConfiguration=_lyricsConfiguration;
@property(retain, nonatomic) SPTLyricsV2GLUETheme *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTInAppMessageService> inAppMessageService; // @synthesize inAppMessageService=_inAppMessageService;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTBannerFeature> bannerService; // @synthesize bannerService=_bannerService;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTUIPresentationService> uiPresentationSessionService; // @synthesize uiPresentationSessionService=_uiPresentationSessionService;
@property(nonatomic) __weak id <SPTUIPresentationApplicationService> uiPresentationApplicationService; // @synthesize uiPresentationApplicationService=_uiPresentationApplicationService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(nonatomic) __weak id <SPTNowPlayingService> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (id)provideResolver;
- (void)registerNowPlayingScrollProvider;
- (void)setupConfigurations;
- (id)providePlayer;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

