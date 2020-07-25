//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTEventSender, SPTLogCenter, SPTViewLogger;

@interface SPTFreeTierTasteOnboardingArtistSearchViewLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTEventSender> _eventSender;
    id <SPTViewLogger> _viewLogger;
    NSString *_sessionId;
    NSString *_featureIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
@property(readonly, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void)logViewDataDidCancel;
- (void)logViewDataDidLoad;
- (void)logViewDataDidFailToLoad;
- (void)logViewLoadingStarted;
- (void)logSearchInteractionWithIntent:(id)arg1 component:(id)arg2 targetUri:(id)arg3 searchSessionId:(id)arg4 interactionId:(id)arg5;
- (void)logSelectArtistInteractionWithIdentifier:(id)arg1 contentSource:(id)arg2 contentSourceUri:(id)arg3 section:(id)arg4 position:(unsigned long long)arg5 maxPosition:(unsigned long long)arg6 sequenceNumber:(unsigned long long)arg7 interactionId:(id)arg8;
- (void)logItemSelectionInteractionWithIdentifier:(id)arg1 position:(unsigned long long)arg2;
- (void)logItemImpressionWithIdentifier:(id)arg1 position:(unsigned long long)arg2;
- (void)logSearchSelectArtistInteractionWithTargetUri:(id)arg1 searchSessionId:(id)arg2 interactionId:(id)arg3 isExtendedSearchItem:(_Bool)arg4;
- (void)logBackButtonInteractionWithSearchSessionId:(id)arg1;
- (void)logClearButtonInteractionWithSearchSessionId:(id)arg1;
- (id)initWithLogCenter:(id)arg1 eventSender:(id)arg2 viewLogger:(id)arg3 sessionId:(id)arg4 featureIdentifier:(id)arg5;

@end

