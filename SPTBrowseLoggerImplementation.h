//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBrowseLogger-Protocol.h"

@class NSString;
@protocol SPTBrowseDateProvider, SPTLogCenter;

@interface SPTBrowseLoggerImplementation : NSObject <SPTBrowseLogger>
{
    id <SPTLogCenter> _logCenter;
    id <SPTBrowseDateProvider> _dateProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTBrowseDateProvider> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void)logInteractionWithURI:(id)arg1 event:(id)arg2 userIntent:(id)arg3;
- (void)logImpressionWithComponentModel:(id)arg1;
- (id)initWithLogCenter:(id)arg1 dateProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

