//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformTestManager-Protocol.h"
#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString, SPTCollectionPlatformFeatureProperties;
@protocol SPTAbbaFeatureFlags, SPTCollectionPlatformConfiguration, SPTEntityService, SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFeatureSettingsItemFactory, SPTLocalSettings, SPTNowPlayingTestManager, SPTProductState, SPTRemoteConfigurationResolver, SPTSnackbarConditionalPresenter, SPTSnackbarTestManager, SettingsRegistry;

@interface SPTCollectionPlatformTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTCollectionPlatformTestManager>
{
    _Bool _incompleteAlbumsUsedForCollectionState;
    _Bool _freeTierEnabled;
    _Bool _madeForPublicEnabled;
    _Bool _madeForEmployeeEnabled;
    _Bool _localBansEnabled;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTProductState> _productState;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTCollectionPlatformFeatureProperties *_remoteConfigurationProperties;
    id <SPTLocalSettings> _localSettings;
    id <SettingsRegistry> _settingsRegistry;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    id <SPTEntityService> _entityService;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    id <SPTFeatureFlagSignal> _madeForPublicSignal;
    id <SPTFeatureFlagSignal> _madeForEmployeeSignal;
    id <SPTNowPlayingTestManager> _nowPlayingTestManager;
    id <SPTSnackbarTestManager> _snackbarTestManager;
}

@property(retain, nonatomic) id <SPTSnackbarTestManager> snackbarTestManager; // @synthesize snackbarTestManager=_snackbarTestManager;
@property(retain, nonatomic) id <SPTNowPlayingTestManager> nowPlayingTestManager; // @synthesize nowPlayingTestManager=_nowPlayingTestManager;
@property(nonatomic, getter=isLocalBansEnabled) _Bool localBansEnabled; // @synthesize localBansEnabled=_localBansEnabled;
@property(nonatomic, getter=isMadeForEmployeeEnabled) _Bool madeForEmployeeEnabled; // @synthesize madeForEmployeeEnabled=_madeForEmployeeEnabled;
@property(nonatomic, getter=isMadeForPublicEnabled) _Bool madeForPublicEnabled; // @synthesize madeForPublicEnabled=_madeForPublicEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> madeForEmployeeSignal; // @synthesize madeForEmployeeSignal=_madeForEmployeeSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> madeForPublicSignal; // @synthesize madeForPublicSignal=_madeForPublicSignal;
@property(retain, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(nonatomic, getter=isFreeTierEnabled) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(nonatomic, getter=isIncompleteAlbumsUsedForCollectionState) _Bool incompleteAlbumsUsedForCollectionState; // @synthesize incompleteAlbumsUsedForCollectionState=_incompleteAlbumsUsedForCollectionState;
@property(readonly, nonatomic) __weak id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SettingsRegistry> settingsRegistry; // @synthesize settingsRegistry=_settingsRegistry;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTCollectionPlatformFeatureProperties *remoteConfigurationProperties; // @synthesize remoteConfigurationProperties=_remoteConfigurationProperties;
@property(readonly, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(readonly, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
- (void).cxx_destruct;
- (void)setupMadeForFlags;
@property(readonly, nonatomic, getter=isMadeForAttributionEnabled) _Bool madeForAttributionEnabled;
- (void)setUpLocalSettings;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, nonatomic, getter=isPodcastYourLibraryTestEnabled) _Bool podcastYourLibraryTestEnabled;
@property(readonly, nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled;
@property(readonly, nonatomic, getter=isSnackbarRefreshEnabled) _Bool snackbarRefreshEnabled;
@property(readonly, getter=isFollowedArtistsOnlyEnabled) _Bool followedArtistsOnlyEnabled;
- (void)updateLocalBans;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupRemoteConfigurationProperties;
@property(readonly, nonatomic, getter=isYourLibraryFeatureEnabled) _Bool yourLibraryFeatureEnabled;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 abbaFeatureFlags:(id)arg2 remoteConfigurationResolver:(id)arg3 localSettings:(id)arg4 settingsRegistry:(id)arg5 featureSettingsItemFactory:(id)arg6 featureFlagFactory:(id)arg7 freeTierEnabledSignal:(id)arg8 snackbarPresenter:(id)arg9 nowPlayingTestManager:(id)arg10 snackbarTestManager:(id)arg11 entityService:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
