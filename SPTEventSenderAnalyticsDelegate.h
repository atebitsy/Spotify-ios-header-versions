//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTConnectivityAnalyticsDelegate-Protocol.h"

@class NSString;
@protocol SPTEventSenderCore;

@interface SPTEventSenderAnalyticsDelegate : NSObject <SPTConnectivityAnalyticsDelegate>
{
    id <SPTEventSenderCore> _eventSenderCore;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTEventSenderCore> eventSenderCore; // @synthesize eventSenderCore=_eventSenderCore;
- (void)logEventWithName:(id)arg1 data:(id)arg2;
- (void)log:(id)arg1;
- (id)initWithEventSenderCore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

