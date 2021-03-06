//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTSearchFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _shouldEnableTopics;
    _Bool _editorialOnDemandEnabled;
    _Bool _editorialOnDemandDebuggingEnabled;
    _Bool _topicCarouselProhibited;
    _Bool _v2AssistedCurationEnabled;
    _Bool _recentsRowEpisodeTwoLinesEnabled;
    _Bool _lyricsDebuggingEnabled;
    _Bool _updatedPodcastCopyEnabled;
}

@property(readonly, nonatomic) _Bool updatedPodcastCopyEnabled; // @synthesize updatedPodcastCopyEnabled=_updatedPodcastCopyEnabled;
@property(readonly, nonatomic) _Bool lyricsDebuggingEnabled; // @synthesize lyricsDebuggingEnabled=_lyricsDebuggingEnabled;
@property(readonly, nonatomic) _Bool recentsRowEpisodeTwoLinesEnabled; // @synthesize recentsRowEpisodeTwoLinesEnabled=_recentsRowEpisodeTwoLinesEnabled;
@property(readonly, nonatomic) _Bool v2AssistedCurationEnabled; // @synthesize v2AssistedCurationEnabled=_v2AssistedCurationEnabled;
@property(readonly, nonatomic) _Bool topicCarouselProhibited; // @synthesize topicCarouselProhibited=_topicCarouselProhibited;
@property(readonly, nonatomic) _Bool editorialOnDemandDebuggingEnabled; // @synthesize editorialOnDemandDebuggingEnabled=_editorialOnDemandDebuggingEnabled;
@property(readonly, nonatomic) _Bool editorialOnDemandEnabled; // @synthesize editorialOnDemandEnabled=_editorialOnDemandEnabled;
@property(readonly, nonatomic) _Bool shouldEnableTopics; // @synthesize shouldEnableTopics=_shouldEnableTopics;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

