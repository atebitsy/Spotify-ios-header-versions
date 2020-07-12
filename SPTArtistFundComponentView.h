//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"
#import "HUGSSelectableComponentView-Protocol.h"

@class NSString, SPTArtistFundBackgroundView, SPTArtistFundContentView, SPTArtistFundViewStyle, UIGestureRecognizer, UIView;
@protocol HUBComponentEventHandler;

@interface SPTArtistFundComponentView : HUGSThemableComponentView <HUBComponentViewWithEvents, HUGSSelectableComponentView, HUBComponentViewWithImageHandling>
{
    id <HUBComponentEventHandler> _eventHandler;
    UIGestureRecognizer *_selectionGestureRecognizer;
    SPTArtistFundViewStyle *_style;
    SPTArtistFundBackgroundView *_backgroundView;
    SPTArtistFundContentView *_contentView;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(readonly, nonatomic) SPTArtistFundContentView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) SPTArtistFundBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) SPTArtistFundViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UIGestureRecognizer *selectionGestureRecognizer; // @synthesize selectionGestureRecognizer=_selectionGestureRecognizer;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)sendSelectionEvent;
- (void)applyAccentColorFromModel:(id)arg1;
@property(readonly, nonatomic) UIView *selectionView;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (long long)obtainImageDisplayState:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (struct CGSize)preferredSizeForBackgroundImage;
- (void)setupConstraints;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

