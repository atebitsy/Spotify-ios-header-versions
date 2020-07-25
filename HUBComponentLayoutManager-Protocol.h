//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HUBCollectionViewLayout, NSArray, NSIndexPath, NSSet, UICollectionView, UICollectionViewLayoutAttributes;

@protocol HUBComponentLayoutManager <NSObject>
- (unsigned long long)containerAlignmentForComponentWithLayoutTraits:(NSSet *)arg1;
- (double)containerMaxWidthForComponentWithLayoutTraits:(NSSet *)arg1;
- (double)horizontalOffsetForComponentsWithLayoutTraits:(NSArray *)arg1 firstComponentLeadingHorizontalOffset:(double)arg2 lastComponentTrailingHorizontalOffset:(double)arg3;
- (double)verticalMarginForComponentWithLayoutTraits:(NSSet *)arg1 precedingComponentLayoutTraits:(NSSet *)arg2;
- (double)horizontalMarginForComponentWithLayoutTraits:(NSSet *)arg1 precedingComponentLayoutTraits:(NSSet *)arg2;
- (double)verticalMarginBetweenComponentWithLayoutTraits:(NSSet *)arg1 andHeaderComponentWithLayoutTraits:(NSSet *)arg2;
- (double)marginBetweenComponentWithLayoutTraits:(NSSet *)arg1 andContentEdge:(unsigned long long)arg2;

@optional
- (UICollectionViewLayoutAttributes *)collectionView:(UICollectionView *)arg1 layout:(HUBCollectionViewLayout *)arg2 finalLayoutAttributesForDisappearingItemAtIndexPath:(NSIndexPath *)arg3 startingAttributes:(UICollectionViewLayoutAttributes *)arg4;
- (UICollectionViewLayoutAttributes *)collectionView:(UICollectionView *)arg1 layout:(HUBCollectionViewLayout *)arg2 initialLayoutAttributesForAppearingItemAtIndexPath:(NSIndexPath *)arg3 finalAttributes:(UICollectionViewLayoutAttributes *)arg4;
@end

