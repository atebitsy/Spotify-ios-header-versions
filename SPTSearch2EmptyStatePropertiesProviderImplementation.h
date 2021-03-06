//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearch2EmptyStatePropertiesProvider-Protocol.h"

@class NSString;

@interface SPTSearch2EmptyStatePropertiesProviderImplementation : NSObject <SPTSearch2EmptyStatePropertiesProvider>
{
    _Bool _offlineSearchEnabled;
    _Bool _podcastFeatureEnabled;
}

@property(readonly, nonatomic) _Bool podcastFeatureEnabled; // @synthesize podcastFeatureEnabled=_podcastFeatureEnabled;
@property(readonly, nonatomic) _Bool offlineSearchEnabled; // @synthesize offlineSearchEnabled=_offlineSearchEnabled;
- (id)offlineBodyString;
- (id)onlineBodyString;
- (id)truncateString:(id)arg1 toMaxLength:(unsigned long long)arg2;
- (id)noResultsBodyForConnectivityState:(unsigned long long)arg1;
- (id)noResultsTitleForQuery:(id)arg1;
- (id)noResultsEmptyStatePropertiesForQuery:(id)arg1 connectivityState:(unsigned long long)arg2;
- (id)initialEmptyStatePropertiesForConnectivityState:(unsigned long long)arg1;
- (id)initWithOfflineSearchEnabled:(_Bool)arg1 podcastFeatureEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

