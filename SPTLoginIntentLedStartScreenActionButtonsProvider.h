//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginTestManager;

@interface SPTLoginIntentLedStartScreenActionButtonsProvider : NSObject
{
    SPTLoginTestManager *_testManager;
    unsigned long long _intent;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long intent; // @synthesize intent=_intent;
@property(readonly, nonatomic) SPTLoginTestManager *testManager; // @synthesize testManager=_testManager;
- (id)emailButtonAccessibilityIdentifier;
- (id)emailSignupButtonViewModel;
- (id)emailLoginButtonViewModel;
- (id)phoneNumberButtonViewModel;
- (id)facebookButtonViewModel;
- (id)appleButtonViewModel;
- (id)makeActionButtons;
- (id)initWithTestManager:(id)arg1 intent:(unsigned long long)arg2;

@end

