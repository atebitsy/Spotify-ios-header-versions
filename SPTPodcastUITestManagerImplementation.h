//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastUITestManager-Protocol.h"

@class NSString;
@protocol SPTAbbaFeatureFlags;

@interface SPTPodcastUITestManagerImplementation : NSObject <SPTPodcastUITestManager>
{
    id <SPTAbbaFeatureFlags> _featureFlags;
}

@property(readonly, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isGranularDownloadProgressEnabled) _Bool granularDownloadProgressEnabled;
- (id)initWithFeatureFlags:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

