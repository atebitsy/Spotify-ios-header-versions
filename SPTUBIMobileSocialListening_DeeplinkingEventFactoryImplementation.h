//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileSocialListening_DeeplinkingEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileSocialListening_DeeplinkingEventFactoryImplementation : NSObject <SPTUBIMobileSocialListening_DeeplinkingEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithUri:(id)arg1 components:(id)arg2;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)hitJoinSocialListeningSession;
- (id)_location;
- (id)initWithUri:(id)arg1 components:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

