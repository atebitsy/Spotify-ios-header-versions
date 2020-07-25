//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningLogger-Protocol.h"

@class NSString;
@protocol SPTLogCenter, SPTUBILogger, SPTUBIMobileSocialListeningEventFactory, SPTUBIMobileSocialListeningParticipantsEventFactory;

@interface SPTSocialListeningLoggerImplementation : NSObject <SPTSocialListeningLogger>
{
    id <SPTLogCenter> _logCenter;
    id <SPTUBIMobileSocialListeningEventFactory> _eventFactory;
    id <SPTUBIMobileSocialListeningParticipantsEventFactory> _participantsEventFactory;
    id <SPTUBILogger> _ubiLogger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(retain, nonatomic) id <SPTUBIMobileSocialListeningParticipantsEventFactory> participantsEventFactory; // @synthesize participantsEventFactory=_participantsEventFactory;
@property(retain, nonatomic) id <SPTUBIMobileSocialListeningEventFactory> eventFactory; // @synthesize eventFactory=_eventFactory;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void)logUIImpressionWithSectionId:(id)arg1 index:(long long)arg2 renderType:(id)arg3;
- (void)logUIInteractionWithSectionId:(id)arg1 itemIndex:(long long)arg2 targetURI:(id)arg3 interactionType:(id)arg4 userIntent:(id)arg5 action:(id)arg6;
- (void)logJoinFromDeepLinkWithURL:(id)arg1;
- (void)logJoinFromScannableWithURL:(id)arg1;
- (void)logJoinFromSearchWithURL:(id)arg1;
- (void)logParticipantListImpression;
- (void)logConfirmLeaveSessionCancelButtonTapped;
- (void)logConfirmLeaveSessionConfirmButtonTapped;
- (void)logConfirmEndSessionCancelButtonTappedFromScreen:(unsigned long long)arg1;
- (void)logConfirmEndSessionEndButtonTappedFromScreen:(unsigned long long)arg1;
- (void)logEndSessionButtonTapped;
- (void)logLeaveSessionButtonTapped;
- (void)logUIInteractionLeaveSessionButtonTapped;
- (void)logShareCodeButtonTapped;
- (void)logFacepileTapped;
- (void)logScanCodeButtonTapped;
- (void)logTryAgainButtonTapped;
- (void)logLeaveSessionButtonTapped:(long long)arg1 profileURL:(id)arg2;
- (void)logEndSessionButtonTapped:(long long)arg1 profileURL:(id)arg2;
- (void)logUserProfileTapped:(long long)arg1 profileURL:(id)arg2;
- (id)initWithLogCenter:(id)arg1 eventFactory:(id)arg2 participantsEventFactory:(id)arg3 ubiLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

