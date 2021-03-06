//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTLoginDelayedSignupDialogLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    long long _dialogSource;
}

- (void).cxx_destruct;
@property(nonatomic) long long dialogSource; // @synthesize dialogSource=_dialogSource;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (id)uriFromDialogSource;
- (void)logInteractionWithIntent:(id)arg1;
- (void)logImpression;
- (void)resetDialogSource:(long long)arg1;
- (void)logFacebookButtonInteraction;
- (void)logGuestButtonInteraction;
- (void)logSignupButtonInteraction;
- (void)logLoginButtonInteraction;
- (id)initWithLogCenter:(id)arg1;
- (id)initWithLogCenter:(id)arg1 dialogSource:(long long)arg2;

@end

