//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SPTTheme, UIStackView, UITextView;

@interface SPTAdsMarqueeContextMenuView : UIView
{
    UITextView *_headerTextView;
    UIStackView *_contextStackView;
    SPTTheme *_theme;
    NSArray *_contextMenuActions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *contextMenuActions; // @synthesize contextMenuActions=_contextMenuActions;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) UIStackView *contextStackView; // @synthesize contextStackView=_contextStackView;
@property(readonly, nonatomic) UITextView *headerTextView; // @synthesize headerTextView=_headerTextView;
- (double)preferredHeight;
- (void)addConstraintsForActionRowView:(id)arg1;
- (id)initWithTheme:(id)arg1 headerTitle:(id)arg2 actions:(id)arg3;

@end

