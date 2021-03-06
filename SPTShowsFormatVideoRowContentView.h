//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEEntityRowContent-Protocol.h"
#import "GLUEReusable-Protocol.h"
#import "SPTCellImageLoadingContextCompatibleCell-Protocol.h"

@class GLUEImageView, GLUELabel, GLUETrackAccessoryLabel, NSArray, NSLayoutConstraint, NSString, NSURL, SPTShowsFormatCellViewModel, SPTShowsFormatLoopedAssetLayer, SPTShowsFormatVideoRowContentStyle, UIStackView;
@protocol BMBetamaxPlayer, BMVideoSurface;

@interface SPTShowsFormatVideoRowContentView : UIView <GLUEEntityRowContent, GLUEReusable, SPTCellImageLoadingContextCompatibleCell>
{
    _Bool _didSetupConstraints;
    UIView *subtitleAccessoryView;
    GLUELabel *_subtitleLabel;
    GLUELabel *_titleLabel;
    SPTShowsFormatLoopedAssetLayer *_videoLayer;
    GLUEImageView *_imageView;
    UIView *_accessoryView;
    SPTShowsFormatVideoRowContentStyle *_style;
    UIView *_overlayView;
    UIStackView *_labelStackView;
    GLUETrackAccessoryLabel *_trackAccessoryLabel;
    UIView *_animationContentView;
    UIView<BMVideoSurface> *_videoSurface;
    id <BMBetamaxPlayer> _player;
    NSLayoutConstraint *_stackVerticalConstraint;
    NSArray *_accessoryViewLayoutConstraints;
    SPTShowsFormatCellViewModel *_viewModel;
    NSURL *_thumbnailURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(nonatomic) _Bool didSetupConstraints; // @synthesize didSetupConstraints=_didSetupConstraints;
@property(retain, nonatomic) SPTShowsFormatCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSArray *accessoryViewLayoutConstraints; // @synthesize accessoryViewLayoutConstraints=_accessoryViewLayoutConstraints;
@property(retain, nonatomic) NSLayoutConstraint *stackVerticalConstraint; // @synthesize stackVerticalConstraint=_stackVerticalConstraint;
@property(readonly, nonatomic) id <BMBetamaxPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) UIView<BMVideoSurface> *videoSurface; // @synthesize videoSurface=_videoSurface;
@property(readonly, nonatomic) UIView *animationContentView; // @synthesize animationContentView=_animationContentView;
@property(readonly, nonatomic) GLUETrackAccessoryLabel *trackAccessoryLabel; // @synthesize trackAccessoryLabel=_trackAccessoryLabel;
@property(readonly, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(readonly, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(copy, nonatomic) SPTShowsFormatVideoRowContentStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) SPTShowsFormatLoopedAssetLayer *videoLayer; // @synthesize videoLayer=_videoLayer;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UIView *subtitleAccessoryView; // @synthesize subtitleAccessoryView;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)updateAccessoryViewConstraints;
- (void)updateConstraints;
- (void)prepareForReuse;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)didTapContextMenuButton:(id)arg1;
- (void)configureWithViewModel:(id)arg1 glueImageLoader:(id)arg2 useBetamaxPlayer:(_Bool)arg3 playerFactory:(id)arg4 playbackRequestFactory:(id)arg5 videoCacheOptions:(id)arg6 isCellularConnection:(_Bool)arg7;
- (void)setupBetamaxVideoSurfaceWithPlayerFactory:(id)arg1 videoCacheOptions:(id)arg2;
- (void)setupLegacyVideoLayer;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

