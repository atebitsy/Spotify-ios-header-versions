//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface _TtC18VoiceUIFeatureImplP33_25FFF74AD65C523AB5330A663E3124A130InteractionEventImplementation : NSObject
{
    // Error parsing type: , name: applicationId
    // Error parsing type: , name: specificationId
    // Error parsing type: , name: specificationVersion
    // Error parsing type: , name: specificationCommitHash
    // Error parsing type: , name: generatorCommitHash
    // Error parsing type: , name: interactionType
    // Error parsing type: , name: components
    // Error parsing type: , name: action
    // Error parsing type: , name: actionVersion
    // Error parsing type: , name: actionParameters
    // Error parsing type: , name: errors
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSArray *errors;
@property(nonatomic, readonly) NSDictionary *actionParameters;
@property(nonatomic, readonly) long long actionVersion; // @synthesize actionVersion;
@property(nonatomic, readonly) NSString *action;
@property(nonatomic, readonly) NSArray *components;
@property(nonatomic, readonly) NSString *interactionType;
@property(nonatomic, readonly) NSString *generatorCommitHash;
@property(nonatomic, readonly) NSString *specificationCommitHash;
@property(nonatomic, readonly) NSString *applicationId;

@end

