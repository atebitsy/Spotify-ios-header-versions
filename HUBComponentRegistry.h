//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentChildDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary;
@protocol HUBComponentFallbackHandler;

@interface HUBComponentRegistry : NSObject <HUBComponentChildDelegate>
{
    id <HUBComponentFallbackHandler> _fallbackHandler;
    NSMutableDictionary *_internalRegistry;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *internalRegistry; // @synthesize internalRegistry=_internalRegistry;
@property(retain, nonatomic) id <HUBComponentFallbackHandler> fallbackHandler; // @synthesize fallbackHandler=_fallbackHandler;
- (id)component:(id)arg1 childComponentForModel:(id)arg2;
- (void)unregisterComponentsForNamespace:(id)arg1;
- (void)registerComponents:(id)arg1 forNamespace:(id)arg2;
- (id)componentForModel:(id)arg1;
- (id)initWithFallbackHandler:(id)arg1;
@property(readonly, nonatomic) NSDictionary *registeredComponents;

@end

