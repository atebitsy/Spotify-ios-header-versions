//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APMDailyCounts : NSObject
{
    int _day;
    int _conversionsCount;
    int _allEventsCount;
    int _publicEventsCount;
    int _errorEventsCount;
    int _realtimeCount;
}

@property(readonly, nonatomic) int realtimeCount; // @synthesize realtimeCount=_realtimeCount;
@property(readonly, nonatomic) int errorEventsCount; // @synthesize errorEventsCount=_errorEventsCount;
@property(readonly, nonatomic) int publicEventsCount; // @synthesize publicEventsCount=_publicEventsCount;
@property(readonly, nonatomic) int allEventsCount; // @synthesize allEventsCount=_allEventsCount;
@property(readonly, nonatomic) int conversionsCount; // @synthesize conversionsCount=_conversionsCount;
@property(readonly, nonatomic) int day; // @synthesize day=_day;
- (void)resetWithNewDay:(int)arg1;
- (void)decrementAllEventsCount;
- (void)incrementRealtimeCountsForCurrentDay:(int)arg1;
- (void)incrementErrorEventsCountForCurrentDay:(int)arg1;
- (void)incrementCountsForCurrentDay:(int)arg1 isPublicEvent:(_Bool)arg2 isConversion:(_Bool)arg3 byEffectiveEventCount:(int)arg4;
- (void)incrementCountsForCurrentDay:(int)arg1 isPublicEvent:(_Bool)arg2 isConversion:(_Bool)arg3;
- (id)initWithDay:(int)arg1 conversionsCount:(int)arg2 allEventsCount:(int)arg3 publicEventsCount:(int)arg4 errorEventsCount:(int)arg5 realtimeCount:(int)arg6;

@end
