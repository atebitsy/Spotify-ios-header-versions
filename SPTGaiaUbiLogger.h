//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTUBILogger;

@interface SPTGaiaUbiLogger : NSObject
{
    id <SPTUBILogger> _logger;
}

@property(readonly, nonatomic) id <SPTUBILogger> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)logAttachPopupListenOnThisDeviceInteractionForDeviceId:(id)arg1;
- (void)logAttachPopupContinueInteractionForDeviceId:(id)arg1;
- (void)logAttachPopupImpressionForDeviceId:(id)arg1;
- (id)attachPopupFactoryForDeviceId:(id)arg1;
- (void)logOnboardingPopupLaterInteractionForDeviceId:(id)arg1;
- (void)logOnboardingPopupListenNowInteractionForDeviceId:(id)arg1;
- (void)logOnboardingPopupImpressionForDeviceId:(id)arg1;
- (id)onboardingPopupFactoryForDeviceId:(id)arg1;
- (void)logDeviceLockScreenSettingsChangedInteractionWithState:(_Bool)arg1;
- (void)logShowLocalDevicesSettingsChangedInteractionWithState:(_Bool)arg1;
- (id)settingsFactory;
- (id)initWithLogger:(id)arg1;

@end

