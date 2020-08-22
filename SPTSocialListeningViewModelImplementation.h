//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningDialogPresenterObserver-Protocol.h"
#import "SPTSocialListeningModelObserver-Protocol.h"
#import "SPTSocialListeningViewModel-Protocol.h"

@class NSArray, NSString, NSURL, SPTObserverManager, SPTSocialListeningDialogPresenter, UIColor, UIImage;
@protocol SPTLinkDispatcher, SPTProfileUserData, SPTShareEntityData, SPTShareEntityDataFactory, SPTShareFeature, SPTSocialListeningListenTogetherStateManager, SPTSocialListeningModel, SPTSocialListeningTestManager;

@interface SPTSocialListeningViewModelImplementation : NSObject <SPTSocialListeningDialogPresenterObserver, SPTSocialListeningViewModel, SPTSocialListeningModelObserver>
{
    _Bool _isSessionHost;
    id <SPTSocialListeningTestManager> _testManager;
    id <SPTSocialListeningListenTogetherStateManager> _listenTogetherStateManager;
    SPTObserverManager *_observers;
    id <SPTSocialListeningModel> _model;
    id <SPTShareFeature> _shareFeature;
    SPTSocialListeningDialogPresenter *_dialogPresenter;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTShareEntityDataFactory> _shareEntityDataFactory;
    id <SPTProfileUserData> _currentUserData;
    NSURL *_currentSessionURL;
    UIImage *_scannablesImage;
    UIColor *_sessionColor;
    NSArray *_users;
    unsigned long long _numberOfVisibleUsers;
    unsigned long long _numberOfOverflowUsers;
    unsigned long long _numberOfUsers;
    unsigned long long _maxNumberOfUsers;
    unsigned long long _participantListHeight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSessionHost; // @synthesize isSessionHost=_isSessionHost;
@property(nonatomic) unsigned long long participantListHeight; // @synthesize participantListHeight=_participantListHeight;
@property(nonatomic) unsigned long long maxNumberOfUsers; // @synthesize maxNumberOfUsers=_maxNumberOfUsers;
@property(nonatomic) unsigned long long numberOfUsers; // @synthesize numberOfUsers=_numberOfUsers;
@property(nonatomic) unsigned long long numberOfOverflowUsers; // @synthesize numberOfOverflowUsers=_numberOfOverflowUsers;
@property(nonatomic) unsigned long long numberOfVisibleUsers; // @synthesize numberOfVisibleUsers=_numberOfVisibleUsers;
@property(copy, nonatomic) NSArray *users; // @synthesize users=_users;
@property(copy, nonatomic) UIColor *sessionColor; // @synthesize sessionColor=_sessionColor;
@property(copy, nonatomic) UIImage *scannablesImage; // @synthesize scannablesImage=_scannablesImage;
@property(copy, nonatomic) NSURL *currentSessionURL; // @synthesize currentSessionURL=_currentSessionURL;
@property(readonly, nonatomic) id <SPTProfileUserData> currentUserData; // @synthesize currentUserData=_currentUserData;
@property(readonly, nonatomic) id <SPTShareEntityDataFactory> shareEntityDataFactory; // @synthesize shareEntityDataFactory=_shareEntityDataFactory;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTSocialListeningDialogPresenter *dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
@property(readonly, nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(retain, nonatomic) id <SPTSocialListeningModel> model; // @synthesize model=_model;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTSocialListeningListenTogetherStateManager> listenTogetherStateManager; // @synthesize listenTogetherStateManager=_listenTogetherStateManager;
@property(readonly, nonatomic) id <SPTSocialListeningTestManager> testManager; // @synthesize testManager=_testManager;
- (_Bool)isNewUIExperienceScannableEnabled;
- (_Bool)isNewUIExperienceEnabled;
- (void)presenter:(id)arg1 didSelectSessionMode:(long long)arg2 forJoinURL:(id)arg3;
- (void)presenterDidConfirmLeaveSession:(id)arg1;
- (void)presenterDidConfirmDeleteSession:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)socialListeningModel:(id)arg1 didDeleteSession:(id)arg2;
- (void)socialListeningModel:(id)arg1 didReceiveError:(id)arg2;
- (void)socialListeningModel:(id)arg1 updatedSession:(id)arg2 updateEvent:(id)arg3;
- (void)navigateToUserProfilePage:(id)arg1;
- (void)leaveOrDeleteSessionFromScreen:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *shareDestinations;
@property(readonly, nonatomic) id <SPTShareEntityData> shareEntityData;
@property(readonly, nonatomic) _Bool facepileDimmingHidden;
@property(readonly, copy, nonatomic) NSString *participantsNavigationBarTitle;
@property(readonly, copy, nonatomic) NSString *leaveButtonText;
@property(readonly, copy, nonatomic) NSString *descriptionLabelText;
@property(readonly, copy, nonatomic) NSString *headerLabelText;
@property(readonly, nonatomic, getter=isListenTogetherSessionActiveIndicatorVisible) _Bool listenTogetherSessionActiveIndicatorVisible;
@property(readonly, nonatomic, getter=isParticipantsInviteBarButtonVisible) _Bool participantsInviteBarButtonVisible;
@property(readonly, nonatomic) unsigned long long bottomBannerType;
@property(readonly, nonatomic) _Bool seeListenersButtonHidden;
@property(readonly, nonatomic) _Bool shareLinkButtonHidden;
@property(readonly, nonatomic) _Bool scanCodeButtonHidden;
@property(readonly, nonatomic) _Bool sessionButtonHidden;
@property(readonly, nonatomic) _Bool leaveButtonHidden;
@property(readonly, nonatomic) _Bool privacyDisclaimerLabelHidden;
@property(readonly, nonatomic) _Bool tryAgainViewHidden;
@property(readonly, copy, nonatomic) NSString *tryAgainLabelText;
@property(readonly, nonatomic) _Bool scannablesImageHidden;
@property(readonly, nonatomic) _Bool scannableViewHidden;
@property(readonly, nonatomic) long long state;
- (void)loadScannable;
- (void)load;
- (id)initWithModel:(id)arg1 shareFeature:(id)arg2 dialogPresenter:(id)arg3 linkDispatcher:(id)arg4 testManager:(id)arg5 stateManager:(id)arg6 currentUserData:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

