//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageSDKTriggerListControllerDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SPTInAppMessageNetworkClient;

@interface SPTInAppMessageEngine : NSObject <SPTInAppMessageSDKTriggerListControllerDelegate>
{
    NSArray *_triggerList;
    NSMutableDictionary *_triggerPatternRegularExpressionCache;
    SPTInAppMessageNetworkClient *_networkClient;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTInAppMessageNetworkClient *networkClient; // @synthesize networkClient=_networkClient;
@property(retain, nonatomic) NSMutableDictionary *triggerPatternRegularExpressionCache; // @synthesize triggerPatternRegularExpressionCache=_triggerPatternRegularExpressionCache;
@property(copy, nonatomic) NSArray *triggerList; // @synthesize triggerList=_triggerList;
- (id)getMatchingTriggersForPattern:(id)arg1;
- (void)requestMessageForTriggerPattern:(id)arg1 triggerType:(id)arg2;
- (void)requestMessagePreviewForCreativeID:(id)arg1 triggerURI:(id)arg2 isRelayCreative:(_Bool)arg3;
- (void)triggerListController:(id)arg1 didFetchTriggerList:(id)arg2;
- (id)initWithNetworkClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

