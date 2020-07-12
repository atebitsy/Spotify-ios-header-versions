//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBImageLoader-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"

@class NSString;
@protocol HUBImageLoaderDelegate, SPTImageLoader;

@interface SPTHubImageLoader : NSObject <SPTImageLoaderDelegate, HUBImageLoader>
{
    id <HUBImageLoaderDelegate> _delegate;
    id <SPTImageLoader> _imageLoader;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(nonatomic) __weak id <HUBImageLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)loadImageForURL:(id)arg1 targetSize:(struct CGSize)arg2 context:(id)arg3;
- (id)initWithImageLoader:(id)arg1 imageLoadingLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

