//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEImageView, GLUELabel, NSString, SPTBrowseUIPromoImageWithShadowContainer, SPTBrowseUIPromoViewStyle, UIImage, UIStackView;
@protocol GLUETheme;

@interface SPTBrowseUIPromoContentView : UIView
{
    long long _imageDisplayState;
    id <GLUETheme> _theme;
    SPTBrowseUIPromoViewStyle *_style;
    UIStackView *_stackView;
    GLUELabel *_backgroundLabel;
    UIView *_spacerView;
    GLUEImageView *_logoImageView;
    SPTBrowseUIPromoImageWithShadowContainer *_mainImageContainer;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    GLUELabel *_descriptionLabel;
}

@property(readonly, nonatomic) GLUELabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SPTBrowseUIPromoImageWithShadowContainer *mainImageContainer; // @synthesize mainImageContainer=_mainImageContainer;
@property(retain, nonatomic) GLUEImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(readonly, nonatomic) UIView *spacerView; // @synthesize spacerView=_spacerView;
@property(readonly, nonatomic) GLUELabel *backgroundLabel; // @synthesize backgroundLabel=_backgroundLabel;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) SPTBrowseUIPromoViewStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) long long imageDisplayState; // @synthesize imageDisplayState=_imageDisplayState;
- (void).cxx_destruct;
- (id)accessibilityLabel;
@property(copy, nonatomic) NSString *descriptionText;
@property(copy, nonatomic) NSString *subtitleText;
@property(copy, nonatomic) NSString *titleText;
@property(copy, nonatomic) NSString *backgroundText;
@property(retain, nonatomic) UIImage *mainImage;
@property(retain, nonatomic) UIImage *logoImage;
- (void)prepareForReuse;
- (id)createTitleLabel;
- (void)updateMainColor:(id)arg1;
- (void)presentLogoImageWithoutMainImageAndTitle;
- (void)presentTitleWithoutLogoImageAfterView:(id)arg1;
- (void)presentOnlyTitleAfterView:(id)arg1;
- (void)presentMainImageAndTitleWithoutLogoImage;
- (id)createSpacerView;
- (id)ceateLabelWithStyle:(id)arg1;
- (void)setUpSubviews;
- (id)initWithTheme:(id)arg1;

@end
