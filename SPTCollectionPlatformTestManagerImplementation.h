//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformPropertiesManager-Protocol.h"
#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString, SPTCollectionPlatformFeatureProperties;
@protocol SPTAbbaFeatureFlags, SPTCollectionPlatformConfiguration, SPTEntityService, SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTNowPlayingTestManager, SPTPlaylistPlatformPlaylistDataLoader, SPTProductState, SPTRemoteConfigurationResolver, SPTSnackbarConditionalPresenter;

@interface SPTCollectionPlatformTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTCollectionPlatformPropertiesManager>
{
    _Bool _freeTierEnabled;
    _Bool _madeForPublicEnabled;
    _Bool _madeForEmployeeEnabled;
    _Bool _localBansEnabled;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTProductState> _productState;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTCollectionPlatformFeatureProperties *_remoteConfigurationProperties;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    id <SPTEntityService> _entityService;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    id <SPTNowPlayingTestManager> _nowPlayingTestManager;
}

@property(retain, nonatomic) id <SPTNowPlayingTestManager> nowPlayingTestManager; // @synthesize nowPlayingTestManager=_nowPlayingTestManager;
@property(nonatomic, getter=isLocalBansEnabled) _Bool localBansEnabled; // @synthesize localBansEnabled=_localBansEnabled;
@property(nonatomic, getter=isMadeForEmployeeEnabled) _Bool madeForEmployeeEnabled; // @synthesize madeForEmployeeEnabled=_madeForEmployeeEnabled;
@property(nonatomic, getter=isMadeForPublicEnabled) _Bool madeForPublicEnabled; // @synthesize madeForPublicEnabled=_madeForPublicEnabled;
@property(retain, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) __weak id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(retain, nonatomic) SPTCollectionPlatformFeatureProperties *remoteConfigurationProperties; // @synthesize remoteConfigurationProperties=_remoteConfigurationProperties;
@property(readonly, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(readonly, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic, getter=isFreeTierEnabled) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled;
@property(readonly, nonatomic, getter=isShowLikeActionInNPVEnabled) _Bool showLikeActionInNPVEnabled;
@property(readonly, nonatomic, getter=isSnackbarForPremiumEnabled) _Bool snackbarForPremiumEnabled;
@property(readonly, nonatomic, getter=isSnackbarWithACMCopyForArtistsEnabled) _Bool sackbarWithAcmCopyForArtistsEnabled;
@property(readonly, nonatomic, getter=isSnackbarWithACMCopyEnabled) _Bool snackbarWithACMCopyEnabled;
@property(readonly, getter=isFollowedArtistsOnlyEnabled) _Bool followedArtistsOnlyEnabled;
- (void)updateLocalBans;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupRemoteConfigurationProperties;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 abbaFeatureFlags:(id)arg2 remoteConfigurationResolver:(id)arg3 featureFlagFactory:(id)arg4 freeTierEnabledSignal:(id)arg5 snackbarPresenter:(id)arg6 nowPlayingTestManager:(id)arg7 entityService:(id)arg8 playlistDataLoader:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

