//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileSocialListening_ConfirmEndSessionDialog_CancelButtonEventFactory, SPTUBIMobileSocialListening_ConfirmEndSessionDialog_EndButtonEventFactory;

@protocol SPTUBIMobileSocialListening_ConfirmEndSessionDialogEventFactory <NSObject>
- (id <SPTUBIMobileSocialListening_ConfirmEndSessionDialog_CancelButtonEventFactory>)cancelButtonFactory;
- (id <SPTUBIMobileSocialListening_ConfirmEndSessionDialog_EndButtonEventFactory>)endButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

