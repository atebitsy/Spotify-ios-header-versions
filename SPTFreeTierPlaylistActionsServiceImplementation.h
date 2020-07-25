//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistActionsService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPContextMenuFeature, SPTCollectionLogger, SPTCollectionPlatformService, SPTCollectionSortingEntityManager, SPTContainerService, SPTContainerUIService, SPTFreeTierPlaylistService, SPTPlayerFeature, SPTPlaylistPlatformService, SPTUBIService;

@interface SPTFreeTierPlaylistActionsServiceImplementation : NSObject <SPTFreeTierPlaylistActionsService>
{
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTCollectionSortingEntityManager> _collectionSortingEntityManager;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTPlayerFeature> _playerService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTFreeTierPlaylistService> _freeTierPlaylistService;
    id <SPTUBIService> _ubiService;
    id <SPTCollectionLogger> _collectionLogger;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTFreeTierPlaylistService> freeTierPlaylistService; // @synthesize freeTierPlaylistService=_freeTierPlaylistService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(retain, nonatomic) id <SPTCollectionSortingEntityManager> collectionSortingEntityManager; // @synthesize collectionSortingEntityManager=_collectionSortingEntityManager;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
- (id)selectedActionIconColor;
- (id)provideCollectionLogger;
- (void)registerDownloadAction;
- (void)registerFollowAction;
- (void)registerRemoveTrackAction;
- (void)registerRenameAction;
- (void)collaborativeAction;
- (void)registerPrivacyAction;
- (void)registerQueueAction;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

