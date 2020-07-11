//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class ASAuthorizationAppleIDButton, GLUEButton, GLUELabel, NSLayoutConstraint, NSString, SPTLoginOptionButton, UIImageView, UIStackView;

@interface SPTLoginWelcomeView : UIView <GLUEStyleable>
{
    UIImageView *_spotifyLogo;
    GLUEButton *_signupButton;
    GLUEButton *_facebookButton;
    GLUEButton *_loginButton;
    ASAuthorizationAppleIDButton *_appleButton;
    SPTLoginOptionButton *_outlinedFacebookButton;
    SPTLoginOptionButton *_outlinedAppleButton;
    UIStackView *_buttonsContainerView;
    NSLayoutConstraint *_spotifyLogoTopEdge;
    NSLayoutConstraint *_buttonsContainerRegularSizeClassWidth;
    NSLayoutConstraint *_buttonsContainerLeadingMargin;
    NSLayoutConstraint *_buttonsContainerTrailingMargin;
    NSLayoutConstraint *_buttonsContainerBottomEdge;
    NSLayoutConstraint *_valuePropsBottomMargin;
    NSLayoutConstraint *_mainContainerCompactWidth;
    NSLayoutConstraint *_mainContainerRegularWidth;
    NSLayoutConstraint *_logoCenterX;
    NSLayoutConstraint *_logoAlignLeading;
    UIView *_valuePropsContainer;
    GLUELabel *_propLabel1;
    UIView *_mainContainer;
}

@property(retain, nonatomic) UIView *mainContainer; // @synthesize mainContainer=_mainContainer;
@property(retain, nonatomic) GLUELabel *propLabel1; // @synthesize propLabel1=_propLabel1;
@property(retain, nonatomic) UIView *valuePropsContainer; // @synthesize valuePropsContainer=_valuePropsContainer;
@property(retain, nonatomic) NSLayoutConstraint *logoAlignLeading; // @synthesize logoAlignLeading=_logoAlignLeading;
@property(retain, nonatomic) NSLayoutConstraint *logoCenterX; // @synthesize logoCenterX=_logoCenterX;
@property(retain, nonatomic) NSLayoutConstraint *mainContainerRegularWidth; // @synthesize mainContainerRegularWidth=_mainContainerRegularWidth;
@property(retain, nonatomic) NSLayoutConstraint *mainContainerCompactWidth; // @synthesize mainContainerCompactWidth=_mainContainerCompactWidth;
@property(retain, nonatomic) NSLayoutConstraint *valuePropsBottomMargin; // @synthesize valuePropsBottomMargin=_valuePropsBottomMargin;
@property(retain, nonatomic) NSLayoutConstraint *buttonsContainerBottomEdge; // @synthesize buttonsContainerBottomEdge=_buttonsContainerBottomEdge;
@property(retain, nonatomic) NSLayoutConstraint *buttonsContainerTrailingMargin; // @synthesize buttonsContainerTrailingMargin=_buttonsContainerTrailingMargin;
@property(retain, nonatomic) NSLayoutConstraint *buttonsContainerLeadingMargin; // @synthesize buttonsContainerLeadingMargin=_buttonsContainerLeadingMargin;
@property(retain, nonatomic) NSLayoutConstraint *buttonsContainerRegularSizeClassWidth; // @synthesize buttonsContainerRegularSizeClassWidth=_buttonsContainerRegularSizeClassWidth;
@property(retain, nonatomic) NSLayoutConstraint *spotifyLogoTopEdge; // @synthesize spotifyLogoTopEdge=_spotifyLogoTopEdge;
@property(retain, nonatomic) UIStackView *buttonsContainerView; // @synthesize buttonsContainerView=_buttonsContainerView;
@property(readonly, nonatomic) SPTLoginOptionButton *outlinedAppleButton; // @synthesize outlinedAppleButton=_outlinedAppleButton;
@property(readonly, nonatomic) SPTLoginOptionButton *outlinedFacebookButton; // @synthesize outlinedFacebookButton=_outlinedFacebookButton;
@property(readonly, nonatomic) ASAuthorizationAppleIDButton *appleButton; // @synthesize appleButton=_appleButton;
@property(readonly, nonatomic) GLUEButton *loginButton; // @synthesize loginButton=_loginButton;
@property(readonly, nonatomic) GLUEButton *facebookButton; // @synthesize facebookButton=_facebookButton;
@property(readonly, nonatomic) GLUEButton *signupButton; // @synthesize signupButton=_signupButton;
@property(readonly, nonatomic) UIImageView *spotifyLogo; // @synthesize spotifyLogo=_spotifyLogo;
- (void).cxx_destruct;
- (void)traitsDidChange:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)setPropLabelText:(id)arg1;
- (void)setupConstraintsWithStyle:(id)arg1;
- (id)initWithTheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

