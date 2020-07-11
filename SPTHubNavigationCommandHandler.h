//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@protocol SPTHubInteractionLogger, SPTLinkDispatcher, SPTUserBehaviourHubsInstrumentation;

@interface SPTHubNavigationCommandHandler : NSObject <HUBCommandHandler>
{
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTHubInteractionLogger> _interactionLogger;
    id <SPTUserBehaviourHubsInstrumentation> _ubiHubsInstrumentation;
}

@property(retain, nonatomic) id <SPTUserBehaviourHubsInstrumentation> ubiHubsInstrumentation; // @synthesize ubiHubsInstrumentation=_ubiHubsInstrumentation;
@property(readonly, nonatomic) id <SPTHubInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithLinkDispatcher:(id)arg1 interactionLogger:(id)arg2 ubiHubsInstrumentation:(id)arg3;

@end
