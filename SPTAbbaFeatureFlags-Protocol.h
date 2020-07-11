//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue, SPTAbbaFeatureFlagsObserver;

@protocol SPTAbbaFeatureFlags <NSObject>
@property(readonly, nonatomic, getter=isCacheAvailable) _Bool cacheAvailable;
- (void)logAccessForFlagName:(NSString *)arg1;
- (NSString *)objectForKeyedSubscript:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (void)removeObserver:(id <SPTAbbaFeatureFlagsObserver>)arg1;
- (void)addObserver:(id <SPTAbbaFeatureFlagsObserver>)arg1 on:(NSObject<OS_dispatch_queue> *)arg2;
@end
