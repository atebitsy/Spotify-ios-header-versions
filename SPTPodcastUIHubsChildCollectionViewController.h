//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

@class HUBComponentView;
@protocol HUBComponentModel, HUBComponentViewWithChildren><HUBComponentViewWithEvents;

@interface SPTPodcastUIHubsChildCollectionViewController : UICollectionViewController
{
    _Bool _shouldInsetChildrenWithinReadableContentGuide;
    HUBComponentView<HUBComponentViewWithChildren><HUBComponentViewWithEvents> *_parentComponentView;
    id <HUBComponentModel> _model;
}

@property(retain, nonatomic) id <HUBComponentModel> model; // @synthesize model=_model;
@property(nonatomic) __weak HUBComponentView<HUBComponentViewWithChildren><HUBComponentViewWithEvents> *parentComponentView; // @synthesize parentComponentView=_parentComponentView;
@property(nonatomic) _Bool shouldInsetChildrenWithinReadableContentGuide; // @synthesize shouldInsetChildrenWithinReadableContentGuide=_shouldInsetChildrenWithinReadableContentGuide;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)childDelegate;
- (id)eventHandler;
- (id)viewForChildAtIndex:(unsigned long long)arg1;
- (void)invalidateLayout;
- (void)configureWithModel:(id)arg1;
- (void)viewDidLoad;
- (id)initWithParentComponentView:(id)arg1;

@end

