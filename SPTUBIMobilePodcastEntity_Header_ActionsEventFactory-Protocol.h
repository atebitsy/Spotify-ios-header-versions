//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventLocation, SPTUBIMobilePodcastEntity_Header_Actions_ContextMenuButtonEventFactory, SPTUBIMobilePodcastEntity_Header_Actions_FollowButtonEventFactory, SPTUBIMobilePodcastEntity_Header_Actions_PlayButtonEventFactory;

@protocol SPTUBIMobilePodcastEntity_Header_ActionsEventFactory <NSObject>
- (id <SPTUBIMobilePodcastEntity_Header_Actions_PlayButtonEventFactory>)playButtonFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobilePodcastEntity_Header_Actions_ContextMenuButtonEventFactory>)contextMenuButtonFactory;
- (id <SPTUBIMobilePodcastEntity_Header_Actions_FollowButtonEventFactory>)followButtonFactory;
- (id <SPTUBIEventLocation>)_location;
@end

