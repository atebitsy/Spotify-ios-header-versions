//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTPodcastEpisodeViewModelDelegate-Protocol.h"

@class CAGradientLayer, GLUEImageView, NSArray, NSString, NSURL, SPTPodcastEpisodeViewModel;
@protocol GLUETheme, SPTImageLoader;

@interface SPTPodcastEpisodeCoverArtViewController : UIViewController <SPTImageLoaderDelegate, SPTPodcastEpisodeViewModelDelegate>
{
    id <GLUETheme> _theme;
    SPTPodcastEpisodeViewModel *_viewModel;
    NSURL *_coverArtImageURL;
    id <SPTImageLoader> _imageLoader;
    GLUEImageView *_coverArtImageView;
    CAGradientLayer *_gradientLayer;
    NSArray *_startLocation;
    NSArray *_endLocation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *endLocation; // @synthesize endLocation=_endLocation;
@property(readonly, nonatomic) NSArray *startLocation; // @synthesize startLocation=_startLocation;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) GLUEImageView *coverArtImageView; // @synthesize coverArtImageView=_coverArtImageView;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) NSURL *coverArtImageURL; // @synthesize coverArtImageURL=_coverArtImageURL;
@property(retain, nonatomic) SPTPodcastEpisodeViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void)imageLoader:(id)arg1 didFailToLoadImageForURL:(id)arg2 error:(id)arg3 context:(id)arg4;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)stopAnimation;
- (void)animateLoadingImage;
- (void)applyViewModel:(id)arg1;
- (void)viewModelUpdatedPlaybackState:(id)arg1;
- (void)viewModel:(id)arg1 didUpdateWithError:(id)arg2;
- (void)setUpConstraints;
- (void)setupGradientLayer;
- (void)setUpView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1 imageLoader:(id)arg2 theme:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

