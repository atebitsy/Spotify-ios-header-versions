//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SPTFreeTierPlaylistPlayLogger-Protocol.h"
#import "SPTFreeTierPlaylistTrackCloudLogger-Protocol.h"

@class NSString, NSURL;

@protocol SPTFreeTierPlaylistLogger <NSObject, SPTFreeTierPlaylistPlayLogger, SPTFreeTierPlaylistTrackCloudLogger>
@property(readonly, nonatomic) NSString *playlistViewPageIdentifier;
@property(readonly, copy, nonatomic) NSString *featureId;
- (void)logTextFilterCancelButtonInteraction;
- (void)logTextFilterClearButtonInteraction;
- (void)logTextFilterKeyStrokeInteraction;
- (void)logTextFilterRevealInteraction;
- (void)logSortingIdentifier:(NSString *)arg1 index:(unsigned long long)arg2;
- (void)logSortFilterPickerCanceled;
- (void)logEmptyViewAddSongsInteration;
- (void)logEmptyViewImpressionOnce;
- (NSString *)logDeeplinkingWithTrackURL:(NSURL *)arg1;
- (void)logScrollPerformanceWithDuration:(double)arg1 smallFrameDropCount:(double)arg2 largeFrameDropCount:(double)arg3;
- (void)logHeaderViewSlideToPage:(long long)arg1;
- (void)logHeaderCoverArtClickedToShowFullscreen;
- (NSString *)logHeaderPressedPlaylistOwner:(NSURL *)arg1;
- (void)logPressedCancelInEditView;
- (void)logPressedDoneInEditView;
- (void)logUpdateDescription;
- (void)logRenamePlaylist;
- (void)logDeletedTrackInEditView;
- (void)logMovedTrackInEditView;
- (void)logOfflineChanged:(_Bool)arg1;
- (void)logEpisodeOfflineAtIndex:(unsigned long long)arg1 trackURI:(NSURL *)arg2 offline:(_Bool)arg3;
- (NSString *)logEpisodePlayAtIndex:(unsigned long long)arg1 trackURI:(NSURL *)arg2 play:(_Bool)arg3;
- (void)logSwipeItemToAddToQueueAtIndex:(unsigned long long)arg1 itemURL:(NSURL *)arg2;
- (void)logSwipeItemToRemoveLikeAtIndex:(unsigned long long)arg1 itemURL:(NSURL *)arg2;
- (void)logSwipeItemToLikeAtIndex:(unsigned long long)arg1 itemURL:(NSURL *)arg2;
- (void)logTrackLikeActionSelectedAtIndex:(unsigned long long)arg1 trackURI:(NSURL *)arg2 liked:(_Bool)arg3;
- (void)logTrackBanActionSelectedAtIndex:(unsigned long long)arg1 trackURI:(NSURL *)arg2 banned:(_Bool)arg3;
- (void)logTrackContextMenuSelectedAtIndex:(unsigned long long)arg1 trackURI:(NSURL *)arg2;
- (void)logBrowseButtonClicked;
- (void)logAddSongsInteraction;
- (void)logHeaderContextMenuButton;
- (void)logNavBarHeartButtonClicked:(_Bool)arg1;
- (void)logHeaderFollowButtonClicked:(_Bool)arg1;
- (void)legacyLogHeartButtonSelected:(_Bool)arg1;
- (void)logViewDidFailToLoadWithPageIdentifier:(NSString *)arg1;
- (void)logViewLoadingCancelledWithPageIdentifier:(NSString *)arg1;
- (void)logViewDidLoadWithPageIdentifier:(NSString *)arg1;
- (void)logViewLoadingStartedWithPageIdentifier:(NSString *)arg1;
@end

