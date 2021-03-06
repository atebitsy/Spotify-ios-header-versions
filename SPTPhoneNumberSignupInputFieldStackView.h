//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStackView.h>

#import "GLUEStyleable-Protocol.h"
#import "SPTPhoneNumberSignupValidateOtpInputFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, SPTPhoneNumberSignupInputFieldStackViewStyle;
@protocol SPTPhoneNumberSignupInputFieldStackViewDelegate;

@interface SPTPhoneNumberSignupInputFieldStackView : UIStackView <SPTPhoneNumberSignupValidateOtpInputFieldDelegate, GLUEStyleable>
{
    _Bool _inErrorMode;
    NSMutableArray *_codeInputFields;
    id <SPTPhoneNumberSignupInputFieldStackViewDelegate> _delegate;
    SPTPhoneNumberSignupInputFieldStackViewStyle *_style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTPhoneNumberSignupInputFieldStackViewStyle *style; // @synthesize style=_style;
@property(readonly, nonatomic) __weak id <SPTPhoneNumberSignupInputFieldStackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *codeInputFields; // @synthesize codeInputFields=_codeInputFields;
@property(nonatomic) _Bool inErrorMode; // @synthesize inErrorMode=_inErrorMode;
- (void)codeInputFieldDidChangeText:(id)arg1;
- (void)didEndEditing;
- (void)didUpdateInputFields;
- (id)textFieldAtIndex:(long long)arg1;
- (id)nextTextField:(id)arg1;
- (id)previousTextField:(id)arg1;
- (void)setInputFieldAccessibilityIdentifier:(id)arg1;
- (void)textFieldDidDeleteBackward:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateNumberOfInputFields:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *text;
- (_Bool)becomeFirstResponder;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraintsWithStyle:(id)arg1;
- (id)createInputFieldWithStyle:(id)arg1;
- (void)removeLastInputField;
- (void)addInputField;
- (void)setupInputFieldsWithStyle:(id)arg1 numberOfInputFields:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1 style:(id)arg2 numberOfInputFields:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

