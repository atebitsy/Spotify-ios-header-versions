//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTCarPlayFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _carplayFeature;
    _Bool _carplayDeferImageLoading;
    _Bool _carplayRemoteControlEventSubtypeDeprecation;
    _Bool _carplayRemoteControlEventLoggingEnabled;
    _Bool _carplayUbiEnabled;
    _Bool _carplayLargeListsEnabled;
    _Bool _carplayContinuePlayingFeature;
    _Bool _carplayUseHomeviewService;
}

@property(readonly, nonatomic) _Bool carplayUseHomeviewService; // @synthesize carplayUseHomeviewService=_carplayUseHomeviewService;
@property(readonly, nonatomic) _Bool carplayContinuePlayingFeature; // @synthesize carplayContinuePlayingFeature=_carplayContinuePlayingFeature;
@property(readonly, nonatomic) _Bool carplayLargeListsEnabled; // @synthesize carplayLargeListsEnabled=_carplayLargeListsEnabled;
@property(readonly, nonatomic) _Bool carplayUbiEnabled; // @synthesize carplayUbiEnabled=_carplayUbiEnabled;
@property(readonly, nonatomic) _Bool carplayRemoteControlEventLoggingEnabled; // @synthesize carplayRemoteControlEventLoggingEnabled=_carplayRemoteControlEventLoggingEnabled;
@property(readonly, nonatomic) _Bool carplayRemoteControlEventSubtypeDeprecation; // @synthesize carplayRemoteControlEventSubtypeDeprecation=_carplayRemoteControlEventSubtypeDeprecation;
@property(readonly, nonatomic) _Bool carplayDeferImageLoading; // @synthesize carplayDeferImageLoading=_carplayDeferImageLoading;
@property(readonly, nonatomic) _Bool carplayFeature; // @synthesize carplayFeature=_carplayFeature;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

