//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;
@protocol SPTUBIInteractionEventLocation;

@interface _TtC22ConnectUIV2FeatureImplP33_5E3A84D6A1FE9ECF60A0DA6FEE56209830InteractionEventImplementation : NSObject
{
    // Error parsing type: , name: location
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
@property(nonatomic, readonly) id <SPTUBIInteractionEventLocation> location; // @synthesize location;

@end

