//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNoAutorotateViewController-Protocol.h"

@class NSString;

@interface SPTNoAutorotateViewControllerImplementation : UIViewController <SPTNoAutorotateViewController>
{
    long long _supportedOrientation;
}

@property(nonatomic) long long supportedOrientation; // @synthesize supportedOrientation=_supportedOrientation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)initWithSupportedOrientation:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

