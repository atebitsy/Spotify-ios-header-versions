//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _TtC16TopicFeatureImplP33_C95104A6D35E222876D0C085A3AC5E9938InteractionEventLocationImplementation : NSObject
{
    // Error parsing type: , name: applicationId
    // Error parsing type: , name: specificationId
    // Error parsing type: , name: specificationVersion
    // Error parsing type: , name: specificationCommitHash
    // Error parsing type: , name: generatorCommitHash
    // Error parsing type: , name: eventPathComponents
    // Error parsing type: , name: impressionEnabled
    // Error parsing type: , name: interactionType
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *interactionType;
@property(nonatomic, readonly) _Bool impressionEnabled; // @synthesize impressionEnabled;
@property(nonatomic, readonly) NSArray *eventPathComponents;
@property(nonatomic, readonly) NSString *generatorCommitHash;
@property(nonatomic, readonly) NSString *specificationCommitHash;
@property(nonatomic, readonly) NSString *specificationVersion;
@property(nonatomic, readonly) NSString *applicationId;

@end

