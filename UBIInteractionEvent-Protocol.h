//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol UBIInteractionEventLocation;

@protocol UBIInteractionEvent <NSObject>
@property(readonly, copy, nonatomic) NSArray *errors;
@property(readonly, copy, nonatomic) NSDictionary *actionParameters;
@property(readonly, nonatomic) long long actionVersion;
@property(readonly, copy, nonatomic) NSString *action;
@property(readonly, nonatomic) id <UBIInteractionEventLocation> location;
@end

