//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLoginWelcomeModelBuilder-Protocol.h"

@class NSString, SPTLoginOptionArray;
@protocol SPTLoginWelcomeViewHeader;

@interface SPTLoginFeatureIntentLedLayout : NSObject <SPTLoginWelcomeModelBuilder>
{
    id <SPTLoginWelcomeViewHeader> _header;
    SPTLoginOptionArray *_loginOptionArray;
    SPTLoginOptionArray *_signupOptionArray;
    NSString *_layoutName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *layoutName; // @synthesize layoutName=_layoutName;
@property(readonly, nonatomic) SPTLoginOptionArray *signupOptionArray; // @synthesize signupOptionArray=_signupOptionArray;
@property(readonly, nonatomic) SPTLoginOptionArray *loginOptionArray; // @synthesize loginOptionArray=_loginOptionArray;
@property(readonly, nonatomic) id <SPTLoginWelcomeViewHeader> header; // @synthesize header=_header;
- (id)loginIntentButtonViewModel;
- (id)signupIntentButtonViewModel;
- (id)buildWelcomeModel;
- (id)initWithHeader:(id)arg1 signupOptions:(id)arg2 loginOptions:(id)arg3 layoutName:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

