//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTUBIEventFactoryLocation, SPTUBIFTFMobileSearch_Content_Error_RetryButtonEventFactory, SPTUBIInteractionEvent;

@protocol SPTUBIFTFMobileSearch_Content_ErrorEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)hitRetry;
- (id <SPTUBIFTFMobileSearch_Content_Error_RetryButtonEventFactory>)retryButtonFactoryWithReason:(NSString *)arg1;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
