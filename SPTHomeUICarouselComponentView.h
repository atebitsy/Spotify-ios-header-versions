//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewObserver-Protocol.h"
#import "HUBComponentViewWithDraggableChildren-Protocol.h"
#import "HUBComponentViewWithRestorableUIState-Protocol.h"
#import "SPTHomeUICarouselLayoutDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SPTHomeUICarouselLayout, SPTHomeUIFeatureProperties, SPTHomeUILoggerImplementation, UICollectionView;
@protocol HUBComponentViewChildDelegate, SPTHomeUICarouselChildSizingDelegate, UICollectionViewDragDelegate;

@interface SPTHomeUICarouselComponentView : HUGSThemableComponentView <UICollectionViewDataSource, UICollectionViewDelegate, SPTHomeUICarouselLayoutDelegate, HUBComponentViewWithDraggableChildren, HUBComponentViewWithRestorableUIState, HUBComponentViewObserver>
{
    id <HUBComponentViewChildDelegate> _childDelegate;
    id <SPTHomeUICarouselChildSizingDelegate> _childSizingDelegate;
    SPTHomeUILoggerImplementation *_logger;
    SPTHomeUIFeatureProperties *_remoteConfigProperties;
    UICollectionView *_collectionView;
    SPTHomeUICarouselLayout *_layout;
}

+ (double)spacingForBoundsSize:(struct CGSize)arg1 theme:(id)arg2;
+ (struct CGSize)sizeForContainerViewSize:(struct CGSize)arg1 theme:(id)arg2 model:(id)arg3 childSizingDelegate:(id)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTHomeUICarouselLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) SPTHomeUIFeatureProperties *remoteConfigProperties; // @synthesize remoteConfigProperties=_remoteConfigProperties;
@property(readonly, nonatomic) SPTHomeUILoggerImplementation *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak id <SPTHomeUICarouselChildSizingDelegate> childSizingDelegate; // @synthesize childSizingDelegate=_childSizingDelegate;
@property(nonatomic) __weak id <HUBComponentViewChildDelegate> childDelegate; // @synthesize childDelegate=_childDelegate;
- (double)clamp:(double)arg1 min:(double)arg2 max:(double)arg3;
- (double)spacing;
- (double)carouselLayoutTrailingSpace:(id)arg1;
- (double)carouselLayoutLeadingSpace:(id)arg1;
- (double)carouselLayoutItemSpacing:(id)arg1;
- (struct CGSize)carouselLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)restoreUIState:(id)arg1;
- (id)currentUIState;
@property(nonatomic) __weak id <UICollectionViewDragDelegate> dragDelegate;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2 childSizingDelegate:(id)arg3 logger:(id)arg4 remoteConfigProperties:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

