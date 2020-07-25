//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTUBIEventLocationImplementation.h"

#import "SPTUBIInteractionEventLocation-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIInteractionEventLocationImplementation : SPTUBIEventLocationImplementation <SPTUBIInteractionEventLocation>
{
    NSString *_interactionType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
- (id)initWithLocation:(id)arg1 interactionType:(id)arg2;
- (id)initWithInteractionLocation:(id)arg1;
- (id)initWithApplicationId:(id)arg1 specificationId:(id)arg2 pageReason:(id)arg3 specificationCommitHash:(id)arg4 generatorCommitHash:(id)arg5 interactionType:(id)arg6 specificationVersion:(id)arg7 eventPathComponents:(id)arg8 impressionEnabled:(_Bool)arg9;

// Remaining properties
@property(readonly, copy, nonatomic) NSString *applicationId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSArray *eventPathComponents;
@property(readonly, copy, nonatomic) NSString *generatorCommitHash;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool impressionEnabled;
@property(readonly, copy, nonatomic) NSString *specificationCommitHash;
@property(readonly, copy, nonatomic) NSString *specificationVersion;
@property(readonly) Class superclass;

@end

