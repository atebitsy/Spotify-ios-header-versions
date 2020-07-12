//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAddToSpotifyPlaylistExperimentService-Protocol.h"

@class NSString, SPTAddToSpotifyPlaylistExperimentFeatureProperties, SPTAllocationContext, SPTShadowPlaylistURIResolver;
@protocol SPTContainerService, SPTEncoreIntegrationService, SPTPlaylistPlatformService, SPTRemoteConfigurationService, SPTSessionService, SPTShelfService;

@interface SPTAddToSpotifyPlaylistExperimentServiceImplementation : NSObject <SPTAddToSpotifyPlaylistExperimentService>
{
    id <SPTContainerService> _containerService;
    id <SPTRemoteConfigurationService> _configService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTSessionService> _sessionService;
    SPTShadowPlaylistURIResolver *_uriResolver;
    SPTAddToSpotifyPlaylistExperimentFeatureProperties *_remoteConfig;
    id <SPTEncoreIntegrationService> _encoreIntegrationService;
    id <SPTShelfService> _shelfService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPTEncoreIntegrationService> encoreIntegrationService; // @synthesize encoreIntegrationService=_encoreIntegrationService;
@property(retain, nonatomic) SPTAddToSpotifyPlaylistExperimentFeatureProperties *remoteConfig; // @synthesize remoteConfig=_remoteConfig;
@property(retain, nonatomic) SPTShadowPlaylistURIResolver *uriResolver; // @synthesize uriResolver=_uriResolver;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> configService; // @synthesize configService=_configService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)providePlaylistRouteForURI:(id)arg1;
- (id)provideCellProviderWithmodel:(id)arg1 originalPlaylistViewModel:(id)arg2 player:(id)arg3 playlistURI:(id)arg4 origin:(id)arg5;
- (_Bool)addToSpotifyPlaylistEnabledForURI:(id)arg1;
- (_Bool)addToSpotifyPlaylistEnabled;
- (id)provideAddToSpotifyPlaylistDataLoader;
- (id)provideAddToSpotifyPlaylistModel;
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

