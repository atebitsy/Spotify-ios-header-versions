//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_PlaylistUpdatesSubsectionEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_PlaylistUpdatesSubsectionEventFactoryImplementation : NSObject <SPTUBIMobileNotificationsPreferencesDefaultIos_YourMusicSection_PlaylistUpdatesSubsectionEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithComponents:(id)arg1;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)emailNotificationFactory;
- (id)pushNotificationFactory;
- (id)_location;
- (id)initWithComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

