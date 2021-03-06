//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTAdsMarqueeContentView, SPTTheme;
@protocol SPTAdsMarqueContentViewControllerDelegate, SPTProductState;

@interface SPTAdsMarqueContentViewController : UIViewController
{
    id <SPTAdsMarqueContentViewControllerDelegate> _delegate;
    SPTAdsMarqueeContentView *_marqueeContentView;
    SPTTheme *_theme;
    id <SPTProductState> _productState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTAdsMarqueeContentView *marqueeContentView; // @synthesize marqueeContentView=_marqueeContentView;
@property(nonatomic) __weak id <SPTAdsMarqueContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTapInformationText:(id)arg1;
- (void)navigateToAlbum:(id)arg1;
- (id)initWithTheme:(id)arg1 marqueeEntity:(id)arg2 albumImage:(id)arg3 productState:(id)arg4;

@end

