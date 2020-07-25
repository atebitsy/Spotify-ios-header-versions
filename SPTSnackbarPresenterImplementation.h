//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSnackbarAnimationViewActionHanderDelegate-Protocol.h"
#import "SPTSnackbarPresenter-Protocol.h"

@class NSMutableArray, NSString, NSTimer, SPTSnackbarTheme, SPTSnackbarViewPresenter, UISwipeGestureRecognizer;
@protocol SPTCarDetector;

@interface SPTSnackbarPresenterImplementation : NSObject <SPTSnackbarPresenter, SPTSnackbarAnimationViewActionHanderDelegate>
{
    _Bool _isPresentationInProgress;
    NSMutableArray *_modelQueue;
    SPTSnackbarViewPresenter *_viewPresenter;
    SPTSnackbarTheme *_theme;
    NSTimer *_presentationTimer;
    UISwipeGestureRecognizer *_swipeRecognizer;
    id <SPTCarDetector> _carDetector;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTCarDetector> carDetector; // @synthesize carDetector=_carDetector;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeRecognizer; // @synthesize swipeRecognizer=_swipeRecognizer;
@property(retain, nonatomic) NSTimer *presentationTimer; // @synthesize presentationTimer=_presentationTimer;
@property(retain, nonatomic) SPTSnackbarTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTSnackbarViewPresenter *viewPresenter; // @synthesize viewPresenter=_viewPresenter;
@property(nonatomic) _Bool isPresentationInProgress; // @synthesize isPresentationInProgress=_isPresentationInProgress;
@property(retain, nonatomic) NSMutableArray *modelQueue; // @synthesize modelQueue=_modelQueue;
- (void)userDidSwipeSnackbar:(id)arg1;
- (_Bool)animationView:(id)arg1 shouldHandleTouchAtPoint:(struct CGPoint)arg2;
- (void)invalidateTimer;
- (void)hideSnackbar;
- (void)completeSnackbarPresentation;
- (void)snackbarDidEndPresentation:(id)arg1;
- (id)snackbarViewWithViewModel:(id)arg1;
- (void)showNextSnackbarInQueue;
- (void)queueSnackbarForViewModel:(id)arg1;
- (void)cancelAllSnackbars;
- (void)presentSnackbarWithText:(id)arg1 buttonIcon:(long long)arg2 iconSize:(struct CGSize)arg3 actionBlock:(CDUnknownBlockType)arg4;
- (void)presentSnackbarWithText:(id)arg1 buttonIcon:(long long)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (void)presentSnackbarWithText:(id)arg1 buttonTitle:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
- (void)presentSnackbarWithText:(id)arg1;
- (id)initWithTheme:(id)arg1 carDetector:(id)arg2 viewPresenter:(id)arg3 isRTL:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

