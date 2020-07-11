//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTLoginContinueWithWelcomeViewStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    GLUELabelStyle *_messageLabelStyle;
    GLUELabelStyle *_continueWithLabelStyle;
    GLUEButtonStyle *_continueWithPhoneButtonStyle;
    GLUEButtonStyle *_continueWithEmailButtonStyle;
    GLUEButtonStyle *_continueWithFacebookButtonStyle;
    double _continueWithLabelBottomMargin;
    double _continueWithLabelHorizontalEdgeMargin;
    double _buttonsContainerViewSpacing;
    double _spotifyLogoTopMargin;
    double _spotifyLogoBottomMargin;
    double _messageLabelContainerBottomMargin;
    double _messageLabelContainerEdgeMargins;
    double _buttonsContainerViewBottomMargin;
    double _buttonRegularSizeClassWidth;
    double _buttonMinimumHorizontalEdgeMargin;
    double _buttonMaximumHorizontalEdgeMargin;
    double _minTitleMessageScale;
}

@property(nonatomic) double minTitleMessageScale; // @synthesize minTitleMessageScale=_minTitleMessageScale;
@property(nonatomic) double buttonMaximumHorizontalEdgeMargin; // @synthesize buttonMaximumHorizontalEdgeMargin=_buttonMaximumHorizontalEdgeMargin;
@property(nonatomic) double buttonMinimumHorizontalEdgeMargin; // @synthesize buttonMinimumHorizontalEdgeMargin=_buttonMinimumHorizontalEdgeMargin;
@property(nonatomic) double buttonRegularSizeClassWidth; // @synthesize buttonRegularSizeClassWidth=_buttonRegularSizeClassWidth;
@property(nonatomic) double buttonsContainerViewBottomMargin; // @synthesize buttonsContainerViewBottomMargin=_buttonsContainerViewBottomMargin;
@property(nonatomic) double messageLabelContainerEdgeMargins; // @synthesize messageLabelContainerEdgeMargins=_messageLabelContainerEdgeMargins;
@property(nonatomic) double messageLabelContainerBottomMargin; // @synthesize messageLabelContainerBottomMargin=_messageLabelContainerBottomMargin;
@property(nonatomic) double spotifyLogoBottomMargin; // @synthesize spotifyLogoBottomMargin=_spotifyLogoBottomMargin;
@property(nonatomic) double spotifyLogoTopMargin; // @synthesize spotifyLogoTopMargin=_spotifyLogoTopMargin;
@property(nonatomic) double buttonsContainerViewSpacing; // @synthesize buttonsContainerViewSpacing=_buttonsContainerViewSpacing;
@property(nonatomic) double continueWithLabelHorizontalEdgeMargin; // @synthesize continueWithLabelHorizontalEdgeMargin=_continueWithLabelHorizontalEdgeMargin;
@property(nonatomic) double continueWithLabelBottomMargin; // @synthesize continueWithLabelBottomMargin=_continueWithLabelBottomMargin;
@property(copy, nonatomic) GLUEButtonStyle *continueWithFacebookButtonStyle; // @synthesize continueWithFacebookButtonStyle=_continueWithFacebookButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *continueWithEmailButtonStyle; // @synthesize continueWithEmailButtonStyle=_continueWithEmailButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *continueWithPhoneButtonStyle; // @synthesize continueWithPhoneButtonStyle=_continueWithPhoneButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *continueWithLabelStyle; // @synthesize continueWithLabelStyle=_continueWithLabelStyle;
@property(copy, nonatomic) GLUELabelStyle *messageLabelStyle; // @synthesize messageLabelStyle=_messageLabelStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
