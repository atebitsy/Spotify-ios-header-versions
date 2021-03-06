//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIApplication;
@protocol SPTAppProtocolBackgroundTaskDelegate;

@interface SPTAppProtocolBackgroundTask : NSObject
{
    id <SPTAppProtocolBackgroundTaskDelegate> _delegate;
    UIApplication *_application;
    unsigned long long _backgroundTaskIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(readonly, nonatomic) __weak UIApplication *application; // @synthesize application=_application;
@property(nonatomic) __weak id <SPTAppProtocolBackgroundTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)stopAfterDelay:(double)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

@end

