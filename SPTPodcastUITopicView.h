//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UILabel;
@protocol GLUETheme;

@interface SPTPodcastUITopicView : UIView
{
    UILabel *_titleLabel;
    UIView *_borderView;
    id <GLUETheme> _theme;
    NSLayoutConstraint *_subtitleLabelConstraintWithoutImage;
    NSLayoutConstraint *_subtitleLabelConstraintWithImage;
}

@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelConstraintWithImage; // @synthesize subtitleLabelConstraintWithImage=_subtitleLabelConstraintWithImage;
@property(retain, nonatomic) NSLayoutConstraint *subtitleLabelConstraintWithoutImage; // @synthesize subtitleLabelConstraintWithoutImage=_subtitleLabelConstraintWithoutImage;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title;
- (void)setupConstraints;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

@end

