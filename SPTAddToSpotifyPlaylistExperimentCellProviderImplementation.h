//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAddToSpotifyPlaylistExperimentCellProvider-Protocol.h"
#import "SPTEncoreTrackRowDelegate-Protocol.h"
#import "SPTFreeTierPlaylistModelObserver-Protocol.h"

@class NSString, NSURL, SPTPlayOrigin;
@protocol GLUETheme, SPTEncoreTrackRowFactory, SPTFreeTierPlaylistCellProviderDelegate, SPTFreeTierPlaylistDefaultHeaderViewModel, SPTFreeTierPlaylistModel, SPTFreeTierPlaylistModelEntity, SPTPlayer, SPTShelves;

@interface SPTAddToSpotifyPlaylistExperimentCellProviderImplementation : NSObject <SPTEncoreTrackRowDelegate, SPTFreeTierPlaylistModelObserver, SPTAddToSpotifyPlaylistExperimentCellProvider>
{
    id <SPTFreeTierPlaylistCellProviderDelegate> _delegate;
    id <SPTEncoreTrackRowFactory> _trackRowFactory;
    id <SPTFreeTierPlaylistModel> _playlistModel;
    id <SPTFreeTierPlaylistDefaultHeaderViewModel> _originalPlaylistViewModel;
    id <SPTShelves> _shelves;
    id <GLUETheme> _theme;
    id <SPTPlayer> _player;
    id <SPTFreeTierPlaylistModelEntity> _modelEntity;
    NSURL *_playlistURI;
    SPTPlayOrigin *_origin;
}

@property(retain, nonatomic) SPTPlayOrigin *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) NSURL *playlistURI; // @synthesize playlistURI=_playlistURI;
@property(retain, nonatomic) id <SPTFreeTierPlaylistModelEntity> modelEntity; // @synthesize modelEntity=_modelEntity;
@property(nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTShelves> shelves; // @synthesize shelves=_shelves;
@property(nonatomic) __weak id <SPTFreeTierPlaylistDefaultHeaderViewModel> originalPlaylistViewModel; // @synthesize originalPlaylistViewModel=_originalPlaylistViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(readonly, nonatomic) id <SPTEncoreTrackRowFactory> trackRowFactory; // @synthesize trackRowFactory=_trackRowFactory;
@property(nonatomic) __weak id <SPTFreeTierPlaylistCellProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)freeTierPlaylistModel:(id)arg1 playlistModelEntityDidChange:(id)arg2;
- (void)freeTierPlaylistModel:(id)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistModel:(id)arg1 error:(id)arg2;
- (id)footerView;
- (double)footerHeight;
- (double)headerHeight;
- (id)headerView;
- (void)willDisplaySection;
- (id)sectionFooter;
- (id)sectionHeader;
- (unsigned long long)section;
- (unsigned long long)numberOfRows;
- (void)unlikeWithSender:(id)arg1;
- (void)unhideWithSender:(id)arg1;
- (void)unbanWithSender:(id)arg1;
- (void)tappedWithSender:(id)arg1;
- (void)contextMenuTappedWithSender:(id)arg1;
- (id)indexPathForView:(id)arg1;
- (id)reuseIdentifiers;
- (id)identifierForCellForRowAtIndexPath:(id)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (void)didEndDisplayingPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)willDisplayPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (_Bool)didSelectPlaylistCell:(id)arg1 atIndexPath:(id)arg2;
- (void)enableSwipeGesturesOnCell:(id)arg1 withTrack:(id)arg2 indexPath:(id)arg3;
- (long long)encoreRestrictionForTrackViewModel:(id)arg1;
- (id)encoreModelForTrack:(id)arg1 isPressed:(_Bool)arg2;
- (void)configurePlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (_Bool)handlesCellAtIndexPath:(id)arg1;
- (id)initWithTrackRowFactory:(id)arg1 playlistModel:(id)arg2 originalPlaylistViewModel:(id)arg3 player:(id)arg4 playlistURI:(id)arg5 origin:(id)arg6 shelves:(id)arg7 theme:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
