//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLoginTraitChangingView.h"

@class ASAuthorizationAppleIDButton, GLUEButton, GLUEGradientView, GLUELabel, NSLayoutConstraint, SPTLoginOptionButton, UIImageView, UIStackView, UIView;

@interface SPTLoginWelcomeView : SPTLoginTraitChangingView
{
    UIImageView *_artworkImageView;
    UIImageView *_spotifyLogo;
    GLUELabel *_helpTextLabel;
    GLUEButton *_continueWithEmailButton;
    GLUEButton *_signupButton;
    GLUEButton *_loginButton;
    ASAuthorizationAppleIDButton *_appleButton;
    SPTLoginOptionButton *_facebookButton;
    SPTLoginOptionButton *_outlinedAppleButton;
    UIStackView *_buttonsContainerView;
    NSLayoutConstraint *_spotifyLogoTopEdgeMinimum;
    NSLayoutConstraint *_spotifyLogoTopEdgePrefered;
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
@property(retain, nonatomic) NSLayoutConstraint *spotifyLogoTopEdgePrefered; // @synthesize spotifyLogoTopEdgePrefered=_spotifyLogoTopEdgePrefered;
@property(retain, nonatomic) NSLayoutConstraint *spotifyLogoTopEdgeMinimum; // @synthesize spotifyLogoTopEdgeMinimum=_spotifyLogoTopEdgeMinimum;
@property(retain, nonatomic) UIStackView *buttonsContainerView; // @synthesize buttonsContainerView=_buttonsContainerView;
@property(readonly, nonatomic) SPTLoginOptionButton *outlinedAppleButton; // @synthesize outlinedAppleButton=_outlinedAppleButton;
@property(readonly, nonatomic) SPTLoginOptionButton *facebookButton; // @synthesize facebookButton=_facebookButton;
@property(readonly, nonatomic) ASAuthorizationAppleIDButton *appleButton; // @synthesize appleButton=_appleButton;
@property(readonly, nonatomic) GLUEButton *loginButton; // @synthesize loginButton=_loginButton;
@property(readonly, nonatomic) GLUEButton *signupButton; // @synthesize signupButton=_signupButton;
@property(readonly, nonatomic) GLUEButton *continueWithEmailButton; // @synthesize continueWithEmailButton=_continueWithEmailButton;
@property(retain, nonatomic) GLUELabel *helpTextLabel; // @synthesize helpTextLabel=_helpTextLabel;
@property(readonly, nonatomic) UIImageView *spotifyLogo; // @synthesize spotifyLogo=_spotifyLogo;
@property(readonly, nonatomic) UIImageView *artworkImageView; // @synthesize artworkImageView=_artworkImageView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setPropLabelText:(id)arg1;
- (void)setupConstraintsWithStyle:(id)arg1;
- (id)initWithStyle:(id)arg1;

@end

