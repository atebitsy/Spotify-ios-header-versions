//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTConnectAccessButtonLogAppContextProvider;
@protocol SPTLogCenter;

@interface SPTConnectAccessButtonLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    SPTConnectAccessButtonLogAppContextProvider *_appContextProvider;
}

@property(readonly, nonatomic) SPTConnectAccessButtonLogAppContextProvider *appContextProvider; // @synthesize appContextProvider=_appContextProvider;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (id)itemIdForConnectionState:(long long)arg1;
- (void)logAccessButtonNudgePerformed;
- (void)logAccessButtonTappedWithConnectionState:(long long)arg1;
- (void)logAccessButtonShown;
- (id)initWithLogCenter:(id)arg1 appContextProvider:(id)arg2;

@end
