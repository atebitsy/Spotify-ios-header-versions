//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventFactoryLocation, SPTUBIInteractionEvent, SPTUBIMobileAssistedCuration_CardContainer_CardEventFactory, SPTUBIMobileAssistedCuration_CardContainer_CardNavigatorEventFactory;

@protocol SPTUBIMobileAssistedCuration_CardContainerEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)swipeRightUiReveal;
- (id <SPTUBIInteractionEvent>)swipeLeftUiReveal;
- (id <SPTUBIMobileAssistedCuration_CardContainer_CardEventFactory>)cardFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2;
- (id <SPTUBIMobileAssistedCuration_CardContainer_CardNavigatorEventFactory>)cardNavigatorFactoryWithPosition:(long long)arg1;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

