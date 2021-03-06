//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceLibrarySessionObserver-Protocol.h"

@class NSEnumerator, NSString, NSTimer, SPTPodcastUtteranceSurveyLogger, SPTPodcastUtteranceSurveyPageModel;
@protocol SPTLocalSettings, SPTPodcastUtteranceSurveyViewModelPresenterDelegate, SPTPodcastUtteranceSurveyViewModelViewDelegate, SPTVoiceLibrarySession;

@interface SPTPodcastUtteranceSurveyViewModel : NSObject <SPTVoiceLibrarySessionObserver>
{
    id <SPTPodcastUtteranceSurveyViewModelPresenterDelegate> _presenterDelegate;
    id <SPTPodcastUtteranceSurveyViewModelViewDelegate> _viewDelegate;
    SPTPodcastUtteranceSurveyPageModel *_currentPage;
    SPTPodcastUtteranceSurveyLogger *_logger;
    id <SPTLocalSettings> _localSettings;
    id <SPTVoiceLibrarySession> _voiceSession;
    NSTimer *_firstUtteranceTimer;
    double _noUtteranceIntervalTimeout;
    NSEnumerator *_surveyPageEnumerator;
}

@property(retain, nonatomic) NSEnumerator *surveyPageEnumerator; // @synthesize surveyPageEnumerator=_surveyPageEnumerator;
@property(nonatomic) double noUtteranceIntervalTimeout; // @synthesize noUtteranceIntervalTimeout=_noUtteranceIntervalTimeout;
@property(retain, nonatomic) NSTimer *firstUtteranceTimer; // @synthesize firstUtteranceTimer=_firstUtteranceTimer;
@property(retain, nonatomic) id <SPTVoiceLibrarySession> voiceSession; // @synthesize voiceSession=_voiceSession;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTPodcastUtteranceSurveyLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTPodcastUtteranceSurveyPageModel *currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) __weak id <SPTPodcastUtteranceSurveyViewModelViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) __weak id <SPTPodcastUtteranceSurveyViewModelPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate=_presenterDelegate;
- (void).cxx_destruct;
- (void)timerFired;
- (void)scheduleFirstUtteranceTimer;
- (void)cancelFirstUtteranceTimer;
- (void)nextPage;
- (void)dismissButtonTapped;
- (void)microphoneButtonTapped;
- (void)startButtonTapped;
- (void)slateDidAppear;
- (void)voiceSessionDidStopListening:(id)arg1;
- (void)voiceSessionDidStartListening:(id)arg1;
- (void)voiceSession:(id)arg1 didUpdateIntermediateResponse:(id)arg2;
- (id)createSurveyPages;
- (id)initWithLocalSettings:(id)arg1 logger:(id)arg2 voiceSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

