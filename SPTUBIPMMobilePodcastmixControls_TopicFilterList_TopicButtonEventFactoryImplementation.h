//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIPMMobilePodcastmixControls_TopicFilterList_TopicButtonEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIPMMobilePodcastmixControls_TopicFilterList_TopicButtonEventFactoryImplementation : NSObject <SPTUBIPMMobilePodcastmixControls_TopicFilterList_TopicButtonEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithIdentifier:(id)arg1 position:(long long)arg2 components:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)hitClearFilter;
- (id)hitFilter;
- (id)impression;
- (id)_location;
- (id)initWithIdentifier:(id)arg1 position:(long long)arg2 components:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
