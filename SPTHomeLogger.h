//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPSession;
@protocol SPTLogCenter, SPTUBILogger;

@interface SPTHomeLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTUBILogger> _ubiLogger;
    SPSession *_currentSession;
}

@property(readonly, nonatomic) __weak SPSession *currentSession; // @synthesize currentSession=_currentSession;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (double)getTimestamp;
- (void)logDidTapOnSettingsButton;
- (id)initWithLogCenter:(id)arg1 ubiLogger:(id)arg2 currentSession:(id)arg3;

@end

