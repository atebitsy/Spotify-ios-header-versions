//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "GLUEStyleable-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class GLUEButton, GLUELabel, NSString, SPTEditPlaylistTextViewCellStyle, UILabel, UITextView, UIView;
@protocol SPTEditPlaylistTextViewCellDelegate;

@interface SPTEditPlaylistTextViewCell : UITableViewCell <UITextViewDelegate, GLUEStyleable>
{
    id <SPTEditPlaylistTextViewCellDelegate> _delegate;
    NSString *_originalText;
    NSString *_placeholderText;
    NSString *_buttonText;
    UIView *_container;
    GLUEButton *_button;
    UIView *_textViewContainer;
    UITextView *_textView;
    UILabel *_placeholerLabel;
    GLUELabel *_characterCountLabel;
    SPTEditPlaylistTextViewCellStyle *_style;
    unsigned long long _currentState;
    unsigned long long _nextState;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long nextState; // @synthesize nextState=_nextState;
@property(nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) SPTEditPlaylistTextViewCellStyle *style; // @synthesize style=_style;
@property(nonatomic) __weak GLUELabel *characterCountLabel; // @synthesize characterCountLabel=_characterCountLabel;
@property(nonatomic) __weak UILabel *placeholerLabel; // @synthesize placeholerLabel=_placeholerLabel;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *textViewContainer; // @synthesize textViewContainer=_textViewContainer;
@property(retain, nonatomic) GLUEButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *container; // @synthesize container=_container;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(copy, nonatomic) NSString *originalText; // @synthesize originalText=_originalText;
@property(nonatomic) __weak id <SPTEditPlaylistTextViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)glue_applyStyle:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)pressedButton;
- (void)didFinishEditing;
- (_Bool)subviewsWithinCellBounds;
- (void)updateCellHeight;
- (void)updateUI;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)tearDownTextView;
- (void)setupTextViewIfNeeded;
- (void)tearDownButton;
- (void)setupButtonIfNeeded;
- (void)setupContainerIfNeeded;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

