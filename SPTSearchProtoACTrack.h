//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SPTSearchProtoACRelatedEntity;

@interface SPTSearchProtoACTrack : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool explicit_p; // @dynamic explicit_p;
@property(nonatomic) _Bool hasTrackAlbum; // @dynamic hasTrackAlbum;
@property(nonatomic) _Bool mogef19; // @dynamic mogef19;
@property(copy, nonatomic) NSString *previewId; // @dynamic previewId;
@property(retain, nonatomic) SPTSearchProtoACRelatedEntity *trackAlbum; // @dynamic trackAlbum;
@property(retain, nonatomic) NSMutableArray *trackArtistsArray; // @dynamic trackArtistsArray;
@property(readonly, nonatomic) unsigned long long trackArtistsArray_Count; // @dynamic trackArtistsArray_Count;
@property(nonatomic) _Bool windowed; // @dynamic windowed;

@end

