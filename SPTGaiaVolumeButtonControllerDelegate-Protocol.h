//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, SPTGaiaVolumeButtonController;

@protocol SPTGaiaVolumeButtonControllerDelegate <NSObject>
@property(readonly, nonatomic) NSNumber *currentVolume;
- (_Bool)lockScreenVolumeControlsShouldBeActive;
- (_Bool)lockScreenVolumeControlsFeatureEnabled;
- (void)requestVolumeChange:(float)arg1;
- (float)volumeButtonControllerDidStealVolumeDown:(SPTGaiaVolumeButtonController *)arg1;
- (float)volumeButtonControllerDidStealVolumeUp:(SPTGaiaVolumeButtonController *)arg1;
@end

