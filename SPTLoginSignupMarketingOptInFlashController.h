//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults, SPTPopupManager;
@protocol SPTLinkDispatcher, SPTNotificationPreferencesBackendIntegrator;

@interface SPTLoginSignupMarketingOptInFlashController : NSObject
{
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTNotificationPreferencesBackendIntegrator> _notificationsBackendIntegrator;
    NSUserDefaults *_userDefaults;
    SPTPopupManager *_popupManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) id <SPTNotificationPreferencesBackendIntegrator> notificationsBackendIntegrator; // @synthesize notificationsBackendIntegrator=_notificationsBackendIntegrator;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void)explicitlyOptInToMarketingAttempt:(long long)arg1;
- (void)explicitlyOptInToMarketing;
- (void)promptUserForMarketingOptIn;
- (void)checkAndPromptIfNecessaryForMarketingOptIn;
- (id)initWithLinkDispatcher:(id)arg1 notificationsBackendIntegrator:(id)arg2 userDefaults:(id)arg3 popupManager:(id)arg4;

@end

