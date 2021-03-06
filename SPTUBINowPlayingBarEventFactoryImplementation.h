//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBINowPlayingBarEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBINowPlayingBarEventFactoryImplementation : NSObject <SPTUBINowPlayingBarEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPageIdentifier:(id)arg1 pageUri:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)hitUiReveal;
- (id)swipeSkipToNextWithItemToBeSkipped:(id)arg1;
- (id)swipeSkipToPreviousWithItemToBeSkipped:(id)arg1;
- (id)swipeUiReveal;
- (id)heartButtonFactory;
- (id)playButtonFactory;
- (id)_location;
- (id)initWithPageIdentifier:(id)arg1 pageUri:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

