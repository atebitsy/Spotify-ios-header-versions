//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEGradientStyle, GLUEImageStyle, GLUELabelStyle, NSString;

@interface SPTBrowseUIPromoStyle : NSObject <GLUEStyle>
{
    GLUEGradientStyle *_gradientStyle;
    GLUEImageStyle *_backgroundImageStyle;
    GLUEImageStyle *_mainImageStyle;
    GLUEImageStyle *_logoImageStyle;
    GLUELabelStyle *_backgroundLabelStyle;
    GLUELabelStyle *_titleLabelStyle;
    GLUELabelStyle *_subtitleLabelStyle;
    GLUELabelStyle *_descriptionLabelStyle;
    double _backgroundCornerRadius;
    double _backgroundOverlayViewAlpha;
    double _imageCornerRadius;
    double _extractedColorMinimumContrastRatio;
    double _mainImageShadowOpacity;
    double _logoImageHeight;
    struct CGSize _logoMaxImageResizeSize;
    struct CGSize _mainImageShadowOffsetSize;
    struct UIEdgeInsets _backgroundStackViewInsets;
}

+ (double)componentHorizontalMargin;
+ (double)componentHeight;
+ (id)defaultStyleWithTheme:(id)arg1 image:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) double logoImageHeight; // @synthesize logoImageHeight=_logoImageHeight;
@property(nonatomic) double mainImageShadowOpacity; // @synthesize mainImageShadowOpacity=_mainImageShadowOpacity;
@property(nonatomic) struct CGSize mainImageShadowOffsetSize; // @synthesize mainImageShadowOffsetSize=_mainImageShadowOffsetSize;
@property(nonatomic) double extractedColorMinimumContrastRatio; // @synthesize extractedColorMinimumContrastRatio=_extractedColorMinimumContrastRatio;
@property(nonatomic) struct CGSize logoMaxImageResizeSize; // @synthesize logoMaxImageResizeSize=_logoMaxImageResizeSize;
@property(nonatomic) double imageCornerRadius; // @synthesize imageCornerRadius=_imageCornerRadius;
@property(nonatomic) double backgroundOverlayViewAlpha; // @synthesize backgroundOverlayViewAlpha=_backgroundOverlayViewAlpha;
@property(nonatomic) double backgroundCornerRadius; // @synthesize backgroundCornerRadius=_backgroundCornerRadius;
@property(nonatomic) struct UIEdgeInsets backgroundStackViewInsets; // @synthesize backgroundStackViewInsets=_backgroundStackViewInsets;
@property(copy, nonatomic) GLUELabelStyle *descriptionLabelStyle; // @synthesize descriptionLabelStyle=_descriptionLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *subtitleLabelStyle; // @synthesize subtitleLabelStyle=_subtitleLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *backgroundLabelStyle; // @synthesize backgroundLabelStyle=_backgroundLabelStyle;
@property(copy, nonatomic) GLUEImageStyle *logoImageStyle; // @synthesize logoImageStyle=_logoImageStyle;
@property(copy, nonatomic) GLUEImageStyle *mainImageStyle; // @synthesize mainImageStyle=_mainImageStyle;
@property(copy, nonatomic) GLUEImageStyle *backgroundImageStyle; // @synthesize backgroundImageStyle=_backgroundImageStyle;
@property(copy, nonatomic) GLUEGradientStyle *gradientStyle; // @synthesize gradientStyle=_gradientStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

