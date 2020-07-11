//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCreatePlaylistService-Protocol.h"

@class NSString, SPTAllocationContext, SPTCreatePlaylistTestManagerImplementation;
@protocol SPContextMenuFeature, SPTContainerService, SPTContainerUIService, SPTFreeTierPresentationService, SPTGLUEService, SPTInAppMessageService, SPTPlaylistPlatformService, SPTRemoteConfigurationService, SPTUBIService, SPTURIDispatchService;

@interface SPTCreatePlaylistServiceImplementation : NSObject <SPTCreatePlaylistService>
{
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTFreeTierPresentationService> _freeTierPresentationService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTGLUEService> _glueService;
    id <SPTInAppMessageService> _inAppMessageService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTUBIService> _ubiService;
    SPTCreatePlaylistTestManagerImplementation *_testManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTCreatePlaylistTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTInAppMessageService> inAppMessageService; // @synthesize inAppMessageService=_inAppMessageService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTFreeTierPresentationService> freeTierPresentationService; // @synthesize freeTierPresentationService=_freeTierPresentationService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)registerContextMenuActions;
- (id)provideCommandHandlerFactory;
- (id)provideTestManager;
- (id)provideLoggerForURL:(id)arg1 playlistURI:(id)arg2;
- (id)provideCreatePlaylistTheme;
- (id)provideRenamePlaylistControllerForPlaylistURL:(id)arg1 currentName:(id)arg2;
- (id)provideCreatePlaylistControllerInFolder:(id)arg1;
- (id)provideCreatePlaylistController;
- (void)unregisterCreatePlaylist;
- (void)registerCreatePlaylist;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

