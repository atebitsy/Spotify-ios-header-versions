//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessagePreviewViewModelObserver-Protocol.h"

@class NSString, SPTInAppMessageActionFactory, SPTInAppMessageCardMessageParser, SPTInAppMessageCardMessagePresentationController, SPTInAppMessageCardMessageViewModel;
@protocol SPTAlertInterface, SPTCarDetector, SPTOfflineModeState, SPTSlateBuilderProvider, SPTSlateManager;

@interface SPTInAppMessagePreviewCardMessageController : NSObject <SPTInAppMessagePreviewViewModelObserver>
{
    SPTInAppMessageCardMessageParser *_cardMessageParser;
    id <SPTSlateManager> _slateManager;
    id <SPTSlateBuilderProvider> _slateBuilderProvider;
    SPTInAppMessageActionFactory *_actionFactory;
    id <SPTCarDetector> _carDetector;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTAlertInterface> _alertInterface;
    SPTInAppMessageCardMessageViewModel *_cardMessageViewModel;
    SPTInAppMessageCardMessagePresentationController *_cardMessagePresentationController;
}

@property(retain, nonatomic) SPTInAppMessageCardMessagePresentationController *cardMessagePresentationController; // @synthesize cardMessagePresentationController=_cardMessagePresentationController;
@property(retain, nonatomic) SPTInAppMessageCardMessageViewModel *cardMessageViewModel; // @synthesize cardMessageViewModel=_cardMessageViewModel;
@property(retain, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) id <SPTCarDetector> carDetector; // @synthesize carDetector=_carDetector;
@property(retain, nonatomic) SPTInAppMessageActionFactory *actionFactory; // @synthesize actionFactory=_actionFactory;
@property(retain, nonatomic) id <SPTSlateBuilderProvider> slateBuilderProvider; // @synthesize slateBuilderProvider=_slateBuilderProvider;
@property(retain, nonatomic) id <SPTSlateManager> slateManager; // @synthesize slateManager=_slateManager;
@property(retain, nonatomic) SPTInAppMessageCardMessageParser *cardMessageParser; // @synthesize cardMessageParser=_cardMessageParser;
- (void).cxx_destruct;
- (void)presentMessage:(id)arg1;
- (void)previewViewModel:(id)arg1 didFetchCardCreativeData:(id)arg2;
- (id)initWithCardMessageParser:(id)arg1 slateManager:(id)arg2 slateBuilderProvider:(id)arg3 actionFactory:(id)arg4 carDetector:(id)arg5 offlineModeState:(id)arg6 alertInterface:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

