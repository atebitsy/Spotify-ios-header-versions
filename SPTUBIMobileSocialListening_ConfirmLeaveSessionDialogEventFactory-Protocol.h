//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventLocation, SPTUBIMobileSocialListening_ConfirmLeaveSessionDialog_CancelButtonEventFactory, SPTUBIMobileSocialListening_ConfirmLeaveSessionDialog_LeaveButtonEventFactory;

@protocol SPTUBIMobileSocialListening_ConfirmLeaveSessionDialogEventFactory <NSObject>
- (id <SPTUBIMobileSocialListening_ConfirmLeaveSessionDialog_CancelButtonEventFactory>)cancelButtonFactory;
- (id <SPTUBIMobileSocialListening_ConfirmLeaveSessionDialog_LeaveButtonEventFactory>)leaveButtonFactory;
- (id <SPTUBIEventLocation>)_location;
@end

