//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCollectionPlatformLogger-Protocol.h"

@class NSString;
@protocol SPTLogCenter;

@interface SPTCollectionPlatformLoggerImplementation : NSObject <SPTCollectionPlatformLogger>
{
    id <SPTLogCenter> _logCenter;
}

@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUIImpressionOnPageURI:(id)arg1 identifier:(id)arg2 impressionType:(id)arg3;
- (void)logAlertOnPageURI:(id)arg1 alertId:(id)arg2;
- (void)logCollectionUserIntent:(unsigned long long)arg1 pageURI:(id)arg2 targetURI:(id)arg3;
- (void)logNewSaveState:(_Bool)arg1 pageURI:(id)arg2 targetURL:(id)arg3;
- (id)initWithLogCenter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

