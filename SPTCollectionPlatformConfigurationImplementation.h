//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformConfiguration-Protocol.h"

@class NSString, NSURL, SPTCollectionPlatformEntityConfirmationPresenter, UIImage;
@protocol SPTCollectionPlatformPropertiesManager;

@interface SPTCollectionPlatformConfigurationImplementation : NSObject <SPTCollectionPlatformConfiguration>
{
    NSURL *_collectionSongsImageURL;
    id <SPTCollectionPlatformPropertiesManager> _testManager;
    SPTCollectionPlatformEntityConfirmationPresenter *_confirmationPresenter;
    UIImage *_selectedOverlayImage;
    UIImage *_overlayImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(retain, nonatomic) UIImage *selectedOverlayImage; // @synthesize selectedOverlayImage=_selectedOverlayImage;
@property(readonly, nonatomic) SPTCollectionPlatformEntityConfirmationPresenter *confirmationPresenter; // @synthesize confirmationPresenter=_confirmationPresenter;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformPropertiesManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) NSURL *collectionSongsImageURL; // @synthesize collectionSongsImageURL=_collectionSongsImageURL;
- (id)trackURI;
- (_Bool)isFollowURL:(id)arg1;
- (_Bool)shouldUseHeart:(id)arg1;
- (id)actionAccessibilityHintWithBanState:(_Bool)arg1 entityURL:(id)arg2;
- (id)actionAccessibilityHintWithCollectionState:(_Bool)arg1 entityURL:(id)arg2;
- (unsigned long long)banActionTypeForURL:(id)arg1 contextURL:(id)arg2;
- (id)localfilesImportDialogForPlaylistCount:(unsigned long long)arg1 songsCount:(unsigned long long)arg2;
- (id)entityNuxTitleForType:(unsigned long long)arg1 entityName:(id)arg2;
- (id)nuxTitleForType:(unsigned long long)arg1;
- (id)provideFreeTierCollectionActionButtonItemForEntityType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)provideFreeTierCollectionActionButtonForEntityType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)provideCollectionActionButtonItemForEntityType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)provideCollectionActionButtonForEntityType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)showCollectionConfirmationProgressViewForBannedState:(_Bool)arg1 entityURL:(id)arg2 inContextURL:(id)arg3;
- (void)showCollectionConfirmationProgressViewForAddedState:(_Bool)arg1 entityURL:(id)arg2 entityName:(id)arg3;
- (void)showCollectionConfirmationProgressViewForAddedState:(_Bool)arg1 entityURL:(id)arg2;
- (id)actionNameForArtistWithBanState:(_Bool)arg1;
- (long long)actionIconForArtistWithBanState:(_Bool)arg1;
- (id)actionNameForItemWithCollectionLocalBanState:(_Bool)arg1 entityURL:(id)arg2;
- (id)actionNameForItemWithCollectionBanState:(_Bool)arg1 entityURL:(id)arg2;
- (id)actionIconColorForItemWithCollectionBanState:(_Bool)arg1;
- (long long)actionIconForItemWithCollectionLocalBanState:(_Bool)arg1 entityURL:(id)arg2;
- (long long)actionIconForItemWithCollectionBanState:(_Bool)arg1 entityURL:(id)arg2;
- (id)actionNameForItemWithFollowState:(_Bool)arg1 entityURL:(id)arg2;
- (long long)actionIconForItemWithFollowState:(_Bool)arg1 entityURL:(id)arg2;
- (id)actionNameForTrackWithCollectionState:(_Bool)arg1;
- (id)actionNameForItemWithCollectionState:(_Bool)arg1 entityURL:(id)arg2;
- (id)actionIconColorForItemWithCollectionState:(_Bool)arg1;
- (long long)actionIconForItemWithCollectionState:(_Bool)arg1 entityURL:(id)arg2;
- (long long)iconForItemInCollection:(_Bool)arg1 entityURL:(id)arg2;
@property(readonly, nonatomic) NSString *collectionSongsSearchPlaceholder;
@property(readonly, nonatomic) long long collectionIcon;
@property(readonly, nonatomic) NSString *collectionRecentlyPlayedSongsTitle;
@property(readonly, nonatomic) NSString *collectionSongsTitle;
@property(readonly, nonatomic) NSString *collectionPlayingFromTitle;
@property(readonly, nonatomic) NSString *collectionTitle;
- (id)initWithConfimationPresenter:(id)arg1 testManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

