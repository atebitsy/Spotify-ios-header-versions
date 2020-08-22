//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class SPCore;
@protocol SPTAudioDriverController, SPTEventSenderCore, SPTLogDispatcher, SPTSessionBootstrapDelegate;

@protocol SPTCoreService <SPTService>
- (void)setEventSenderCore:(id <SPTEventSenderCore>)arg1;
- (id <SPTAudioDriverController>)provideAudioDriverController;
- (SPCore *)provideCoreInstance;
- (void)setBootstrapModule:(id <SPTSessionBootstrapDelegate>)arg1;
- (id <SPTLogDispatcher>)provideCoreLogDispatcher;
@end

