//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonAvailableEventFactory, SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonConnectedEventFactory, SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonConnectingEventFactory, SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonUnavailableEventFactory;

@protocol SPTUBIGAIAMobileConnectDevicesAvailableEventFactory <NSObject>
- (id <SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonConnectedEventFactory>)connectButtonConnectedFactory;
- (id <SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonConnectingEventFactory>)connectButtonConnectingFactory;
- (id <SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonAvailableEventFactory>)connectButtonAvailableFactory;
- (id <SPTUBIGAIAMobileConnectDevicesAvailable_ConnectButtonUnavailableEventFactory>)connectButtonUnavailableFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

