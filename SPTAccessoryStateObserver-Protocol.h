//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTAccessory;
@protocol SPTAccessoryStateManager;

@protocol SPTAccessoryStateObserver <NSObject>

@optional
- (void)accessoryStateManager:(id <SPTAccessoryStateManager>)arg1 accessoryDidDisconnect:(SPTAccessory *)arg2;
- (void)accessoryStateManager:(id <SPTAccessoryStateManager>)arg1 accessoryDidConnect:(SPTAccessory *)arg2;
@end
