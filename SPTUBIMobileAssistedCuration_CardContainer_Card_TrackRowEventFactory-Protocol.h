//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIInteractionEvent, SPTUBIMobileAssistedCuration_CardContainer_Card_TrackRow_AddButtonEventFactory, SPTUBIMobileAssistedCuration_CardContainer_Card_TrackRow_AlbumCoverEventFactory, SPTUBIMobileAssistedCuration_CardContainer_Card_TrackRow_HeartButtonEventFactory;

@protocol SPTUBIMobileAssistedCuration_CardContainer_Card_TrackRowEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitPauseWithItemToBePaused:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hitPlayWithItemToBePlayed:(NSURL *)arg1;
- (id <SPTUBIMobileAssistedCuration_CardContainer_Card_TrackRow_HeartButtonEventFactory>)heartButtonFactory;
- (id <SPTUBIMobileAssistedCuration_CardContainer_Card_TrackRow_AddButtonEventFactory>)addButtonFactory;
- (id <SPTUBIMobileAssistedCuration_CardContainer_Card_TrackRow_AlbumCoverEventFactory>)albumCoverFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

