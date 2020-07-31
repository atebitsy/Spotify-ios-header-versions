//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

@class NSMutableArray, SPTPremiumDestinationUIBenefitsCardView, SPTPremiumDestinationUIGLUETheme;

@interface SPTPremiumDestinationUIBenefitsChartComponentView : HUBComponentView
{
    SPTPremiumDestinationUIBenefitsCardView *_cardView;
    SPTPremiumDestinationUIGLUETheme *_theme;
    NSMutableArray *_chartRows;
}

+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 model:(id)arg2 theme:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *chartRows; // @synthesize chartRows=_chartRows;
@property(retain, nonatomic) SPTPremiumDestinationUIGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) SPTPremiumDestinationUIBenefitsCardView *cardView; // @synthesize cardView=_cardView;
- (void)createAndAddChartRowsWithItems:(id)arg1 style:(id)arg2 columnWidth:(double)arg3;
- (void)createAndAddChartHeaderViewWithChart:(id)arg1 style:(id)arg2;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (void)setupConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

