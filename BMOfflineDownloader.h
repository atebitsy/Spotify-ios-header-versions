//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAssetDownloadDelegate-Protocol.h"

@class AVAssetDownloadURLSession, NSMutableDictionary, NSString;
@protocol BMOfflineDownloaderDelegate;

@interface BMOfflineDownloader : NSObject <AVAssetDownloadDelegate>
{
    id <BMOfflineDownloaderDelegate> _delegate;
    AVAssetDownloadURLSession *_assetDownloadURLSession;
    NSMutableDictionary *_activeDownloads;
    NSMutableDictionary *_relativeDownloadLocations;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *relativeDownloadLocations; // @synthesize relativeDownloadLocations=_relativeDownloadLocations;
@property(retain, nonatomic) NSMutableDictionary *activeDownloads; // @synthesize activeDownloads=_activeDownloads;
@property(retain, nonatomic) AVAssetDownloadURLSession *assetDownloadURLSession; // @synthesize assetDownloadURLSession=_assetDownloadURLSession;
@property(nonatomic) __weak id <BMOfflineDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_3c1748cc)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_3c1748cc)arg5;
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (id)getMediaURLsForActiveDownloads;
- (_Bool)isDownloadingContentFromMediaURL:(id)arg1;
- (void)downloadContentFromMediaURL:(id)arg1 withTitle:(id)arg2 artworkData:(id)arg3 minimumBitrateInBPS:(id)arg4;
- (void)cleanupActiveDownloadTasks;
- (id)initWithAVFactory:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

