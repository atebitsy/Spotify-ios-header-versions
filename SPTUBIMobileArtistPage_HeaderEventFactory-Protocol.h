//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileArtistPage_Header_ShufflePlayButtonEventFactory, SPTUBIMobileArtistPage_Header_TopBarEventFactory;

@protocol SPTUBIMobileArtistPage_HeaderEventFactory <NSObject>
- (id <SPTUBIMobileArtistPage_Header_ShufflePlayButtonEventFactory>)shufflePlayButtonFactoryWithIdentifier:(NSString *)arg1;
- (id <SPTUBIMobileArtistPage_Header_TopBarEventFactory>)topBarFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
