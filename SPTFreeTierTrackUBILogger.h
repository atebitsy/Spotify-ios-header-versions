//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierEntityPlaybackToggleCommandHandlerLogger-Protocol.h"

@class NSString;
@protocol SPTUBILogger, SPTUBIMobileTrackPageFreeEventFactory;

@interface SPTFreeTierTrackUBILogger : NSObject <SPTFreeTierEntityPlaybackToggleCommandHandlerLogger>
{
    id <SPTUBILogger> _logger;
    id <SPTUBIMobileTrackPageFreeEventFactory> _eventFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTUBIMobileTrackPageFreeEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(readonly, nonatomic) id <SPTUBILogger> logger; // @synthesize logger=_logger;
- (void)logHitPauseItem:(id)arg1;
- (void)logHitShufflePlayContext:(id)arg1;
- (id)initWithLogger:(id)arg1 eventFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

