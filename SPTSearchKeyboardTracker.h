//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTSearchKeyboardTrackerDelegate;

@interface SPTSearchKeyboardTracker : NSObject
{
    id <SPTSearchKeyboardTrackerDelegate> _delegate;
    struct CGRect _keyboardFrame;
}

+ (id)sharedTracker;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTSearchKeyboardTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
- (void)keyboardWillHideWithNotification:(id)arg1;
- (void)keyboardWillShowWithNotification:(id)arg1;
- (id)initWithKeyboardFrame:(struct CGRect)arg1;
- (id)init;

@end

