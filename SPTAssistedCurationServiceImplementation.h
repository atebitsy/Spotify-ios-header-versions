//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol CosmosFeature, SPTCollectionPlatformService, SPTCoreService, SPTCosmosDataLoaderService, SPTFreeTierRecommendationsService, SPTNetworkService, SPTPlayer, SPTPlayerFeature, SPTPlaylistPlatformService;

@interface SPTAssistedCurationServiceImplementation : NSObject <SPTAssistedCurationService>
{
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTCoreService> _coreService;
    id <CosmosFeature> _cosmosFeature;
    id <SPTCosmosDataLoaderService> _cosmosDataLoaderService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTNetworkService> _networkService;
    id <SPTFreeTierRecommendationsService> _recommendationsService;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTPlayer> _player;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTFreeTierRecommendationsService> recommendationsService; // @synthesize recommendationsService=_recommendationsService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTCosmosDataLoaderService> cosmosDataLoaderService; // @synthesize cosmosDataLoaderService=_cosmosDataLoaderService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
- (void).cxx_destruct;
- (id)mostPlayedCardProviderForURI:(id)arg1;
- (id)recentlyPlayedCardProvider;
- (id)topGenresCardProvider;
- (id)likedSongsCardProvider;
- (id)cardProvidersForURI:(id)arg1;
- (id)datasourceForURI:(id)arg1;
- (long long)assistedCurationContextTypeForURI:(id)arg1;
- (id)providerCardsSortMechanismForURI:(id)arg1;
- (id)provideAddTrackHandlerForURI:(id)arg1;
- (id)provideAssistedCurationModelForURI:(id)arg1;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

