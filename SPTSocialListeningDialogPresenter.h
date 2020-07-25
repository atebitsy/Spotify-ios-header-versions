//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningSelectSessionModePopupViewControllerDelegate-Protocol.h"

@class NSString, SPTObserverManager, SPTPopupManager, SPTSocialListeningGLUETheme, SPTSocialListeningLoggerImplementation;
@protocol SPTSocialListeningTestManager;

@interface SPTSocialListeningDialogPresenter : NSObject <SPTSocialListeningSelectSessionModePopupViewControllerDelegate>
{
    SPTPopupManager *_popupManager;
    SPTSocialListeningGLUETheme *_theme;
    SPTSocialListeningLoggerImplementation *_logger;
    id <SPTSocialListeningTestManager> _testManager;
    SPTObserverManager *_observers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTSocialListeningTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTSocialListeningLoggerImplementation *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTSocialListeningGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
- (void)didSelectSessionMode:(long long)arg1 forJoinURL:(id)arg2;
- (void)presentSelectSessionModeDialogForSessionWithURL:(id)arg1 hostName:(id)arg2;
- (void)presentFreeUserErrorJoinDialog;
- (void)presentSessionFullDialog;
- (void)presentSessionDeletedDialogWhenHostLeaves:(id)arg1;
- (void)confirmDeleteSessionTapped;
- (void)presentConfirmDeleteSessionDialogFromScreen:(unsigned long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithTheme:(id)arg1 popupManager:(id)arg2 logger:(id)arg3 testManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

