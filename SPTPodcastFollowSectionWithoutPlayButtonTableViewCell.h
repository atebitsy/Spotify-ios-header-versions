//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPodcastSectionTableViewCell.h"

#import "SPTPodcastFollowSectionTableViewCellCommonInterface-Protocol.h"

@class GLUEContextMenuAccessoryButton, NSArray, NSString, SPTPodcastFollowButton, SPTPodcastFollowSectionViewModel, UISelectionFeedbackGenerator, UIView;
@protocol GLUETheme, SPTPodcastNewFollowTableViewCellDelegate;

@interface SPTPodcastFollowSectionWithoutPlayButtonTableViewCell : SPTPodcastSectionTableViewCell <SPTPodcastFollowSectionTableViewCellCommonInterface>
{
    id <SPTPodcastNewFollowTableViewCellDelegate> _followDelegate;
    UISelectionFeedbackGenerator *_followFeedbackGenerator;
    UIView *_containerView;
    id <GLUETheme> _glueTheme;
    NSArray *_layoutConstraints;
    SPTPodcastFollowButton *_followButton;
    GLUEContextMenuAccessoryButton *_contextMenuButton;
    SPTPodcastFollowSectionViewModel *_followSectionViewModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTPodcastFollowSectionViewModel *followSectionViewModel; // @synthesize followSectionViewModel=_followSectionViewModel;
@property(retain, nonatomic) GLUEContextMenuAccessoryButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(retain, nonatomic) SPTPodcastFollowButton *followButton; // @synthesize followButton=_followButton;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UISelectionFeedbackGenerator *followFeedbackGenerator; // @synthesize followFeedbackGenerator=_followFeedbackGenerator;
@property(nonatomic) __weak id <SPTPodcastNewFollowTableViewCellDelegate> followDelegate; // @synthesize followDelegate=_followDelegate;
- (void)updateFollowedButtonState:(_Bool)arg1;
- (void)contextMenuButtonTapped:(id)arg1;
- (void)followButtonTapped:(id)arg1;
- (void)setupConstraints;
- (void)setupUI;
- (void)updateWithViewModel:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

