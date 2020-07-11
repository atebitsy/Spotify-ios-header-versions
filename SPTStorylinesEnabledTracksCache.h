//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, SPTStorylinesEntitiesLoadEventLogger, SPTStorylinesPersistentCache;

@interface SPTStorylinesEnabledTracksCache : NSObject
{
    SPTStorylinesPersistentCache *_persistentCache;
    NSCache *_memoryCache;
    SPTStorylinesEntitiesLoadEventLogger *_entitiesLogger;
}

@property(readonly, nonatomic) SPTStorylinesEntitiesLoadEventLogger *entitiesLogger; // @synthesize entitiesLogger=_entitiesLogger;
@property(readonly, nonatomic) NSCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(readonly, nonatomic) SPTStorylinesPersistentCache *persistentCache; // @synthesize persistentCache=_persistentCache;
- (void).cxx_destruct;
- (void)loadStorylinesEnabledTracksWithCallback:(CDUnknownBlockType)arg1;
- (void)cacheEnabledTracks:(id)arg1;
- (id)cachedContentKey;
- (id)initWithPersistentCache:(id)arg1 entitiesLogger:(id)arg2;

@end
