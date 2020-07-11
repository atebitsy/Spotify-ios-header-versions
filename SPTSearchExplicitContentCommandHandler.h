//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@protocol SPTExplicitContentAccessManager, SPTSearchUBIHubsLogger;

@interface SPTSearchExplicitContentCommandHandler : NSObject <HUBCommandHandler>
{
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTSearchUBIHubsLogger> _ubiHubsLogger;
}

+ (id)defaultName;
+ (id)commandWithName:(id)arg1 entityURI:(id)arg2;
@property(readonly, nonatomic) id <SPTSearchUBIHubsLogger> ubiHubsLogger; // @synthesize ubiHubsLogger=_ubiHubsLogger;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithExplicitContentAccessManager:(id)arg1 ubiHubsLogger:(id)arg2;

@end

