//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPageLoadable-Protocol.h"

@class NSString, SPTScannablesScanViewModelFactory;

@interface SPTScannablesScanViewPageLoadable : NSObject <SPTPageLoadable>
{
    NSString *_sourceIdentifier;
    SPTScannablesScanViewModelFactory *_viewModelFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTScannablesScanViewModelFactory *viewModelFactory; // @synthesize viewModelFactory=_viewModelFactory;
@property(readonly, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (void)loadWithResultHandler:(id)arg1;
- (void)cancel;
- (id)initWithSourceIdentifier:(id)arg1 viewModelFactory:(id)arg2;

@end

