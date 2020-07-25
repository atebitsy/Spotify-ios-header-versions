//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UBIEventLocation-Protocol.h"

@class NSArray, NSString;

@interface UBIEventFactoryEventLocation : NSObject <UBIEventLocation>
{
    _Bool _impressionEnabled;
    NSString *_applicationId;
    NSArray *_eventPathComponents;
    NSString *_specificationCommitHash;
    NSString *_generatorCommitHash;
    NSString *_specificationVersion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool impressionEnabled; // @synthesize impressionEnabled=_impressionEnabled;
@property(readonly, copy, nonatomic) NSString *specificationVersion; // @synthesize specificationVersion=_specificationVersion;
@property(readonly, copy, nonatomic) NSString *generatorCommitHash; // @synthesize generatorCommitHash=_generatorCommitHash;
@property(readonly, copy, nonatomic) NSString *specificationCommitHash; // @synthesize specificationCommitHash=_specificationCommitHash;
@property(readonly, copy, nonatomic) NSArray *eventPathComponents; // @synthesize eventPathComponents=_eventPathComponents;
@property(readonly, copy, nonatomic) NSString *applicationId; // @synthesize applicationId=_applicationId;
- (id)initWithLocation:(id)arg1 overridingPageURI:(id)arg2 overridingPageId:(id)arg3;
- (id)initWithApplicationId:(id)arg1 components:(id)arg2 specificationCommitHash:(id)arg3 generatorCommitHash:(id)arg4 specificationVersion:(id)arg5 impressionEnabled:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

