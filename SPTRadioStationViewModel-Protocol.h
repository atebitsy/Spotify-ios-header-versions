//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSIndexPath, NSString, NSURL, SPTRadioStation, SPTRadioTrack;
@protocol SPTStationViewModelDelegate;

@protocol SPTRadioStationViewModel <NSObject>
@property(readonly, copy, nonatomic) NSString *primaryActionText;
@property(readonly, copy, nonatomic) NSString *saveToPlaylistTitle;
@property(readonly, nonatomic, getter=hasExpandedStationMetadata) _Bool expandedStationMetadata;
@property(readonly, nonatomic) NSURL *imageURI;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic, getter=isAlbumStation) _Bool albumStation;
@property(readonly, nonatomic, getter=isArtistStation) _Bool artistStation;
@property(readonly, nonatomic) _Bool hasSuccessfullyLoadedData;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic) long long imageStyle;
@property(readonly, nonatomic) NSString *relatedArtistsText;
@property(readonly, nonatomic) NSArray *relatedArtists;
@property(readonly, nonatomic) NSArray *trackURIs;
@property(readonly, nonatomic, getter=areTracksShuffled) _Bool tracksShuffled;
@property(readonly, nonatomic) long long numberOfTracks;
@property(readonly, nonatomic) SPTRadioStation *station;
@property(readonly, nonatomic) NSURL *seedURL;
@property(readonly, nonatomic) NSURL *stationURL;
@property(nonatomic) __weak id <SPTStationViewModelDelegate> delegate;
- (_Bool)isOfflineError:(NSError *)arg1;
- (NSString *)displayableErrorMessageForError:(NSError *)arg1;
- (void)requestData;
- (void)loadMoreTracks:(void (^)(SPTRadioStation *, NSError *))arg1;
- (_Bool)startPlaybackDidUserTapTrackRow:(_Bool)arg1 referrerIdentifier:(NSString *)arg2;
- (void)togglePlaybackWithReferrerIdentifier:(NSString *)arg1;
- (_Bool)trackIsDisabledAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)trackIsCurrentlyPlayingAtIndexPath:(NSIndexPath *)arg1;
- (_Bool)playTrackAtIndex:(long long)arg1 referrerIdentifier:(NSString *)arg2;
- (SPTRadioTrack *)trackAtIndex:(long long)arg1;
- (_Bool)isLoading;

@optional
- (void)switchToStationAtIndex:(unsigned long long)arg1;
@end
