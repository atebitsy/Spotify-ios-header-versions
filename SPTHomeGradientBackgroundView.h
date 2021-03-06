//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTHomeGradientBackgroundGeneratorDelegate-Protocol.h"

@class GLUEGradientView, GLUEHeaderBackgroundView, NSString, SPTHomeGradientBackgroundGenerator;
@protocol GLUETheme;

@interface SPTHomeGradientBackgroundView : UIView <SPTHomeGradientBackgroundGeneratorDelegate>
{
    id <GLUETheme> _theme;
    GLUEGradientView *_backgroundGradientView;
    GLUEHeaderBackgroundView *_backgroundOverlayView;
    SPTHomeGradientBackgroundGenerator *_homeGradientBackgroundGenerator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTHomeGradientBackgroundGenerator *homeGradientBackgroundGenerator; // @synthesize homeGradientBackgroundGenerator=_homeGradientBackgroundGenerator;
@property(readonly, nonatomic) GLUEHeaderBackgroundView *backgroundOverlayView; // @synthesize backgroundOverlayView=_backgroundOverlayView;
@property(readonly, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void)homeGradientBackgroundViewGenerator:(id)arg1 didFindGradientColor:(id)arg2;
- (void)configureConstraints;
- (void)setupLayout;
- (void)updateHomeBackgroundGradientWithViewModel:(id)arg1;
- (id)initWithTheme:(id)arg1 imageLoaderFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

