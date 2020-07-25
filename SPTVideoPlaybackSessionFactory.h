//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMAVFactory, BMDRMManager, NSArray, SPTVideoApplicationStateObservable, SPTVideoCDNSelector, SPTVideoPlayerSource;
@protocol BMChunkCache, BMConnectionModeObservable, BMDataLoader, BMKVOControllerFactory, BMPlayerConfiguration, SPTNotificationCenter, SPTVideoMediaExtension, SPTVideoPlaybackErrorFormatter;

@interface SPTVideoPlaybackSessionFactory : NSObject
{
    SPTVideoCDNSelector *_cdnSelector;
    SPTVideoPlayerSource *_playerSource;
    id <BMPlayerConfiguration> _playerConfiguration;
    id <BMKVOControllerFactory> _kvoControllerFactory;
    id <BMConnectionModeObservable> _connectionModeObservable;
    id <SPTNotificationCenter> _notificationCenter;
    id <SPTVideoPlaybackErrorFormatter> _videoPlaybackErrorFormatter;
    SPTVideoApplicationStateObservable *_appStateObservable;
    BMAVFactory *_avFactory;
    NSArray *_eventObserverFactories;
    id <BMDataLoader> _dataLoader;
    id <BMChunkCache> _videoChunkCache;
    id <SPTVideoMediaExtension> _spotifyVideoMediaExtension;
    BMDRMManager *_drmManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BMDRMManager *drmManager; // @synthesize drmManager=_drmManager;
@property(retain, nonatomic) id <SPTVideoMediaExtension> spotifyVideoMediaExtension; // @synthesize spotifyVideoMediaExtension=_spotifyVideoMediaExtension;
@property(retain, nonatomic) id <BMChunkCache> videoChunkCache; // @synthesize videoChunkCache=_videoChunkCache;
@property(retain, nonatomic) id <BMDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) NSArray *eventObserverFactories; // @synthesize eventObserverFactories=_eventObserverFactories;
@property(retain, nonatomic) BMAVFactory *avFactory; // @synthesize avFactory=_avFactory;
@property(retain, nonatomic) SPTVideoApplicationStateObservable *appStateObservable; // @synthesize appStateObservable=_appStateObservable;
@property(retain, nonatomic) id <SPTVideoPlaybackErrorFormatter> videoPlaybackErrorFormatter; // @synthesize videoPlaybackErrorFormatter=_videoPlaybackErrorFormatter;
@property(retain, nonatomic) id <SPTNotificationCenter> notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) id <BMConnectionModeObservable> connectionModeObservable; // @synthesize connectionModeObservable=_connectionModeObservable;
@property(retain, nonatomic) id <BMKVOControllerFactory> kvoControllerFactory; // @synthesize kvoControllerFactory=_kvoControllerFactory;
@property(retain, nonatomic) id <BMPlayerConfiguration> playerConfiguration; // @synthesize playerConfiguration=_playerConfiguration;
@property(retain, nonatomic) SPTVideoPlayerSource *playerSource; // @synthesize playerSource=_playerSource;
@property(retain, nonatomic) SPTVideoCDNSelector *cdnSelector; // @synthesize cdnSelector=_cdnSelector;
- (id)createSessionWithPlaybackIdentity:(id)arg1 options:(id)arg2 playerSource:(id)arg3;
- (id)initWithCDNSelector:(id)arg1 connectionModeObservable:(id)arg2 playerConfiguration:(id)arg3 kvoControllerFactory:(id)arg4 notificationCenter:(id)arg5 videoPlaybackErrorFormatter:(id)arg6 playerSource:(id)arg7 appStateObservable:(id)arg8 avFactory:(id)arg9 eventObserverFactories:(id)arg10 dataLoader:(id)arg11 videoChunkCache:(id)arg12 spotifyVideoMediaExtension:(id)arg13 drmManager:(id)arg14;

@end

