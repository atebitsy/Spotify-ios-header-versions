//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAddToSpotifyPlaylistExperimentService-Protocol.h"

@class NSString, SPTAddToSpotifyPlaylistExperimentFeatureProperties, SPTAllocationContext, SPTShadowPlaylistURIResolver;
@protocol SPContextMenuFeature, SPTAbbaService, SPTEncoreIntegrationService, SPTGLUEService, SPTPlayerFeature, SPTPlaylistPlatformService, SPTRemoteConfigurationService, SPTSessionService, SPTSettingsFeature, SPTShelfService;

@interface SPTAddToSpotifyPlaylistExperimentServiceImplementation : NSObject <SPTAddToSpotifyPlaylistExperimentService>
{
    id <SPTRemoteConfigurationService> _configService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTGLUEService> _glueService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTSessionService> _sessionService;
    SPTShadowPlaylistURIResolver *_uriResolver;
    SPTAddToSpotifyPlaylistExperimentFeatureProperties *_remoteConfig;
    id <SPTEncoreIntegrationService> _encoreIntegrationService;
    id <SPTShelfService> _shelfService;
    id <SPTPlayerFeature> _playerService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTAbbaService> _abbaService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPTEncoreIntegrationService> encoreIntegrationService; // @synthesize encoreIntegrationService=_encoreIntegrationService;
@property(retain, nonatomic) SPTAddToSpotifyPlaylistExperimentFeatureProperties *remoteConfig; // @synthesize remoteConfig=_remoteConfig;
@property(retain, nonatomic) SPTShadowPlaylistURIResolver *uriResolver; // @synthesize uriResolver=_uriResolver;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> configService; // @synthesize configService=_configService;
- (id)imageURIForContextURI:(id)arg1;
- (id)provideAssistedCurationSubtitleViewForURI:(id)arg1;
- (id)decorateItemsViewModel:(id)arg1 forPlaylistURI:(id)arg2;
- (id)providePlaylistRouteForURI:(id)arg1;
- (id)provideCellProviderWithOriginalPlaylistViewModel:(id)arg1 player:(id)arg2 playlistURI:(id)arg3 origin:(id)arg4 logger:(id)arg5 itemsViewModel:(id)arg6 viewModelFactory:(CDUnknownBlockType)arg7;
- (_Bool)removeRecentlyPlayedDuplicatesEnabled;
- (_Bool)addToSpotifyPlaylistEnabledForURI:(id)arg1;
- (_Bool)addToSpotifyPlaylistEnabled;
- (id)provideAddToSpotifyPlaylistDataLoader;
- (id)provideAddToSpotifyPlaylistModel;
- (_Bool)shouldRouteForURI:(id)arg1;
- (void)unload;
- (void)setSortingFilteringFactory:(CDUnknownBlockType)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

