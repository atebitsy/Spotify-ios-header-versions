//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessagePushNotificationOpened1 : SPTLogMessage
{
    NSString *_pushIdValue;
    NSString *_campaignIdValue;
    NSString *_targetUriValue;
    long long _timestampValue;
}

+ (id)messageWithPushId:(id)arg1 campaignId:(id)arg2 targetUri:(id)arg3 timestamp:(long long)arg4;
- (void).cxx_destruct;
@property(nonatomic) long long timestampValue; // @synthesize timestampValue=_timestampValue;
@property(copy, nonatomic) NSString *targetUriValue; // @synthesize targetUriValue=_targetUriValue;
@property(copy, nonatomic) NSString *campaignIdValue; // @synthesize campaignIdValue=_campaignIdValue;
@property(copy, nonatomic) NSString *pushIdValue; // @synthesize pushIdValue=_pushIdValue;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

