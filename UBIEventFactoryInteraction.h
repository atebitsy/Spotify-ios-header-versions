//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UBIInteractionEvent-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol UBIInteractionEventLocation;

@interface UBIEventFactoryInteraction : NSObject <UBIInteractionEvent>
{
    id <UBIInteractionEventLocation> _location;
    NSString *_action;
    long long _actionVersion;
    NSDictionary *_actionParameters;
    NSArray *_errors;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, copy, nonatomic) NSDictionary *actionParameters; // @synthesize actionParameters=_actionParameters;
@property(readonly, nonatomic) long long actionVersion; // @synthesize actionVersion=_actionVersion;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(readonly, nonatomic) id <UBIInteractionEventLocation> location; // @synthesize location=_location;
- (id)initWithLocation:(id)arg1 action:(id)arg2 actionVersion:(long long)arg3 actionParameters:(id)arg4 errors:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
