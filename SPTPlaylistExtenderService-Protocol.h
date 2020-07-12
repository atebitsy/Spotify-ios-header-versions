//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString, NSURL, SPTDataLoader;
@protocol SPTFreeTierPlaylistIsTrackActive, SPTPlayer, SPTPlaylistExtenderCellProvider;

@protocol SPTPlaylistExtenderService <SPTService>
- (id <SPTPlaylistExtenderCellProvider>)provideCellProviderWithDataLoader:(SPTDataLoader *)arg1 player:(id <SPTPlayer>)arg2 playlistURI:(NSURL *)arg3 preferredNumberOfTracks:(unsigned long long)arg4 pageIdentifier:(NSString *)arg5 trackActivePredicate:(id <SPTFreeTierPlaylistIsTrackActive>)arg6;
@end

