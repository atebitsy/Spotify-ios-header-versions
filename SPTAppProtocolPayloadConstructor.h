//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTAppProtocolPayloadConstructor : NSObject
{
}

+ (unsigned long long)playbackSpeedForPlayerState:(id)arg1;
+ (long long)thumbStateForPlayerState:(id)arg1 withRadioController:(id)arg2;
+ (id)sectionTitleStringForSectionKey:(id)arg1;
+ (id)constructCrossfadeStatePayloadWithPreferences:(id)arg1;
+ (id)constructSessionStatePayloadWithSession:(id)arg1 networkConnectivityController:(id)arg2;
+ (id)repeatPayloadFromPlayerState:(id)arg1;
+ (id)playbackOptionsPayloadFromPlayerState:(id)arg1;
+ (id)playbackRestrictionsPayloadFromPlayerState:(id)arg1;
+ (id)propertyListRepresentationOfItems:(id)arg1 inRange:(struct _NSRange)arg2 ofTotalLength:(unsigned long long)arg3 playbackController:(id)arg4;
+ (id)searchSectionItemForTitle:(id)arg1 identifier:(id)arg2 children:(id)arg3 playbackController:(id)arg4;
+ (id)constructSearchPayloadFromSearchContent:(id)arg1 playbackController:(id)arg2;
+ (id)playerQueueItemPayloadFromPlayerTrack:(id)arg1;
+ (id)constructPlayerQueuePayloadFromPlayerQueue:(id)arg1;
+ (id)constructPlayQueuePayloadFromPlayQueue:(id)arg1 playbackController:(id)arg2;
+ (id)constructGetSavedPayloadWithURI:(id)arg1 saved:(_Bool)arg2 canSave:(_Bool)arg3;
+ (id)currentRepresentationOfUserCapabilitiesCanPlayOnDemand:(_Bool)arg1;
+ (id)notificationMessagePayloadFromNotificationMessage:(id)arg1;
+ (_Bool)shouldShowChildrenOfItem:(id)arg1 playable:(_Bool)arg2;
+ (id)listItemPayloadOfContentItem:(id)arg1 playable:(_Bool)arg2;
+ (id)currentContextPayloadFromPlayerState:(id)arg1;
+ (id)trackElapsedPayloadFromPlayerState:(id)arg1;
+ (id)trackPayloadFromPlayerState:(id)arg1 canStartRadio:(_Bool)arg2 canThumbContent:(_Bool)arg3 thumbedStatus:(long long)arg4 canSave:(_Bool)arg5 currentTrackIsSaved:(_Bool)arg6;
+ (id)playerStatePayloadFromPlayerState:(id)arg1 currentTrackIsSaved:(_Bool)arg2 isPlayingRemotely:(_Bool)arg3 remoteDeviceID:(id)arg4 fromTokenLostEvent:(_Bool)arg5;

@end

