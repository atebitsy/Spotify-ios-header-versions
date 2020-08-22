//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEImageView, NSLayoutConstraint;

@interface SPTAdBookmarkSettingsTrailingAccessoryView : UIView
{
    _Bool _externalLinkAvailable;
    GLUEImageView *_bookmarkButtonView;
    GLUEImageView *_clickThroughActionView;
    NSLayoutConstraint *_externalLinkVisibleConstraint;
    NSLayoutConstraint *_externalLinkInVisibleConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *externalLinkInVisibleConstraint; // @synthesize externalLinkInVisibleConstraint=_externalLinkInVisibleConstraint;
@property(retain, nonatomic) NSLayoutConstraint *externalLinkVisibleConstraint; // @synthesize externalLinkVisibleConstraint=_externalLinkVisibleConstraint;
@property(readonly, nonatomic) GLUEImageView *clickThroughActionView; // @synthesize clickThroughActionView=_clickThroughActionView;
@property(readonly, nonatomic) GLUEImageView *bookmarkButtonView; // @synthesize bookmarkButtonView=_bookmarkButtonView;
@property(nonatomic) _Bool externalLinkAvailable; // @synthesize externalLinkAvailable=_externalLinkAvailable;
- (void)addConstraints;
- (id)init;

@end

