//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSharingSDKShareDialogPresenterData-Protocol.h"

@class NSString, NSURL;

@interface SPTSharingSDKShareDialogPresenterDataImpl : NSObject <SPTSharingSDKShareDialogPresenterData>
{
    NSURL *_shareableURL;
    NSString *_text;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSURL *shareableURL; // @synthesize shareableURL=_shareableURL;
- (id)initWithShareableURL:(id)arg1 text:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
