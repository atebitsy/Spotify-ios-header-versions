//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SPTAppProtocolCallForwarder : NSObject
{
    NSMutableDictionary *_externalHandlers;
}

@property(readonly, nonatomic) NSMutableDictionary *externalHandlers; // @synthesize externalHandlers=_externalHandlers;
- (void).cxx_destruct;
- (id)externalHandlerFor:(id)arg1;
- (void)unregisterExternalHandler:(id)arg1;
- (void)registerExternalHandler:(id)arg1;
- (void)setUpdatesForTopic:(id)arg1 updates:(CDUnknownBlockType)arg2;
- (void)onTopicRegistration:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)forwardCallWithMethodNamed:(id)arg1 sourceMessage:(id)arg2 andReply:(CDUnknownBlockType)arg3;
- (_Bool)shouldForwardMethod:(id)arg1;
- (id)init;

@end

