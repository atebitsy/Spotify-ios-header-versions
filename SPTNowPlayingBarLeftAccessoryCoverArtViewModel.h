//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingBarModelObserver-Protocol.h"

@class NSString, NSURL, SPTNowPlayingBarModel;
@protocol SPTNowPlayingBarLeftAccessoryCoverArtViewModelDelegate;

@interface SPTNowPlayingBarLeftAccessoryCoverArtViewModel : NSObject <SPTNowPlayingBarModelObserver>
{
    id <SPTNowPlayingBarLeftAccessoryCoverArtViewModelDelegate> _delegate;
    SPTNowPlayingBarModel *_nowPlayingBarModel;
    NSURL *_currentImageURL;
}

@property(retain, nonatomic) NSURL *currentImageURL; // @synthesize currentImageURL=_currentImageURL;
@property(readonly, nonatomic) SPTNowPlayingBarModel *nowPlayingBarModel; // @synthesize nowPlayingBarModel=_nowPlayingBarModel;
@property(nonatomic) __weak id <SPTNowPlayingBarLeftAccessoryCoverArtViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadImage;
- (void)nowPlayingBarModelDidUpdateTrackMetaData:(id)arg1;
- (id)initWithNowPlayingBarModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

