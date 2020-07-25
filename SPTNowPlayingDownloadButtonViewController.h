//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTEncoreDownloadButtonDelegate-Protocol.h"
#import "SPTNowPlayingModelObserver-Protocol.h"
#import "_TtP17OfflineMixFeature36SPTOfflineMixDownloadManagerObserver_-Protocol.h"

@class NSString, SPTEncoreDownloadButton, SPTNowPlayingModel;
@protocol SPTEncoreDownloadButtonFactory, _TtP17OfflineMixFeature24SPTOfflineMixTestManager_, _TtP17OfflineMixFeature28SPTOfflineMixDownloadManager_;

@interface SPTNowPlayingDownloadButtonViewController : UIViewController <SPTNowPlayingModelObserver, SPTEncoreDownloadButtonDelegate, _TtP17OfflineMixFeature36SPTOfflineMixDownloadManagerObserver_>
{
    id <SPTEncoreDownloadButtonFactory> _downloadButtonFactory;
    id <_TtP17OfflineMixFeature24SPTOfflineMixTestManager_> _offlineMixTestManager;
    SPTNowPlayingModel *_model;
    id <_TtP17OfflineMixFeature28SPTOfflineMixDownloadManager_> _downloadManager;
    SPTEncoreDownloadButton *_downloadButton;
    unsigned long long _offlineState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long offlineState; // @synthesize offlineState=_offlineState;
@property(retain, nonatomic) SPTEncoreDownloadButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(readonly, nonatomic) id <_TtP17OfflineMixFeature28SPTOfflineMixDownloadManager_> downloadManager; // @synthesize downloadManager=_downloadManager;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) id <_TtP17OfflineMixFeature24SPTOfflineMixTestManager_> offlineMixTestManager; // @synthesize offlineMixTestManager=_offlineMixTestManager;
@property(readonly, nonatomic) id <SPTEncoreDownloadButtonFactory> downloadButtonFactory; // @synthesize downloadButtonFactory=_downloadButtonFactory;
- (void)updateOfflineMixDownloadManagerWithNowPlayingModel:(id)arg1 trackDidChange:(_Bool)arg2;
- (void)updateWithNowPlayingModel:(id)arg1 trackDidChange:(_Bool)arg2;
- (long long)currentIconDownloadState;
- (void)updateDownloadButton;
- (void)toggleDownloadButton;
- (void)downloadButtonTappedWithSender:(id)arg1;
- (void)downloadButtonTapped:(id)arg1;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)stateChangedTo:(unsigned long long)arg1 forURI:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithNowPlayingModel:(id)arg1 offlineMixTestManager:(id)arg2 downloadButtonFactory:(id)arg3 downloadManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
