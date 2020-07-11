//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingLegacyFeedbackCoordinator-Protocol.h"

@class NSString, SPTNowPlayingLegacyFormatListFeedbackHandlerImplementation, SPTNowPlayingLegacyRadioFeedbackHandlerImplementation;
@protocol SPTContextMenuPresenterFactory, SPTFeedbackViewModel, SPTFormatListPlatformRemoteControlPolicyFactory, SPTNowPlayingRemoteControlPolicy, SPTPSXTestManager, SPTRadioRemoteConfigProperties;

@interface SPTNowPlayingLegacyFeedbackCoordinatorImplementation : NSObject <SPTNowPlayingLegacyFeedbackCoordinator>
{
    SPTNowPlayingLegacyRadioFeedbackHandlerImplementation *_radioFeedbackHandler;
    id <SPTContextMenuPresenterFactory> _contextMenuPresenterFactory;
    id <SPTNowPlayingRemoteControlPolicy> _radioRemoteControlPolicy;
    id <SPTFormatListPlatformRemoteControlPolicyFactory> _formatListPlatformRemoteControlPolicyFactory;
    id <SPTNowPlayingRemoteControlPolicy> _formatListRemoteControlPolicy;
    id <SPTFeedbackViewModel> _feedbackViewModel;
    id <SPTPSXTestManager> _psxTestManager;
    id <SPTRadioRemoteConfigProperties> _radioRemoteConfigProperties;
    SPTNowPlayingLegacyFormatListFeedbackHandlerImplementation *_formatListFeedbackHandler;
}

@property(retain, nonatomic) SPTNowPlayingLegacyFormatListFeedbackHandlerImplementation *formatListFeedbackHandler; // @synthesize formatListFeedbackHandler=_formatListFeedbackHandler;
@property(retain, nonatomic) id <SPTRadioRemoteConfigProperties> radioRemoteConfigProperties; // @synthesize radioRemoteConfigProperties=_radioRemoteConfigProperties;
@property(nonatomic) __weak id <SPTPSXTestManager> psxTestManager; // @synthesize psxTestManager=_psxTestManager;
@property(retain, nonatomic) id <SPTFeedbackViewModel> feedbackViewModel; // @synthesize feedbackViewModel=_feedbackViewModel;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> formatListRemoteControlPolicy; // @synthesize formatListRemoteControlPolicy=_formatListRemoteControlPolicy;
@property(retain, nonatomic) id <SPTFormatListPlatformRemoteControlPolicyFactory> formatListPlatformRemoteControlPolicyFactory; // @synthesize formatListPlatformRemoteControlPolicyFactory=_formatListPlatformRemoteControlPolicyFactory;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> radioRemoteControlPolicy; // @synthesize radioRemoteControlPolicy=_radioRemoteControlPolicy;
@property(retain, nonatomic) id <SPTContextMenuPresenterFactory> contextMenuPresenterFactory; // @synthesize contextMenuPresenterFactory=_contextMenuPresenterFactory;
- (void).cxx_destruct;
- (id)createFormatListFeedbackManagerIfNecessary:(id)arg1;
@property(readonly, nonatomic) SPTNowPlayingLegacyRadioFeedbackHandlerImplementation *radioFeedbackHandler; // @synthesize radioFeedbackHandler=_radioFeedbackHandler;
- (_Bool)isFormatListFeedbackState:(id)arg1;
- (id)feedbackHandlerForPlayerState:(id)arg1 containingViewController:(id)arg2;
- (id)initWithContextMenuPresenterFactory:(id)arg1 radioRemoteControlPolicy:(id)arg2 formatListPlatformRemoteControlPolicyFactory:(id)arg3 feedbackViewModel:(id)arg4 psxTestManager:(id)arg5 radioRemoteConfigProperties:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
