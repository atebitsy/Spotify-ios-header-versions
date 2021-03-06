//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIInteractionEvent-Protocol.h"

@class NSArray, NSDictionary, NSString, SPTUBIMobileAdsPreferencesInteractionEventLocation;

@interface SPTUBIMobileAdsPreferencesInteractionEvent : NSObject <SPTUBIInteractionEvent>
{
    SPTUBIMobileAdsPreferencesInteractionEventLocation *_location;
    NSString *_action;
    long long _actionVersion;
    NSDictionary *_actionParameters;
    NSArray *_errors;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(copy, nonatomic) NSDictionary *actionParameters; // @synthesize actionParameters=_actionParameters;
@property(nonatomic) long long actionVersion; // @synthesize actionVersion=_actionVersion;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) SPTUBIMobileAdsPreferencesInteractionEventLocation *location; // @synthesize location=_location;
- (id)initWithType:(id)arg1 components:(id)arg2 action:(id)arg3 actionVersion:(long long)arg4 actionParameters:(id)arg5 errors:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

