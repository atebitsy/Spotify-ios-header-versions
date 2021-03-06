//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoResourceLoaderFactory-Protocol.h"

@class NSArray, NSString;
@protocol SPTVideoMediaExtension;

@interface SPTVideoResourceLoaderFactoryImpl : NSObject <SPTVideoResourceLoaderFactory>
{
    NSArray *_mediaExtensions;
    id <SPTVideoMediaExtension> _fallbackMediaExtension;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTVideoMediaExtension> fallbackMediaExtension; // @synthesize fallbackMediaExtension=_fallbackMediaExtension;
@property(copy, nonatomic) NSArray *mediaExtensions; // @synthesize mediaExtensions=_mediaExtensions;
- (id)createResourceLoaderWithIdentity:(id)arg1;
- (id)initWithMediaExtensions:(id)arg1 fallbackMediaExtension:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

