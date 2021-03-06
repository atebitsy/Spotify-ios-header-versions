//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class GLUELabel, UIImageView;
@protocol HUBComponentEventHandler;

@interface SPTBrowseUICategoryCardComponentView : HUGSThemableComponentView <HUBComponentViewWithImageHandling, HUBComponentViewWithEvents>
{
    id <HUBComponentEventHandler> _eventHandler;
    UIImageView *_backgroundView;
    GLUELabel *_titleLabel;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (id)accessibilityLabel;
- (void)didTapView;
- (void)reduceTitleLabelFontSizeIfNeeded;
- (void)adjustNumberOfLines;
- (void)configureView;
- (void)setupGestureRecognizer;
- (void)setupViewConstraints;
- (void)setupViews;
- (id)titleLabelStyle;
- (void)applyThemeLayout;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

