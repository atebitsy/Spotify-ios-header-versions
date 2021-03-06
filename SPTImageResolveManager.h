//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTImageResolveProjectionMapLoader;
@protocol SPTImageResolveCacheStatusProvider;

@interface SPTImageResolveManager : NSObject
{
    _Bool _fallbackToOriginal;
    id <SPTImageResolveCacheStatusProvider> _cacheStatusProvider;
    SPTImageResolveProjectionMapLoader *_loader;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool fallbackToOriginal; // @synthesize fallbackToOriginal=_fallbackToOriginal;
@property(readonly, nonatomic) SPTImageResolveProjectionMapLoader *loader; // @synthesize loader=_loader;
@property(readonly, nonatomic) id <SPTImageResolveCacheStatusProvider> cacheStatusProvider; // @synthesize cacheStatusProvider=_cacheStatusProvider;
- (id)createImageResolver;
- (void)refreshConfiguration;
- (id)initWithTransport:(id)arg1 cacheStatusProvider:(id)arg2 userIdentifier:(id)arg3 configurationTTL:(unsigned long long)arg4 fallbackToOriginal:(_Bool)arg5 configurationUpdatedCallback:(CDUnknownBlockType)arg6;

@end

