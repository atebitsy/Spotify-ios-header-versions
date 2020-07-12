//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLoginTraitChangingView.h"

#import "SPTLoginViewWithActionButtonsConfigurable-Protocol.h"

@class GLUEGradientView, GLUELabel, NSLayoutConstraint, NSString, UIImageView, UIStackView, UIView;
@protocol SPTLoginViewWithActionButtonsDelegate;

@interface SPTLoginWelcomeView : SPTLoginTraitChangingView <SPTLoginViewWithActionButtonsConfigurable>
{
    UIStackView *_buttonsContainerView;
    id <SPTLoginViewWithActionButtonsDelegate> delegate;
    UIImageView *_artworkImageView;
    UIImageView *_spotifyLogo;
    GLUELabel *_helpTextLabel;
    NSLayoutConstraint *_spotifyLogoTopEdgeMinimum;
    NSLayoutConstraint *_spotifyLogoTopEdgePreferred;
    NSLayoutConstraint *_spotifyLogoBottomEdge;
    NSLayoutConstraint *_buttonsContainerRegularSizeClassWidth;
    NSLayoutConstraint *_buttonsContainerLeadingMargin;
    NSLayoutConstraint *_buttonsContainerTrailingMargin;
    NSLayoutConstraint *_buttonsContainerBottomEdge;
    NSLayoutConstraint *_titleBottomMargin;
    NSLayoutConstraint *_mainContainerCompactWidth;
    NSLayoutConstraint *_mainContainerRegularWidth;
    GLUELabel *_titleLabel;
    UIView *_mainContainer;
    GLUEGradientView *_gradientView;
}

@property(readonly, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *mainContainer; // @synthesize mainContainer=_mainContainer;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSLayoutConstraint *mainContainerRegularWidth; // @synthesize mainContainerRegularWidth=_mainContainerRegularWidth;
@property(retain, nonatomic) NSLayoutConstraint *mainContainerCompactWidth; // @synthesize mainContainerCompactWidth=_mainContainerCompactWidth;
@property(retain, nonatomic) NSLayoutConstraint *titleBottomMargin; // @synthesize titleBottomMargin=_titleBottomMargin;
@property(retain, nonatomic) NSLayoutConstraint *buttonsContainerBottomEdge; // @synthesize buttonsContainerBottomEdge=_buttonsContainerBottomEdge;
@property(retain, nonatomic) NSLayoutConstraint *buttonsContainerTrailingMargin; // @synthesize buttonsContainerTrailingMargin=_buttonsContainerTrailingMargin;
@property(retain, nonatomic) NSLayoutConstraint *buttonsContainerLeadingMargin; // @synthesize buttonsContainerLeadingMargin=_buttonsContainerLeadingMargin;
@property(retain, nonatomic) NSLayoutConstraint *buttonsContainerRegularSizeClassWidth; // @synthesize buttonsContainerRegularSizeClassWidth=_buttonsContainerRegularSizeClassWidth;
@property(retain, nonatomic) NSLayoutConstraint *spotifyLogoBottomEdge; // @synthesize spotifyLogoBottomEdge=_spotifyLogoBottomEdge;
@property(retain, nonatomic) NSLayoutConstraint *spotifyLogoTopEdgePreferred; // @synthesize spotifyLogoTopEdgePreferred=_spotifyLogoTopEdgePreferred;
@property(retain, nonatomic) NSLayoutConstraint *spotifyLogoTopEdgeMinimum; // @synthesize spotifyLogoTopEdgeMinimum=_spotifyLogoTopEdgeMinimum;
@property(retain, nonatomic) GLUELabel *helpTextLabel; // @synthesize helpTextLabel=_helpTextLabel;
@property(readonly, nonatomic) UIImageView *spotifyLogo; // @synthesize spotifyLogo=_spotifyLogo;
@property(readonly, nonatomic) UIImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
@property(nonatomic) __weak id <SPTLoginViewWithActionButtonsDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) UIStackView *buttonsContainerView; // @synthesize buttonsContainerView=_buttonsContainerView;
- (void).cxx_destruct;
- (void)actionButtonTapped:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)setPropLabelText:(id)arg1;
- (void)setupConstraintsWithStyle:(id)arg1;
- (id)initWithStyle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

