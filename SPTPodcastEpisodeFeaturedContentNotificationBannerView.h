//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UILabel;
@protocol SPTPodcastEpisodeFeaturedContentNotificationBannerViewDelegate;

@interface SPTPodcastEpisodeFeaturedContentNotificationBannerView : UIView
{
    id <SPTPodcastEpisodeFeaturedContentNotificationBannerViewDelegate> _delegate;
    UIView *_containerView;
    UILabel *_titleLabel;
    UIButton *_bannerButton;
    NSLayoutConstraint *_containerBottomConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *containerBottomConstraint; // @synthesize containerBottomConstraint=_containerBottomConstraint;
@property(readonly, nonatomic) UIButton *bannerButton; // @synthesize bannerButton=_bannerButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SPTPodcastEpisodeFeaturedContentNotificationBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectPremiumPlan;
- (void)setupConstraints;
- (void)setupBannerButton;
- (void)setupTitleLabel;
- (void)setupContainerView;
- (void)configureFreeExperienceBanner:(_Bool)arg1;
- (void)setupLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

