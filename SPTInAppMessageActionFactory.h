//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString, SPTPopupManager;
@protocol SPTAccountProductActivationController, SPTCollectionPlatform, SPTCollectionPlatformTestManager, SPTFeatureFlagSignal, SPTFollowModelFactory, SPTLinkDispatcher, SPTModalPresentationController, SPTOnDemandSet, SPTPlayer, SPTPlaylistModel, SPTPodcastTestManager, SPTPushMessagingPermissionRequestor, SPTUIModeTransitionCoordinator, SPTWebViewFactory;

@interface SPTInAppMessageActionFactory : NSObject <SPTFeatureFlagSignalObserver>
{
    _Bool _freeTierEnabled;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTUIModeTransitionCoordinator> _transitionCoordinator;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    SPTPopupManager *_popupManager;
    id <SPTAccountProductActivationController> _productActivationController;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTFollowModelFactory> _followModelFactory;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTPlayer> _player;
    id <SPTOnDemandSet> _onDemandSet;
    id <SPTPushMessagingPermissionRequestor> _pushPermissionRequestor;
    id <SPTModalPresentationController> _modalPresentationController;
    id <SPTWebViewFactory> _webViewFactory;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(retain, nonatomic) id <SPTWebViewFactory> webViewFactory; // @synthesize webViewFactory=_webViewFactory;
@property(retain, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(retain, nonatomic) id <SPTPushMessagingPermissionRequestor> pushPermissionRequestor; // @synthesize pushPermissionRequestor=_pushPermissionRequestor;
@property(retain, nonatomic) id <SPTOnDemandSet> onDemandSet; // @synthesize onDemandSet=_onDemandSet;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(retain, nonatomic) id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(retain, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(retain, nonatomic) id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(retain, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) id <SPTAccountProductActivationController> productActivationController; // @synthesize productActivationController=_productActivationController;
@property(retain, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(retain, nonatomic) id <SPTUIModeTransitionCoordinator> transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)createActionForClickActionType:(long long)arg1;
- (void)dealloc;
- (id)initWithLinkDispatcher:(id)arg1 productActivationController:(id)arg2 transitionCoordinator:(id)arg3 freeTierEnabledSignal:(id)arg4 popupManager:(id)arg5 collectionPlatform:(id)arg6 followModelFactory:(id)arg7 podcastTestManager:(id)arg8 playlistModel:(id)arg9 collectionTestManager:(id)arg10 onDemandSet:(id)arg11 player:(id)arg12 pushPermissionRequestor:(id)arg13 modalPresentationController:(id)arg14 webviewFactory:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

