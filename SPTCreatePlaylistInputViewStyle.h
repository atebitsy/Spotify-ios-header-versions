//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, GLUEGradientStyle, GLUELabelStyle, NSString, UIColor, UIFont, UIImage;

@interface SPTCreatePlaylistInputViewStyle : NSObject <GLUEStyle>
{
    GLUELabelStyle *_titleLabelStyle;
    GLUEButtonStyle *_primaryButtonStyle;
    GLUEButtonStyle *_secondaryButtonStyle;
    UIImage *_secondaryButtonIcon;
    UIFont *_textFieldFont;
    UIColor *_textFieldTextColor;
    UIColor *_textFieldTintColor;
    UIColor *_textFieldUnderlineViewBackgroundColor;
    UIColor *_backgroundColor;
    GLUEGradientStyle *_backgroundGradientStyle;
}

@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) UIColor *textFieldUnderlineViewBackgroundColor; // @synthesize textFieldUnderlineViewBackgroundColor=_textFieldUnderlineViewBackgroundColor;
@property(copy, nonatomic) UIColor *textFieldTintColor; // @synthesize textFieldTintColor=_textFieldTintColor;
@property(copy, nonatomic) UIColor *textFieldTextColor; // @synthesize textFieldTextColor=_textFieldTextColor;
@property(copy, nonatomic) UIFont *textFieldFont; // @synthesize textFieldFont=_textFieldFont;
@property(copy, nonatomic) UIImage *secondaryButtonIcon; // @synthesize secondaryButtonIcon=_secondaryButtonIcon;
@property(copy, nonatomic) GLUEButtonStyle *secondaryButtonStyle; // @synthesize secondaryButtonStyle=_secondaryButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *primaryButtonStyle; // @synthesize primaryButtonStyle=_primaryButtonStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

