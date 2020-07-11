//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, SPTCollectionPlatformFetchOptions, SPTask;
@protocol SPTCollectionPlatform, SPTContributingArtistsService, SPTModalPresentationController, SPTPodcastSpeedControlManager, SPTUIPresentationService;

@protocol SPContextMenuActionsFactory <NSObject>
- (SPTask *)actionForURI:(NSURL *)arg1 logContext:(NSString *)arg2 title:(NSString *)arg3 imageURL:(NSURL *)arg4 actionIdentifier:(NSString *)arg5;
- (SPTask *)actionForURIs:(NSArray *)arg1 logContext:(NSString *)arg2 sourceURL:(NSURL *)arg3 containerURL:(NSURL *)arg4 playlistName:(NSString *)arg5 actionIdentifier:(NSString *)arg6 contextSourceURL:(NSURL *)arg7;
- (SPTask *)actionForURI:(NSURL *)arg1 logContext:(NSString *)arg2 sourceURL:(NSURL *)arg3 tracks:(NSArray *)arg4 actionIdentifier:(NSString *)arg5;
- (SPTask *)shareActionForURI:(NSURL *)arg1 logContext:(NSString *)arg2 sourceURL:(NSURL *)arg3 itemName:(NSString *)arg4 creatorName:(NSString *)arg5 sourceName:(NSString *)arg6 imageURL:(NSURL *)arg7 clipboardLinkTitle:(NSString *)arg8 actionIdentifier:(NSString *)arg9;
- (SPTask *)actionForURI:(NSURL *)arg1 logContext:(NSString *)arg2 sourceURL:(NSURL *)arg3 itemName:(NSString *)arg4 creatorName:(NSString *)arg5 sourceName:(NSString *)arg6 imageURL:(NSURL *)arg7 clipboardLinkTitle:(NSString *)arg8 actionIdentifier:(NSString *)arg9;
- (SPTask *)actionForURI:(NSURL *)arg1 logContext:(NSString *)arg2 sourceURL:(NSURL *)arg3 contextURL:(NSURL *)arg4 actionIdentifier:(NSString *)arg5;
- (SPTask *)actionForURI:(NSURL *)arg1 logContext:(NSString *)arg2 sourceURL:(NSURL *)arg3 actionIdentifier:(NSString *)arg4;
- (void)registerActionForCarThingPredicate:(SPTask * (^)(NSURL *, NSString *, NSString *, NSURL *))arg1 actionIdentifier:(NSString *)arg2;
- (void)registerActionForURIContainerPredicate:(SPTask * (^)(NSArray *, NSString *, NSURL *, NSURL *, NSURL *, NSString *))arg1 actionIdentifier:(NSString *)arg2;
- (void)registerActionForTracksPredicate:(SPTask * (^)(NSURL *, NSString *, NSURL *, NSArray *))arg1 actionIdentifier:(NSString *)arg2;
- (void)registerActionForSharePredicate:(SPTask * (^)(NSURL *, NSString *, NSURL *, NSString *, NSString *, NSString *, NSURL *, NSString *))arg1 actionIdentifier:(NSString *)arg2;
- (void)registerActionForEntityInContextPredicate:(SPTask * (^)(NSURL *, NSString *, NSURL *, NSURL *))arg1 actionIdentifier:(NSString *)arg2;
- (void)registerActionForShortPredicate:(SPTask * (^)(NSURL *, NSString *, NSURL *))arg1 actionIdentifier:(NSString *)arg2;
- (SPTask *)offlineSync:(NSURL *)arg1 isOffline:(_Bool)arg2 collectionPlatform:(id <SPTCollectionPlatform>)arg3 collectionOptions:(SPTCollectionPlatformFetchOptions *)arg4 logContext:(NSString *)arg5;
- (SPTask *)viewAlbumWithAlbumURL:(NSURL *)arg1 logContext:(NSString *)arg2;
- (SPTask *)viewSpeedControlOptionsWithPodcastSpeedControlManager:(id <SPTPodcastSpeedControlManager>)arg1 modalPresentationController:(id <SPTModalPresentationController>)arg2 episodeURI:(NSURL *)arg3 logContext:(NSString *)arg4;
- (SPTask *)viewArtists:(NSArray *)arg1 logContext:(NSString *)arg2 presentationService:(id <SPTUIPresentationService>)arg3 contributingArtistsService:(id <SPTContributingArtistsService>)arg4;
- (SPTask *)viewArtistWithURL:(NSURL *)arg1 logContext:(NSString *)arg2;
@end

