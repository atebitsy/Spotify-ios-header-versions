//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTPlayerState, SPTPlayerTrack, UICollectionViewCell, UIViewController;
@protocol SPTNowPlayingContentLayerProvider, SPTNowPlayingContentLayerProviderDelegate;

@protocol SPTNowPlayingContentLayerProvider <NSObject>
- (_Bool)displaysFullScreenContentForTrack:(SPTPlayerTrack *)arg1;
- (_Bool)requiresOverlayForTrack:(SPTPlayerTrack *)arg1;
- (_Bool)isActiveForTrack:(SPTPlayerTrack *)arg1 playerState:(SPTPlayerState *)arg2;
- (void)configureCell:(UICollectionViewCell *)arg1 withTrack:(SPTPlayerTrack *)arg2 windowedContentInsets:(struct UIEdgeInsets)arg3 peekingDisallowed:(_Bool)arg4;
- (Class)cellClass;
- (NSString *)reuseIdentifier;
- (unsigned long long)contentType;

@optional
@property(nonatomic) __weak id <SPTNowPlayingContentLayerProviderDelegate> delegate;
- (void)setCell:(UICollectionViewCell *)arg1 expanded:(_Bool)arg2 insets:(struct UIEdgeInsets)arg3 forTrack:(SPTPlayerTrack *)arg4;
- (_Bool)canExpandForTrack:(SPTPlayerTrack *)arg1;
- (_Bool)canHideControlsForTrack:(SPTPlayerTrack *)arg1;
- (void)configurePlaceholderCell:(UICollectionViewCell *)arg1 windowedContentInsets:(struct UIEdgeInsets)arg2;
- (void)didSelectCell:(UICollectionViewCell *)arg1 withProvider:(id <SPTNowPlayingContentLayerProvider>)arg2 withTrack:(SPTPlayerTrack *)arg3 containerViewController:(UIViewController *)arg4;
- (void)didEndDisplayingCell:(UICollectionViewCell *)arg1 withTrack:(SPTPlayerTrack *)arg2 containerViewController:(UIViewController *)arg3;
- (void)willDisplayCell:(UICollectionViewCell *)arg1 withTrack:(SPTPlayerTrack *)arg2 containerViewController:(UIViewController *)arg3;
@end

