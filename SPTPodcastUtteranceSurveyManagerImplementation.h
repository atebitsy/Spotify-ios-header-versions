//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastUtteranceSurveyManager-Protocol.h"

@class NSString, SPTPodcastUtteranceSurveyPresenter, SPTPodcastUtteranceSurveyTestManager;
@protocol SPTLocalSettings;

@interface SPTPodcastUtteranceSurveyManagerImplementation : NSObject <SPTPodcastUtteranceSurveyManager>
{
    SPTPodcastUtteranceSurveyTestManager *_testManager;
    SPTPodcastUtteranceSurveyPresenter *_presenter;
    id <SPTLocalSettings> _localSettings;
}

@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTPodcastUtteranceSurveyPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) SPTPodcastUtteranceSurveyTestManager *testManager; // @synthesize testManager=_testManager;
- (void).cxx_destruct;
- (void)presentSurvey;
- (_Bool)shouldDisplaySurveyForPageURI:(id)arg1;
- (id)initWithLocalSettings:(id)arg1 testManager:(id)arg2 presenter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

