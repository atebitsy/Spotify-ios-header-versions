//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class UIColor, UIFont;

@interface SPTSearchUIHeaderStyle : NSObject <NSCopying>
{
    UIFont *_titleFont;
    UIColor *_titleColor;
    UIFont *_searchBarTextFont;
    UIColor *_searchBarTextColor;
    UIColor *_searchBarColor;
    double _searchBarCornerRadius;
    double _spacing;
    double _searchBarComponentsSpacing;
    struct UIEdgeInsets _searchBarComponentsInsets;
}

+ (id)defaultStyleWithTheme:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct UIEdgeInsets searchBarComponentsInsets; // @synthesize searchBarComponentsInsets=_searchBarComponentsInsets;
@property(readonly, nonatomic) double searchBarComponentsSpacing; // @synthesize searchBarComponentsSpacing=_searchBarComponentsSpacing;
@property(readonly, nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(readonly, nonatomic) double searchBarCornerRadius; // @synthesize searchBarCornerRadius=_searchBarCornerRadius;
@property(readonly, copy, nonatomic) UIColor *searchBarColor; // @synthesize searchBarColor=_searchBarColor;
@property(readonly, copy, nonatomic) UIColor *searchBarTextColor; // @synthesize searchBarTextColor=_searchBarTextColor;
@property(readonly, copy, nonatomic) UIFont *searchBarTextFont; // @synthesize searchBarTextFont=_searchBarTextFont;
@property(readonly, copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithTitleFont:(id)arg1 titleColor:(id)arg2 searchBarTextFont:(id)arg3 searchBarTextColor:(id)arg4 searchBarColor:(id)arg5 searchBarCornerRadius:(double)arg6 spacing:(double)arg7 searchBarComponentsSpacing:(double)arg8 searchBarComponentsInsets:(struct UIEdgeInsets)arg9;

@end

