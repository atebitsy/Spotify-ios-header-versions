//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventLocation, SPTUBIMobileScannables_CameraDisallowedPermissionDialog_CancelButtonEventFactory, SPTUBIMobileScannables_CameraDisallowedPermissionDialog_GoToSettingsButtonEventFactory;

@protocol SPTUBIMobileScannables_CameraDisallowedPermissionDialogEventFactory <NSObject>
- (id <SPTUBIMobileScannables_CameraDisallowedPermissionDialog_CancelButtonEventFactory>)cancelButtonFactory;
- (id <SPTUBIMobileScannables_CameraDisallowedPermissionDialog_GoToSettingsButtonEventFactory>)goToSettingsButtonFactory;
- (id <SPTUBIEventLocation>)_location;
@end

