//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventLocation, SPTUBIMobileSearch_ContentEventFactory, SPTUBIMobileSearch_SearchBarEventFactory, SPTUBIMobileSearch_VoiceButtonEventFactory;

@protocol SPTUBIMobileSearchEventFactory <NSObject>
- (id <SPTUBIMobileSearch_VoiceButtonEventFactory>)voiceButtonFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobileSearch_ContentEventFactory>)contentFactory;
- (id <SPTUBIMobileSearch_SearchBarEventFactory>)searchBarFactory;
- (id <SPTUBIEventLocation>)_location;
@end

