//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GLUELabel;

@interface SPTPlaylistExtenderHeaderCell : UITableViewCell
{
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateWithModel:(id)arg1 style:(id)arg2;
- (id)accessibilityTextForTitle:(id)arg1 subtitle:(id)arg2;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

