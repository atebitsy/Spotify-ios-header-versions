//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventLocation, SPTUBIMobileConnectVolumeControl_RemoteVolumeOverlayEventFactory, SPTUBIMobileConnectVolumeControl_SystemVolumeDownEventFactory, SPTUBIMobileConnectVolumeControl_SystemVolumeSliderEventFactory, SPTUBIMobileConnectVolumeControl_SystemVolumeUpEventFactory, SPTUBIMobileConnectVolumeControl_VolumeSliderEventFactory;

@protocol SPTUBIMobileConnectVolumeControlEventFactory <NSObject>
- (id <SPTUBIMobileConnectVolumeControl_SystemVolumeDownEventFactory>)systemVolumeDownFactory;
- (id <SPTUBIMobileConnectVolumeControl_SystemVolumeUpEventFactory>)systemVolumeUpFactory;
- (id <SPTUBIMobileConnectVolumeControl_SystemVolumeSliderEventFactory>)systemVolumeSliderFactory;
- (id <SPTUBIMobileConnectVolumeControl_VolumeSliderEventFactory>)volumeSliderFactory;
- (id <SPTUBIMobileConnectVolumeControl_RemoteVolumeOverlayEventFactory>)remoteVolumeOverlayFactory;
- (id <SPTUBIEventLocation>)_location;
@end

