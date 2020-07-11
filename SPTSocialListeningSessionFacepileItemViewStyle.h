//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEImageStyle, GLUELabelStyle, NSString, UIColor;

@interface SPTSocialListeningSessionFacepileItemViewStyle : NSObject <GLUEStyle>
{
    double _height;
    double _borderWidth;
    UIColor *_borderColor;
    UIColor *_overflowBackgroundColor;
    GLUELabelStyle *_textLabelStyle;
    GLUEImageStyle *_imageViewStyle;
}

@property(copy, nonatomic) GLUEImageStyle *imageViewStyle; // @synthesize imageViewStyle=_imageViewStyle;
@property(copy, nonatomic) GLUELabelStyle *textLabelStyle; // @synthesize textLabelStyle=_textLabelStyle;
@property(copy, nonatomic) UIColor *overflowBackgroundColor; // @synthesize overflowBackgroundColor=_overflowBackgroundColor;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToSocialListeningSessionPopupViewStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFont:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
