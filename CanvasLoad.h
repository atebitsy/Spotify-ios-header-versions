//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface CanvasLoad : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *canvasId; // @dynamic canvasId;
@property(copy, nonatomic) NSString *entityUri; // @dynamic entityUri;
@property(copy, nonatomic) NSString *event; // @dynamic event;
@property(nonatomic) _Bool hasCanvasId; // @dynamic hasCanvasId;
@property(nonatomic) _Bool hasEntityUri; // @dynamic hasEntityUri;
@property(nonatomic) _Bool hasEvent; // @dynamic hasEvent;
@property(nonatomic) _Bool hasSource; // @dynamic hasSource;
@property(retain, nonatomic) NSMutableDictionary *metadata; // @dynamic metadata;
@property(readonly, nonatomic) unsigned long long metadata_Count; // @dynamic metadata_Count;
@property(copy, nonatomic) NSString *source; // @dynamic source;

@end
