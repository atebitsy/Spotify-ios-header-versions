//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString, SPTVoiceCommandHandlingOptions, SPTVoiceSessionHandlingOptions, SPTVoiceSessionPresentationOptions;
@protocol SPTRadioManager, SPTVoicePlayerEventsListener, SPTVoiceSessionFactory, SPTVoiceSessionViewControllerFactory, SPTVoiceTestManager;

@protocol SPTVoiceService <SPTService>
- (void)setVoiceCalloutTooltipDidDisplay:(_Bool)arg1;
- (_Bool)didDisplayVoiceCalloutTooltip;
- (_Bool)didFinishVoiceOnboarding;
- (void)provideWithRadioManager:(id <SPTRadioManager>)arg1;
- (void)launchVoiceWithReferrerIdentifier:(NSString *)arg1;
- (id <SPTVoicePlayerEventsListener>)providePlayerEventListener;
- (id <SPTVoiceTestManager>)provideTestManager;
- (id <SPTVoiceSessionViewControllerFactory>)createViewControllerFactoryWithVoiceSessionFactory:(id <SPTVoiceSessionFactory>)arg1 presentationOptions:(SPTVoiceSessionPresentationOptions *)arg2 commandHandlingOptions:(SPTVoiceCommandHandlingOptions *)arg3;
- (id <SPTVoiceSessionFactory>)createVoiceSessionFactoryWithServiceIdentifier:(NSString *)arg1 sessionHandlingOptions:(SPTVoiceSessionHandlingOptions *)arg2;
@end

