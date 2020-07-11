//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileSocialListeningEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileSocialListeningEventFactoryImplementation : NSObject <SPTUBIMobileSocialListeningEventFactory>
{
    NSArray *_components;
}

+ (id)factory;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)confirmEndSessionDialogFactory;
- (id)leaveSessionButtonFactory;
- (id)endSessionButtonFactory;
- (id)shareLinkButtonFactory;
- (id)joinButtonFactory;
- (id)retryButtonFactory;
- (id)facepileFactory;
- (id)_location;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

