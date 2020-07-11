//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTProfileUserDataLegacy-Protocol.h"

@class NSHashTable, NSString, NSURL, SPTUser;

@interface SPTProfileUserDataImp : NSObject <SPTProfileUserDataLegacy>
{
    SPTUser *_user;
    NSHashTable *_observers;
}

@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) SPTUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)removeProfileChangeObserver:(id)arg1;
- (void)addProfileChangeObserver:(id)arg1;
- (void)dispatchObservers;
@property(readonly, nonatomic) NSURL *imageURL; // @dynamic imageURL;
@property(readonly, nonatomic) NSString *shortName; // @dynamic shortName;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) NSString *username; // @dynamic username;
- (id)initWithUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

