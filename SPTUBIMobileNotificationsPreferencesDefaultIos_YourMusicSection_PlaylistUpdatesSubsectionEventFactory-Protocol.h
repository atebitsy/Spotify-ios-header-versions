//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_PlaylistUpdatesSubsection_EmailNotificationEventFactory, SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_PlaylistUpdatesSubsection_PushNotificationEventFactory;

@protocol SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_PlaylistUpdatesSubsectionEventFactory <NSObject>
- (id <SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_PlaylistUpdatesSubsection_EmailNotificationEventFactory>)emailNotificationFactory;
- (id <SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_PlaylistUpdatesSubsection_PushNotificationEventFactory>)pushNotificationFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

