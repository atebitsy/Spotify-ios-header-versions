//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface EventEnvelope : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) NSString *ins_messageId;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *eventFragmentArray; // @dynamic eventFragmentArray;
@property(readonly, nonatomic) unsigned long long eventFragmentArray_Count; // @dynamic eventFragmentArray_Count;
@property(copy, nonatomic) NSString *eventName; // @dynamic eventName;
@property(copy, nonatomic) NSData *sequenceId; // @dynamic sequenceId;
@property(nonatomic) long long sequenceNumber; // @dynamic sequenceNumber;

@end

