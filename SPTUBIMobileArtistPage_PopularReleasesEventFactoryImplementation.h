//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileArtistPage_PopularReleasesEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileArtistPage_PopularReleasesEventFactoryImplementation : NSObject <SPTUBIMobileArtistPage_PopularReleasesEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithIdentifier:(id)arg1 components:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)impression;
- (id)seeDiscografyFactory;
- (id)rowsFactory;
- (id)_location;
- (id)initWithIdentifier:(id)arg1 components:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
