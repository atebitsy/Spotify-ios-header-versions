//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol SPTUBIInteractionEvent <NSObject>
@property(nonatomic, readonly) NSString *specificationVersion;
@property(nonatomic, readonly) NSString *generatorCommitHash;
@property(nonatomic, readonly) NSString *specificationCommitHash;
@property(nonatomic, readonly) NSArray *errors;
@property(nonatomic, readonly) NSDictionary *actionParameters;
@property(nonatomic, readonly) long long actionVersion;
@property(nonatomic, readonly) NSString *action;
@property(nonatomic, readonly) NSArray *components;
@property(nonatomic, readonly) NSString *interactionType;
@property(nonatomic, readonly) NSString *applicationId;
@end

