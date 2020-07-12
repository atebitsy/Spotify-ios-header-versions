//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GLUEButton, NSString, NSURL, UIBarButtonItem, UIColor;

@protocol SPTCollectionPlatformConfiguration <NSObject>
@property(readonly, nonatomic) NSString *collectionSongsSearchPlaceholder;
@property(readonly, nonatomic) NSURL *collectionSongsImageURL;
@property(readonly, nonatomic) long long collectionIcon;
@property(readonly, nonatomic) NSString *collectionRecentlyPlayedSongsTitle;
@property(readonly, nonatomic) NSString *collectionSongsTitle;
@property(readonly, nonatomic) NSString *collectionPlayingFromTitle;
@property(readonly, nonatomic) NSString *collectionTitle;
- (unsigned long long)banActionTypeForURL:(NSURL *)arg1 contextURL:(NSURL *)arg2;
- (NSString *)localfilesImportDialogForPlaylistCount:(unsigned long long)arg1 songsCount:(unsigned long long)arg2;
- (NSString *)entityNuxTitleForType:(unsigned long long)arg1 entityName:(NSString *)arg2;
- (NSString *)nuxTitleForType:(unsigned long long)arg1;
- (UIBarButtonItem *)provideCollectionActionButtonItemForEntityType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (GLUEButton *)provideCollectionActionButtonForEntityType:(unsigned long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)showCollectionConfirmationProgressViewForBannedState:(_Bool)arg1 entityURL:(NSURL *)arg2 inContextURL:(NSURL *)arg3;
- (void)showCollectionConfirmationProgressViewForAddedState:(_Bool)arg1 entityURL:(NSURL *)arg2 entityName:(NSString *)arg3;
- (void)showCollectionConfirmationProgressViewForAddedState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (NSString *)actionNameForArtistWithBanState:(_Bool)arg1;
- (long long)actionIconForArtistWithBanState:(_Bool)arg1;
- (NSString *)actionAccessibilityHintWithBanState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (NSString *)actionNameForItemWithCollectionLocalBanState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (NSString *)actionNameForItemWithCollectionBanState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (UIColor *)actionIconColorForItemWithCollectionBanState:(_Bool)arg1;
- (long long)actionIconForItemWithCollectionLocalBanState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (long long)actionIconForItemWithCollectionBanState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (NSString *)actionNameForItemWithFollowState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (long long)actionIconForItemWithFollowState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (NSString *)actionAccessibilityHintWithCollectionState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (NSString *)actionNameForTrackWithCollectionState:(_Bool)arg1;
- (NSString *)actionNameForItemWithCollectionState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (UIColor *)actionIconColorForItemWithCollectionState:(_Bool)arg1;
- (long long)actionIconForItemWithCollectionState:(_Bool)arg1 entityURL:(NSURL *)arg2;
- (long long)iconForItemInCollection:(_Bool)arg1 entityURL:(NSURL *)arg2;
@end

