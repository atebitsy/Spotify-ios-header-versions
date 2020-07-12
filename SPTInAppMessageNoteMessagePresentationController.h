//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageNoteMessageWebViewContentDelegate-Protocol.h"
#import "SPTInAppMessageNotePresentationManagerDelegate-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSDictionary, NSString, SPTInAppMessageNoteMessageViewModel, SPTInAppMessageNotePresentationManager, SPTInAppMessageNowPlayingManagerRegistryImplementation, SPTInAppMessageServiceLogger;
@protocol SPTAuthController, SPTBannerPresentationManager, SPTCarDetector, SPTCrashReporter, SPTFreeTierTooltipConditionalPresenter, SPTOfflineModeState, SPTSlateManager, SPTSnackbarConditionalPresenter, SPTTooltipPresentationManager;

@interface SPTInAppMessageNoteMessagePresentationController : NSObject <SPTInAppMessageNoteMessageWebViewContentDelegate, SPTOfflineModeStateObserver, SPTInAppMessageNotePresentationManagerDelegate>
{
    _Bool _offline;
    SPTInAppMessageNoteMessageViewModel *_noteMessageViewModel;
    id <SPTSlateManager> _slateManager;
    SPTInAppMessageNotePresentationManager *_notePresentationManager;
    id <SPTBannerPresentationManager> _bannerPresentationManager;
    id <SPTTooltipPresentationManager> _tooltipPresentationManager;
    id <SPTFreeTierTooltipConditionalPresenter> _freeTierTooltipPresenter;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    id <SPTOfflineModeState> _offlineModeState;
    SPTInAppMessageServiceLogger *_serviceLogger;
    SPTInAppMessageNowPlayingManagerRegistryImplementation *_nowPlayingManagerRegistry;
    id <SPTCarDetector> _carDetector;
    NSDictionary *_cancelationInfo;
    id <SPTCrashReporter> _crashReporter;
    id <SPTAuthController> _authController;
}

@property(readonly, nonatomic) id <SPTAuthController> authController; // @synthesize authController=_authController;
@property(readonly, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(copy, nonatomic) NSDictionary *cancelationInfo; // @synthesize cancelationInfo=_cancelationInfo;
@property(retain, nonatomic) id <SPTCarDetector> carDetector; // @synthesize carDetector=_carDetector;
@property(retain, nonatomic) SPTInAppMessageNowPlayingManagerRegistryImplementation *nowPlayingManagerRegistry; // @synthesize nowPlayingManagerRegistry=_nowPlayingManagerRegistry;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(retain, nonatomic) SPTInAppMessageServiceLogger *serviceLogger; // @synthesize serviceLogger=_serviceLogger;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(retain, nonatomic) id <SPTFreeTierTooltipConditionalPresenter> freeTierTooltipPresenter; // @synthesize freeTierTooltipPresenter=_freeTierTooltipPresenter;
@property(retain, nonatomic) id <SPTTooltipPresentationManager> tooltipPresentationManager; // @synthesize tooltipPresentationManager=_tooltipPresentationManager;
@property(retain, nonatomic) id <SPTBannerPresentationManager> bannerPresentationManager; // @synthesize bannerPresentationManager=_bannerPresentationManager;
@property(retain, nonatomic) SPTInAppMessageNotePresentationManager *notePresentationManager; // @synthesize notePresentationManager=_notePresentationManager;
@property(retain, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(retain, nonatomic) SPTInAppMessageNoteMessageViewModel *noteMessageViewModel; // @synthesize noteMessageViewModel=_noteMessageViewModel;
- (void).cxx_destruct;
- (void)noteMessageSwipedAway;
- (void)cancelNoteMessagePresentation:(id)arg1;
- (_Bool)canPresentNote;
- (void)logMessageDiscardedWithReason:(id)arg1;
- (void)noteResized;
- (void)dismissNote;
- (void)presentNote;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithNoteMessageViewModel:(id)arg1 slateManager:(id)arg2 notePresentationManager:(id)arg3 bannerPresentationManager:(id)arg4 tooltipPresentationManager:(id)arg5 freeTierTooltipPresenter:(id)arg6 snackbarPresenter:(id)arg7 offlineModeState:(id)arg8 nowPlayingManagerRegistry:(id)arg9 carDetector:(id)arg10 serviceLogger:(id)arg11 crashReporter:(id)arg12 authController:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

