//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface FBSDKDeactivatedEvent : NSObject
{
    NSString *_eventName;
    NSSet *_deactivatedParams;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *deactivatedParams; // @synthesize deactivatedParams=_deactivatedParams;
@property(readonly, copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)initWithEventName:(id)arg1 deactivatedParams:(id)arg2;

@end
