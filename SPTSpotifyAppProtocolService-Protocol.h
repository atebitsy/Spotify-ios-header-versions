//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@protocol SPTAppProtocolExternalHandler;

@protocol SPTSpotifyAppProtocolService <SPTService>
- (void)unregisterExternalHandler:(id <SPTAppProtocolExternalHandler>)arg1;
- (void)registerExternalHandler:(id <SPTAppProtocolExternalHandler>)arg1;
@end

