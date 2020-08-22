//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol GLUEImageLoader;

@interface SPTPodcastMixImageContainerView : UIView
{
    id <GLUEImageLoader> _imageLoader;
    unsigned long long _count;
    double _overlapWidth;
    NSArray *_imageViews;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) double overlapWidth; // @synthesize overlapWidth=_overlapWidth;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(retain, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
- (void)loadImageUrls:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)configureSubviews;
- (id)initWithImagesCount:(unsigned long long)arg1 overlapWidth:(double)arg2 imageSize:(struct CGSize)arg3 imageLoader:(id)arg4;

@end
