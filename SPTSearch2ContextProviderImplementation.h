//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearch2ContextProvider-Protocol.h"

@class HUBViewModelBuilderFactory, NSString, NSURL, SPTDataLoaderFactory;
@protocol SPTAgeVerificationProvider, SPTExplicitContentAccessManager, SPTHubsRendererFactory, SPTNetworkConnectivityController, SPTSearch2ContentOperationsFactory, SPTSearch2DateProviding, SPTSearch2EmptyStatePropertiesProvider, SPTSearch2URLProviding, SPTSearch2UserTierProviding, SPTSearchOfflineAlbumDataLoader, SPTSearchOfflineEpisodeDataLoader, SPTSearchOfflinePlaylistDataLoader, SPTSearchOfflineTrackDataLoader, SPTSearchOnDemandPermissionMonitor, SPTSearchPlatformContext, SPTSearchPlatformTestManager, SPTSearchUBILocationSerializer;

@interface SPTSearch2ContextProviderImplementation : NSObject <SPTSearch2ContextProvider>
{
    _Bool _offlineSearchEnabled;
    id <SPTSearch2URLProviding> _urlProvider;
    id <SPTHubsRendererFactory> _hubsRendererFactory;
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTNetworkConnectivityController> _connectivityController;
    id <SPTSearch2ContentOperationsFactory> _postProcessContentOperationsFactory;
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
    id <SPTSearchOfflineTrackDataLoader> _offlineTrackDataLoader;
    id <SPTSearchOfflinePlaylistDataLoader> _offlinePlaylistDataLoader;
    id <SPTSearchOfflineAlbumDataLoader> _offlineAlbumDataLoader;
    id <SPTSearchOfflineEpisodeDataLoader> _episodeDataLoader;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTAgeVerificationProvider> _ageVerificationProvider;
    id <SPTSearchOnDemandPermissionMonitor> _onDemandPermissionMonitor;
    id <SPTSearchPlatformTestManager> _searchTestManager;
    id <SPTSearch2DateProviding> _dateProvider;
    id <SPTSearch2UserTierProviding> _userTierProvider;
    id <SPTSearchUBILocationSerializer> _ubiLocationSerializer;
    NSString *_featureID;
    NSURL *_pageURI;
    NSString *_referrerIdentifier;
    id <SPTSearchPlatformContext> _emptyStateContext;
    HUBViewModelBuilderFactory *_viewModelBuilderFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HUBViewModelBuilderFactory *viewModelBuilderFactory; // @synthesize viewModelBuilderFactory=_viewModelBuilderFactory;
@property(readonly, nonatomic) id <SPTSearchPlatformContext> emptyStateContext; // @synthesize emptyStateContext=_emptyStateContext;
@property(readonly, copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, copy, nonatomic) NSString *featureID; // @synthesize featureID=_featureID;
@property(readonly, nonatomic) id <SPTSearchUBILocationSerializer> ubiLocationSerializer; // @synthesize ubiLocationSerializer=_ubiLocationSerializer;
@property(readonly, nonatomic) id <SPTSearch2UserTierProviding> userTierProvider; // @synthesize userTierProvider=_userTierProvider;
@property(readonly, nonatomic) id <SPTSearch2DateProviding> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <SPTSearchPlatformTestManager> searchTestManager; // @synthesize searchTestManager=_searchTestManager;
@property(readonly, nonatomic) id <SPTSearchOnDemandPermissionMonitor> onDemandPermissionMonitor; // @synthesize onDemandPermissionMonitor=_onDemandPermissionMonitor;
@property(readonly, nonatomic) _Bool offlineSearchEnabled; // @synthesize offlineSearchEnabled=_offlineSearchEnabled;
@property(readonly, nonatomic) id <SPTAgeVerificationProvider> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTSearchOfflineEpisodeDataLoader> episodeDataLoader; // @synthesize episodeDataLoader=_episodeDataLoader;
@property(readonly, nonatomic) id <SPTSearchOfflineAlbumDataLoader> offlineAlbumDataLoader; // @synthesize offlineAlbumDataLoader=_offlineAlbumDataLoader;
@property(readonly, nonatomic) id <SPTSearchOfflinePlaylistDataLoader> offlinePlaylistDataLoader; // @synthesize offlinePlaylistDataLoader=_offlinePlaylistDataLoader;
@property(readonly, nonatomic) id <SPTSearchOfflineTrackDataLoader> offlineTrackDataLoader; // @synthesize offlineTrackDataLoader=_offlineTrackDataLoader;
@property(readonly, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
@property(readonly, nonatomic) id <SPTSearch2ContentOperationsFactory> postProcessContentOperationsFactory; // @synthesize postProcessContentOperationsFactory=_postProcessContentOperationsFactory;
@property(readonly, nonatomic) id <SPTNetworkConnectivityController> connectivityController; // @synthesize connectivityController=_connectivityController;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) id <SPTHubsRendererFactory> hubsRendererFactory; // @synthesize hubsRendererFactory=_hubsRendererFactory;
@property(readonly, nonatomic) id <SPTSearch2URLProviding> urlProvider; // @synthesize urlProvider=_urlProvider;
- (id)makeProtobufResponseParserWithQuery:(id)arg1 isDrillDown:(_Bool)arg2;
- (id)makeAssistedCurationParser;
- (id)makePostProcessContentOperations;
- (id)makeHUBS2MigrationContentOperation;
- (id)makeConnectivityMonitor;
- (id)makeOfflineFetcherForQuery:(id)arg1;
- (id)assistedCurationPatcher;
- (id)errorViewModelBuilder;
- (id)makeOnlineFetcherForQuery:(id)arg1;
- (id)makeOfflineResultsContextForQuery:(id)arg1;
- (id)makeOnlineResultsContextForQuery:(id)arg1;
- (id)makeResultsContextForQuery:(id)arg1;
- (id)provideContextForQuery:(id)arg1;
- (id)initWithURLProvider:(id)arg1 hubsRendererFactory:(id)arg2 dataLoaderFactory:(id)arg3 connectivityController:(id)arg4 postProcessContentOperationsFactory:(id)arg5 emptyStatePropertiesProvider:(id)arg6 offlineTrackDataLoader:(id)arg7 offlinePlaylistDataLoader:(id)arg8 offlineAlbumDataLoader:(id)arg9 episodeDataLoader:(id)arg10 explicitContentAccessManager:(id)arg11 ageVerificationProvider:(id)arg12 offlineSearchEnabled:(_Bool)arg13 onDemandPermissionMonitor:(id)arg14 searchTestManager:(id)arg15 dateProvider:(id)arg16 userTierProvider:(id)arg17 ubiLocationSerializer:(id)arg18 featureID:(id)arg19 pageURI:(id)arg20 referrerIdentifier:(id)arg21 emptyStateContext:(id)arg22 viewModelBuilderFactory:(id)arg23;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

