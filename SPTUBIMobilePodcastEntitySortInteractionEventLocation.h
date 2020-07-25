//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIInteractionEventLocation-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobilePodcastEntitySortInteractionEventLocation : NSObject <SPTUBIInteractionEventLocation>
{
    _Bool _impressionEnabled;
    NSString *_applicationId;
    NSString *_specificationId;
    NSString *_specificationVersion;
    NSString *_specificationCommitHash;
    NSString *_generatorCommitHash;
    NSArray *_eventPathComponents;
    NSString *_interactionType;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
@property(nonatomic) _Bool impressionEnabled; // @synthesize impressionEnabled=_impressionEnabled;
@property(copy, nonatomic) NSArray *eventPathComponents; // @synthesize eventPathComponents=_eventPathComponents;
@property(copy, nonatomic) NSString *generatorCommitHash; // @synthesize generatorCommitHash=_generatorCommitHash;
@property(copy, nonatomic) NSString *specificationCommitHash; // @synthesize specificationCommitHash=_specificationCommitHash;
@property(copy, nonatomic) NSString *specificationVersion; // @synthesize specificationVersion=_specificationVersion;
@property(copy, nonatomic) NSString *specificationId; // @synthesize specificationId=_specificationId;
@property(copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (id)initWithComponents:(id)arg1 interactionType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

