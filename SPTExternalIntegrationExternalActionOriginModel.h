//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExternalIntegrationExternalActionOrigin-Protocol.h"

@class NSString;

@interface SPTExternalIntegrationExternalActionOriginModel : NSObject <SPTExternalIntegrationExternalActionOrigin>
{
    NSString *_accessorySessionID;
    NSString *_clientID;
    NSString *_eventOriginID;
}

@property(readonly, nonatomic) NSString *eventOriginID; // @synthesize eventOriginID=_eventOriginID;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) NSString *accessorySessionID; // @synthesize accessorySessionID=_accessorySessionID;
- (void).cxx_destruct;
- (id)initWithAccessorySessionID:(id)arg1 clientID:(id)arg2 eventOriginID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
