//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSURL;
@protocol _TtP17OfflineMixFeature36SPTOfflineMixDownloadManagerObserver_;

@protocol _TtP17OfflineMixFeature28SPTOfflineMixDownloadManager_
- (void)changeOfflineStateFor:(NSURL *)arg1;
- (unsigned long long)offlineStateOf:(NSURL *)arg1;
- (_Bool)isAvailableOffline:(NSURL *)arg1;
- (void)remove:(NSURL *)arg1;
- (void)download:(NSURL *)arg1;
- (void)removeObserver:(id <_TtP17OfflineMixFeature36SPTOfflineMixDownloadManagerObserver_>)arg1;
- (void)removeObserver:(id <_TtP17OfflineMixFeature36SPTOfflineMixDownloadManagerObserver_>)arg1 forTrack:(NSURL *)arg2;
- (void)addObserver:(id <_TtP17OfflineMixFeature36SPTOfflineMixDownloadManagerObserver_>)arg1 forTrack:(NSURL *)arg2;
@end

