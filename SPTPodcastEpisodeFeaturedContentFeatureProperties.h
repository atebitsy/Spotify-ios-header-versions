//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTPodcastEpisodeFeaturedContentFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _podcastCrossLinkingEnable;
    NSString *_podcastTrackListMode;
}

@property(readonly, nonatomic) NSString *podcastTrackListMode; // @synthesize podcastTrackListMode=_podcastTrackListMode;
@property(readonly, nonatomic) _Bool podcastCrossLinkingEnable; // @synthesize podcastCrossLinkingEnable=_podcastCrossLinkingEnable;
- (void).cxx_destruct;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
