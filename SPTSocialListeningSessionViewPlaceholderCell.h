//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "GLUEStyleable-Protocol.h"

@class NSLayoutConstraint, NSString, SPTSocialListeningSessionViewPlaceholderCellStyle, UIView;

@interface SPTSocialListeningSessionViewPlaceholderCell : UITableViewCell <GLUEStyleable>
{
    UIView *_placeholderView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_leadingConstraint;
    SPTSocialListeningSessionViewPlaceholderCellStyle *_style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTSocialListeningSessionViewPlaceholderCellStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) UIView *placeholderView; // @synthesize placeholderView=_placeholderView;
- (void)glue_applyStyle:(id)arg1;
- (void)addViewConstraints;
- (void)setupPlaceholderView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

