//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventLocation, SPTUBIMobileAlbumPage_TrackList_TrackPreviewEventFactory, SPTUBIMobileAlbumPage_TrackList_TrackRowEventFactory;

@protocol SPTUBIMobileAlbumPage_TrackListEventFactory <NSObject>
- (id <SPTUBIMobileAlbumPage_TrackList_TrackPreviewEventFactory>)trackPreviewFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIMobileAlbumPage_TrackList_TrackRowEventFactory>)trackRowFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIEventLocation>)_location;
@end

