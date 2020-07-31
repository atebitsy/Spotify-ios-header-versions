//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSString;

@interface SPTVoiceLibrarySpeechProxyRequest : NSObject <NSCopying>
{
    NSString *_endpoint;
    NSDictionary *_queryParams;
    NSDictionary *_headers;
    unsigned long long _hostType;
    unsigned long long _contentType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) unsigned long long hostType; // @synthesize hostType=_hostType;
@property(readonly, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) NSDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(readonly, copy, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEndpoint:(id)arg1 queryParams:(id)arg2 headers:(id)arg3;
- (id)initWithEndpoint:(id)arg1 queryParams:(id)arg2;
- (id)initWithEndpoint:(id)arg1;
- (_Bool)spt_isValidEndpointForConsumer:(long long)arg1;

@end

