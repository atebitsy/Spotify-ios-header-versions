//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, SPTCarPlayFeatureProperties, SPTCarPlayGradientImageBuilder;
@protocol SPTExternalIntegrationPlaybackController, SPTImageLoaderFactory;

@interface SPTCarPlayContentItemBuilder : NSObject
{
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    SPTCarPlayFeatureProperties *_properties;
    SPTCarPlayGradientImageBuilder *_imageBuilder;
    NSCache *_iconCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSCache *iconCache; // @synthesize iconCache=_iconCache;
@property(retain, nonatomic) SPTCarPlayGradientImageBuilder *imageBuilder; // @synthesize imageBuilder=_imageBuilder;
@property(retain, nonatomic) SPTCarPlayFeatureProperties *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
- (id)contentItemFromExternalIntegrationContent:(id)arg1 withIsPlayable:(_Bool)arg2;
- (id)contentItemFromExternalIntegrationContent:(id)arg1;
- (id)continuePlayingContentItemWithSubtitle:(id)arg1;
- (id)errorIsOfflineContentItem;
- (id)errorContentItem;
- (id)emptyListContentItemOfParent:(id)arg1;
- (id)shuffleContentItemOfParent:(id)arg1;
- (id)initWithPlaybackController:(id)arg1 imageLoaderFactory:(id)arg2 properties:(id)arg3;

@end

