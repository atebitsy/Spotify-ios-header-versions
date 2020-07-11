//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTFeatureFlagSignal;

@protocol SPTSocialListeningTestManager <NSObject>
@property(readonly, nonatomic, getter=isSocialDeviceEnabled) _Bool socialDeviceEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> shareLinkEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> socialListeningEnabledSignal;
@property(readonly, nonatomic, getter=isShareLinkEnabled) _Bool shareLinkEnabled;
@property(readonly, nonatomic, getter=isSocialListeningEnabled) _Bool socialListeningEnabled;
@end

