//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessagePreAuthSessionEvent1 : SPTLogMessage
{
    NSString *_sessionIdValue;
    NSString *_deviceIdValue;
}

+ (id)messageWithSessionId:(id)arg1 deviceId:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *deviceIdValue; // @synthesize deviceIdValue=_deviceIdValue;
@property(copy, nonatomic) NSString *sessionIdValue; // @synthesize sessionIdValue=_sessionIdValue;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

