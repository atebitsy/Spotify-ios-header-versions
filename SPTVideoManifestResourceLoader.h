//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTVideoManifestService;
@protocol BMPlaybackIdentity;

@interface SPTVideoManifestResourceLoader : NSObject
{
    SPTVideoManifestService *_manifestService;
    id <BMPlaybackIdentity> _identity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <BMPlaybackIdentity> identity; // @synthesize identity=_identity;
@property(retain, nonatomic) SPTVideoManifestService *manifestService; // @synthesize manifestService=_manifestService;
- (void)loadManifestResource:(CDUnknownBlockType)arg1;
- (id)initWithIdentity:(id)arg1 manifestService:(id)arg2;

@end

