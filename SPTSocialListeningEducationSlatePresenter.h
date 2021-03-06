//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSlateDataSource-Protocol.h"
#import "SPTSlateDelegate-Protocol.h"
#import "SPTSocialListeningEducationSlateViewControllerDelegate-Protocol.h"
#import "SPTSocialListeningListenTogetherDisclaimerViewControllerDelegate-Protocol.h"

@class NSString, SPTSocialListeningEducationSlateViewController, SPTSocialListeningGLUETheme, SPTSocialListeningListenTogetherDisclaimerViewController;
@protocol SPTSlate, SPTSlateBuilderProvider, SPTSlateManager, SPTSocialListeningTestManager;

@interface SPTSocialListeningEducationSlatePresenter : NSObject <SPTSlateDelegate, SPTSlateDataSource, SPTSocialListeningEducationSlateViewControllerDelegate, SPTSocialListeningListenTogetherDisclaimerViewControllerDelegate>
{
    SPTSocialListeningEducationSlateViewController *_contentViewController;
    id <SPTSlate> _educationSlate;
    id <SPTSlate> _disclaimerSlate;
    id <SPTSlateManager> _slateManager;
    SPTSocialListeningGLUETheme *_theme;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    id <SPTSocialListeningTestManager> _testManager;
    SPTSocialListeningListenTogetherDisclaimerViewController *_disclaimerViewController;
    CDUnknownBlockType _confirmationHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType confirmationHandler; // @synthesize confirmationHandler=_confirmationHandler;
@property(retain, nonatomic) SPTSocialListeningListenTogetherDisclaimerViewController *disclaimerViewController; // @synthesize disclaimerViewController=_disclaimerViewController;
@property(readonly, nonatomic) id <SPTSocialListeningTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(readonly, nonatomic) SPTSocialListeningGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
- (void)socialListeningListenTogetherDidConfirmJoining:(_Bool)arg1;
- (void)socialListeningEducationSlateViewControllerDidTapActionButton:(id)arg1;
- (_Bool)shouldAllowDragGesture;
- (id)contentUnitForSlateViewController:(id)arg1;
- (_Bool)shouldHideImageForSlate:(id)arg1;
@property(readonly, nonatomic) SPTSocialListeningEducationSlateViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) id <SPTSlate> disclaimerSlate; // @synthesize disclaimerSlate=_disclaimerSlate;
@property(readonly, nonatomic) id <SPTSlate> educationSlate; // @synthesize educationSlate=_educationSlate;
- (void)dismissDisclaimerView;
- (void)presentDisclaimerViewWithName:(id)arg1 onConfirmation:(CDUnknownBlockType)arg2;
- (void)presentJoinEducationSlateForParticipantWithHostName:(id)arg1;
- (void)presentJoinEducationSlateForHostWithParticipantName:(id)arg1;
- (id)initWithSlateManager:(id)arg1 theme:(id)arg2 slateBuilderProvider:(id)arg3 testManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

