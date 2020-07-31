//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTAdsMobileOverlayContentView-Protocol.h"

@class NSString, SPTAdNowPlayingBookmarkButton, SPTAdsPromotedContentImageView, SPTTheme, UIButton;
@protocol GLUEImageLoader;

@interface SPTAdsMobileOverlayLeaveBehindView : UIView <SPTAdsMobileOverlayContentView>
{
    _Bool _shouldShowBookmarkButton;
    SPTAdsPromotedContentImageView *_contentImageView;
    UIButton *_actionButton;
    SPTAdNowPlayingBookmarkButton *_bookmarkButton;
    SPTTheme *_theme;
    UIView *_backgroundOverlayView;
    UIView *_ctaContainer;
    id <GLUEImageLoader> _glueImageLoader;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(readonly, nonatomic) UIView *ctaContainer; // @synthesize ctaContainer=_ctaContainer;
@property(readonly, nonatomic) UIView *backgroundOverlayView; // @synthesize backgroundOverlayView=_backgroundOverlayView;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) _Bool shouldShowBookmarkButton; // @synthesize shouldShowBookmarkButton=_shouldShowBookmarkButton;
@property(readonly, nonatomic) SPTAdNowPlayingBookmarkButton *bookmarkButton; // @synthesize bookmarkButton=_bookmarkButton;
@property(readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(readonly, nonatomic) SPTAdsPromotedContentImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
- (void)applyThemeLayout;
- (void)addConstraints;
- (id)initWithAdvertiserTheme:(id)arg1 bookmarkButtonState:(long long)arg2 glueImageLoader:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

