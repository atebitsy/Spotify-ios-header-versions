//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTPodcastTestManager, SPTProductState;

@interface SPTSearch2RequestParametersProvider : NSObject
{
    _Bool _topicsEnabled;
    _Bool _v2AssistedCurationEnabled;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTProductState> _productState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool v2AssistedCurationEnabled; // @synthesize v2AssistedCurationEnabled=_v2AssistedCurationEnabled;
@property(readonly, nonatomic) _Bool topicsEnabled; // @synthesize topicsEnabled=_topicsEnabled;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
- (id)entityTypes;
- (id)makeDefaultSearchRequestParameters;
- (id)initWithPodcastService:(id)arg1 sessionService:(id)arg2 topicsEnabled:(_Bool)arg3 v2AssistedCurationEnabled:(_Bool)arg4;

@end

