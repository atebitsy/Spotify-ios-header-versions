//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingEntityDecorationControllerObserver-Protocol.h"
#import "SPTNowPlayingNavigationBarModel-Protocol.h"
#import "SPTSleepTimerEventObserver-Protocol.h"
#import "SPTSleepTimerTimeObserver-Protocol.h"

@class NSString, NSURL, SPTNowPlayingEntityDecorationController, SPTNowPlayingModel, SPTObserverManager;
@protocol SPTNowPlayingTestManager, SPTSleepTimerController;

@interface SPTNowPlayingNavigationBarModelImplementation : NSObject <SPTNowPlayingEntityDecorationControllerObserver, SPTSleepTimerTimeObserver, SPTSleepTimerEventObserver, SPTNowPlayingNavigationBarModel>
{
    _Bool _shouldDisableNavBarButtons;
    _Bool _shouldDisableRightBarButton;
    SPTNowPlayingModel *_model;
    NSURL *_contextURI;
    NSString *_entityName;
    NSString *_entityDescription;
    NSString *_entityTimerDescription;
    NSURL *_entityClickURI;
    id <SPTNowPlayingTestManager> _nowPlayingTestManager;
    id <SPTSleepTimerController> _sleepTimerController;
    SPTNowPlayingEntityDecorationController *_entityDecorationController;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(retain, nonatomic) SPTNowPlayingEntityDecorationController *entityDecorationController; // @synthesize entityDecorationController=_entityDecorationController;
@property(nonatomic) __weak id <SPTSleepTimerController> sleepTimerController; // @synthesize sleepTimerController=_sleepTimerController;
@property(readonly, nonatomic) id <SPTNowPlayingTestManager> nowPlayingTestManager; // @synthesize nowPlayingTestManager=_nowPlayingTestManager;
@property(retain, nonatomic) NSURL *entityClickURI; // @synthesize entityClickURI=_entityClickURI;
@property(copy, nonatomic) NSString *entityTimerDescription; // @synthesize entityTimerDescription=_entityTimerDescription;
@property(copy, nonatomic) NSString *entityDescription; // @synthesize entityDescription=_entityDescription;
@property(copy, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
@property(retain, nonatomic) NSURL *contextURI; // @synthesize contextURI=_contextURI;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool shouldDisableRightBarButton; // @synthesize shouldDisableRightBarButton=_shouldDisableRightBarButton;
@property(nonatomic) _Bool shouldDisableNavBarButtons; // @synthesize shouldDisableNavBarButtons=_shouldDisableNavBarButtons;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isEntityRadio;
@property(readonly, nonatomic) NSString *showsFormatNavigationBarTitle;
- (id)defaultNavigationBarTitle;
@property(readonly, nonatomic) NSString *navigationBarSubtitle;
- (_Bool)isPodcastAd;
@property(readonly, nonatomic) NSString *navigationBarTitle;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyObservers;
- (void)removeEntityTimerDescription;
- (void)timerDidCancel:(id)arg1;
- (void)timerDidEnd:(id)arg1;
- (void)timerDidStart:(id)arg1;
- (void)timer:(id)arg1 timeWasUpdated:(double)arg2;
- (void)entityDecorationControllerDidUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithEntityDecorationController:(id)arg1 nowPlayingModel:(id)arg2 sleepTimerController:(id)arg3 nowPlayingTestManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

