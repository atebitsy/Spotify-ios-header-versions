//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, SPTObserverManager;
@protocol SPTLocalSettings, SPTPlaylistModel, SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTShadowPlaylistURIResolver : NSObject
{
    _Bool _shouldHidePlaylists;
    NSDictionary *_shadowList;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    CDUnknownBlockType _sortingFilteringFactory;
    id <SPTLocalSettings> _localSettings;
    NSArray *_uriPrefixesToExclude;
    SPTObserverManager *_observers;
    NSSet *_playlistURIsCurrentlyRefreshing;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *playlistURIsCurrentlyRefreshing; // @synthesize playlistURIsCurrentlyRefreshing=_playlistURIsCurrentlyRefreshing;
@property(readonly, nonatomic) _Bool shouldHidePlaylists; // @synthesize shouldHidePlaylists=_shouldHidePlaylists;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, copy, nonatomic) NSArray *uriPrefixesToExclude; // @synthesize uriPrefixesToExclude=_uriPrefixesToExclude;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(copy, nonatomic) CDUnknownBlockType sortingFilteringFactory; // @synthesize sortingFilteringFactory=_sortingFilteringFactory;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(copy, nonatomic) NSDictionary *shadowList; // @synthesize shadowList=_shadowList;
- (void)resetPlaylist:(id)arg1 withTracks:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mergeTracksFromBasePlaylist:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)regenerateReadPlaylistFor:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fetchImageForPlaylistURI:(id)arg1;
- (void)persistShadowList;
- (void)persistRoute:(id)arg1;
- (void)removeRouteForURI:(id)arg1;
- (void)changeImageURI:(id)arg1 forRouteURI:(id)arg2;
- (id)shadowForURI:(id)arg1;
- (_Bool)hasShadowFor:(id)arg1;
- (void)getShadowRouteFor:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)createShadowRouteFor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldRouteURI:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)uriPrefixesToRoute;
- (id)initWithLocalSettings:(id)arg1 uriPrefixesToExclude:(id)arg2 shouldHidePlaylists:(_Bool)arg3;

@end

