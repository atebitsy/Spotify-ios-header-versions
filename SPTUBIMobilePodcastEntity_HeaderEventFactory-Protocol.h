//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventLocation, SPTUBIMobilePodcastEntity_Header_ActionsEventFactory, SPTUBIMobilePodcastEntity_Header_DescriptionEventFactory, SPTUBIMobilePodcastEntity_Header_TopicsEventFactory;

@protocol SPTUBIMobilePodcastEntity_HeaderEventFactory <NSObject>
- (id <SPTUBIMobilePodcastEntity_Header_TopicsEventFactory>)topicsFactory;
- (id <SPTUBIMobilePodcastEntity_Header_DescriptionEventFactory>)descriptionFactory;
- (id <SPTUBIMobilePodcastEntity_Header_ActionsEventFactory>)actionsFactory;
- (id <SPTUBIEventLocation>)_location;
@end

