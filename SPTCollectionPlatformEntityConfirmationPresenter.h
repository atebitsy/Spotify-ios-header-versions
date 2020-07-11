//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTCollectionPlatformPropertiesManager, SPTEntityService, SPTPlaylistPlatformPlaylistDataLoader, SPTSnackbarConditionalPresenter;

@interface SPTCollectionPlatformEntityConfirmationPresenter : NSObject
{
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    id <SPTEntityService> _entityService;
    id <SPTCollectionPlatformPropertiesManager> _testManager;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
}

@property(readonly, nonatomic) __weak id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformPropertiesManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) __weak id <SPTEntityService> entityService; // @synthesize entityService=_entityService;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
- (void).cxx_destruct;
- (CDUnknownBlockType)enforceSingleCallOfBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (CDUnknownBlockType)safeSnackBarPresentationBlockWithIdentifier:(id)arg1;
- (void)scheduleCancellationOfToken:(id)arg1;
- (id)showMessageForAddedState:(_Bool)arg1 playlistURL:(id)arg2 snackbarPresenter:(CDUnknownBlockType)arg3;
- (id)showMessageForAddedState:(_Bool)arg1 artistURL:(id)arg2 snackbarPresenter:(CDUnknownBlockType)arg3;
- (id)refresh_confirmationTitleForAddedToCollection:(_Bool)arg1 entityName:(id)arg2;
- (void)refresh_showCollectionConfirmationProgressViewForAddedState:(_Bool)arg1 entityURL:(id)arg2 entityName:(id)arg3;
- (void)presentSnackbarWithIdentifier:(id)arg1 message:(id)arg2;
- (void)showCollectionConfirmationProgressViewForBannedState:(_Bool)arg1 entityURL:(id)arg2 inContextURL:(id)arg3;
- (void)showCollectionConfirmationProgressViewForAddedState:(_Bool)arg1 entityURL:(id)arg2 entityName:(id)arg3;
- (id)confirmationTitleForBannedFromCollection:(_Bool)arg1 entityURL:(id)arg2 inContextURL:(id)arg3;
- (id)confirmationTitleForAddedToCollection:(_Bool)arg1 entityURL:(id)arg2;
- (id)initWithSnackbarPresenter:(id)arg1 entityService:(id)arg2 testManager:(id)arg3 playlistDataLoader:(id)arg4;

@end

