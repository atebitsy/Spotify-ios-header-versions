//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTPodcastMixFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _podcastMixHandlerEnabled;
    _Bool _customHeaderEnabled;
    long long _pmixEntityTooltipMaxShowCount;
    long long _pmixIconCustomize;
    unsigned long long _pmixContextMenuEpisodeAction;
    NSString *_pmixContextMenuEpisodeActionString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *pmixContextMenuEpisodeActionString; // @synthesize pmixContextMenuEpisodeActionString=_pmixContextMenuEpisodeActionString;
@property(readonly, nonatomic) unsigned long long pmixContextMenuEpisodeAction; // @synthesize pmixContextMenuEpisodeAction=_pmixContextMenuEpisodeAction;
@property(readonly, nonatomic) long long pmixIconCustomize; // @synthesize pmixIconCustomize=_pmixIconCustomize;
@property(readonly, nonatomic) long long pmixEntityTooltipMaxShowCount; // @synthesize pmixEntityTooltipMaxShowCount=_pmixEntityTooltipMaxShowCount;
@property(readonly, nonatomic) _Bool customHeaderEnabled; // @synthesize customHeaderEnabled=_customHeaderEnabled;
@property(readonly, nonatomic) _Bool podcastMixHandlerEnabled; // @synthesize podcastMixHandlerEnabled=_podcastMixHandlerEnabled;
- (unsigned long long)mapPmixContextMenuEpisodeActionToEnumValue:(id)arg1;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

