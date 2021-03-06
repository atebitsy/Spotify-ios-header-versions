//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, SPTEncoreTypeStyle, UIColor;

@interface SPTPremiumDestinationUIBenefitsChartRowStyle : NSObject <GLUEStyle>
{
    SPTEncoreTypeStyle *_titleStyle;
    UIColor *_titleColor;
    long long _titleNumberOfLines;
    UIColor *_iconColor;
    SPTEncoreTypeStyle *_textStyle;
    UIColor *_textColor;
    long long _textNumberOfLines;
    UIColor *_separatorColor;
    double _defaultMarginMetric;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(nonatomic) double defaultMarginMetric; // @synthesize defaultMarginMetric=_defaultMarginMetric;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) long long textNumberOfLines; // @synthesize textNumberOfLines=_textNumberOfLines;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) SPTEncoreTypeStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) SPTEncoreTypeStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

