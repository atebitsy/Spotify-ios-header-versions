//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEGradientView.h"

@protocol GLUETheme;

@interface SPTHomeUIColorExtractionGradientView : GLUEGradientView
{
    id <GLUETheme> _theme;
}

+ (id)getGradientColorsForColor:(id)arg1;
+ (id)gradientStyleForColor:(id)arg1;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)updateColorForImage:(id)arg1;
- (id)initWithTheme:(id)arg1;

@end
