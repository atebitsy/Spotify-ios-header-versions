//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface DeviceIdentifier : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *androidid; // @dynamic androidid;
@property(copy, nonatomic) NSString *deviceid; // @dynamic deviceid;
@property(copy, nonatomic) NSString *googleaid; // @dynamic googleaid;
@property(nonatomic) _Bool hasAndroidid; // @dynamic hasAndroidid;
@property(nonatomic) _Bool hasDeviceid; // @dynamic hasDeviceid;
@property(nonatomic) _Bool hasGoogleaid; // @dynamic hasGoogleaid;
@property(nonatomic) _Bool hasIdfa; // @dynamic hasIdfa;
@property(copy, nonatomic) NSString *idfa; // @dynamic idfa;

@end

