//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileSleepTimer_InvalidSleepOptionEventFactory, SPTUBIMobileSleepTimer_RemoveSleepTimerEventFactory, SPTUBIMobileSleepTimer_SleepAtEndOfTrackEventFactory, SPTUBIMobileSleepTimer_SleepInXMinutesEventFactory;

@protocol SPTUBIMobileSleepTimerEventFactory <NSObject>
- (id <SPTUBIMobileSleepTimer_InvalidSleepOptionEventFactory>)invalidSleepOptionFactory;
- (id <SPTUBIMobileSleepTimer_RemoveSleepTimerEventFactory>)removeSleepTimerFactory;
- (id <SPTUBIMobileSleepTimer_SleepAtEndOfTrackEventFactory>)sleepAtEndOfTrackFactory;
- (id <SPTUBIMobileSleepTimer_SleepInXMinutesEventFactory>)sleepInXMinutesFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

