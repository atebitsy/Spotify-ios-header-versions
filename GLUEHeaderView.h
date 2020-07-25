//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class CAGradientLayer, GLUEButton, GLUEHeaderBackgroundView, NSNumber, NSString, SPTBadgeView, SPTImageBlurView, UIColor, UIImage, UIImageView, UILabel;
@protocol GLUEHeaderViewDelegate, SPTThemableViewLayoutDelegate;

@interface GLUEHeaderView : UIView <SPTThemableView>
{
    _Bool _showsVerifiedBadgeView;
    _Bool _applyScalingOnContentOffsetChange;
    id <SPTThemableViewLayoutDelegate> _layoutDelegate;
    id <GLUEHeaderViewDelegate> _delegate;
    unsigned long long _style;
    long long _imageStyle;
    UIColor *_headerBackgroundColor;
    GLUEButton *_primaryActionButton;
    UIView *_accessoryView;
    NSNumber *_collapsedTitleHorizontalMargin;
    UIView *_containerView;
    UIView *_containerViewScalingWrapper;
    GLUEHeaderBackgroundView *_backgroundHeaderView;
    UIImageView *_backgroundImageView;
    UIImage *_backgroundImage;
    SPTImageBlurView *_collapsedBackgroundImageView;
    UIImageView *_imageView;
    SPTBadgeView *_imageBadgeView;
    UILabel *_topAccessoryLabel;
    UILabel *_defaultTitleLabel;
    UILabel *_accessoryTitleLabel;
    UILabel *_subtitleLabel;
    UILabel *_collapsedTitleLabel;
    CAGradientLayer *_collapsedShadowLayer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CAGradientLayer *collapsedShadowLayer; // @synthesize collapsedShadowLayer=_collapsedShadowLayer;
@property(readonly, nonatomic) UILabel *collapsedTitleLabel; // @synthesize collapsedTitleLabel=_collapsedTitleLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *accessoryTitleLabel; // @synthesize accessoryTitleLabel=_accessoryTitleLabel;
@property(retain, nonatomic) UILabel *defaultTitleLabel; // @synthesize defaultTitleLabel=_defaultTitleLabel;
@property(readonly, nonatomic) UILabel *topAccessoryLabel; // @synthesize topAccessoryLabel=_topAccessoryLabel;
@property(retain, nonatomic) SPTBadgeView *imageBadgeView; // @synthesize imageBadgeView=_imageBadgeView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) SPTImageBlurView *collapsedBackgroundImageView; // @synthesize collapsedBackgroundImageView=_collapsedBackgroundImageView;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) GLUEHeaderBackgroundView *backgroundHeaderView; // @synthesize backgroundHeaderView=_backgroundHeaderView;
@property(retain, nonatomic) UIView *containerViewScalingWrapper; // @synthesize containerViewScalingWrapper=_containerViewScalingWrapper;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSNumber *collapsedTitleHorizontalMargin; // @synthesize collapsedTitleHorizontalMargin=_collapsedTitleHorizontalMargin;
@property(nonatomic) _Bool applyScalingOnContentOffsetChange; // @synthesize applyScalingOnContentOffsetChange=_applyScalingOnContentOffsetChange;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) GLUEButton *primaryActionButton; // @synthesize primaryActionButton=_primaryActionButton;
@property(nonatomic) _Bool showsVerifiedBadgeView; // @synthesize showsVerifiedBadgeView=_showsVerifiedBadgeView;
@property(retain, nonatomic) UIColor *headerBackgroundColor; // @synthesize headerBackgroundColor=_headerBackgroundColor;
@property(nonatomic) long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <GLUEHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void)headerImageTapped;
- (void)createImageShadow;
- (void)addSubviewToContainerView:(id)arg1;
- (double)calculateMaxYFromCGRect:(struct CGRect)arg1 usingPreviousY:(double)arg2;
- (double)containerBottomMarginForStyle:(unsigned long long)arg1;
- (double)calculateMinimumHeight;
- (void)applyThemeLayout;
- (void)scrollViewContentOffsetDidChange:(struct CGPoint)arg1;
- (void)setBackgroundImage:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) struct CGRect imageViewFrame;
@property(readonly, nonatomic) struct CGSize imageViewSize;
@property(retain, nonatomic) UIImage *image;
- (struct CGRect)frameForImageView;
@property(copy, nonatomic) NSString *accessoryTitle;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *topAccessory;
- (struct CGRect)frameForDefaultTitleLabel;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInsideButton:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setupAccessoryTitleLabel;
- (void)setupImageView;
- (void)setupDefaultTitleLabel;
- (void)setupForStyle:(unsigned long long)arg1;
- (id)initWithWidth:(double)arg1 style:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

