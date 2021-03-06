//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIApplication;
@protocol SPForegroundObserverDelegate;

@interface SPForegroundObserver : NSObject
{
    _Bool _awake;
    _Bool _observing;
    id <SPForegroundObserverDelegate> _delegate;
    UIApplication *_application;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(nonatomic, getter=isObserving) _Bool observing; // @synthesize observing=_observing;
@property(nonatomic, getter=isAwake) _Bool awake; // @synthesize awake=_awake;
@property(nonatomic) __weak id <SPForegroundObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)applicationWillEnterForegroundNotification;
- (void)applicationDidEnterBackgroundNotification;
- (void)teardownObservers;
- (void)setupObservers;
- (void)hibernate;
- (void)awaken;
- (void)dealloc;
- (id)initWithApplication:(id)arg1;

@end

