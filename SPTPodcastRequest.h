//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastRequest-Protocol.h"

@class NSString, SPTRequest;
@protocol SPTPodcastRequestData;

@interface SPTPodcastRequest : NSObject <SPTPodcastRequest>
{
    SPTRequest *_request;
    id <SPTPodcastRequestData> _requestData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPodcastRequestData> requestData; // @synthesize requestData=_requestData;
@property(retain, nonatomic) SPTRequest *request; // @synthesize request=_request;
- (void)addFilterPredicate:(id)arg1 forRequestString:(id)arg2 appendFilter:(_Bool)arg3;
- (id)convertFilterPredicate:(id)arg1;
- (void)addSortDescriptors:(id)arg1 forRequestString:(id)arg2;
- (id)convertSortOrder:(id)arg1;
- (void)replaceParameter:(id)arg1 withString:(id)arg2 inRequestString:(id)arg3;
- (void)setupRequest;
- (id)initWithRequestData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

