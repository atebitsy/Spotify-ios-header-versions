//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobilePodcastSpeedControlEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobilePodcastSpeedControlEventFactoryImplementation : NSObject <SPTUBIMobilePodcastSpeedControlEventFactory>
{
    NSArray *_components;
}

+ (id)factory;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)playbackSpeedXFactory;
- (id)_location;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

