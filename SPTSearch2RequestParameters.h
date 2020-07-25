//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDate, NSString, NSURLComponents;

@interface SPTSearch2RequestParameters : NSObject <NSCopying>
{
    _Bool _onDemandSetsEnabled;
    NSString *_query;
    NSString *_catalogue;
    NSString *_clientVersion;
    NSString *_country;
    NSArray *_entityTypes;
    NSString *_locale;
    NSDate *_timestamp;
    NSString *_requestId;
    unsigned long long _offset;
    unsigned long long _limit;
    unsigned long long _experience;
    NSString *_drilldownEntityType;
    unsigned long long _endpointVersion;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool onDemandSetsEnabled; // @synthesize onDemandSetsEnabled=_onDemandSetsEnabled;
@property(nonatomic) unsigned long long endpointVersion; // @synthesize endpointVersion=_endpointVersion;
@property(copy, nonatomic) NSString *drilldownEntityType; // @synthesize drilldownEntityType=_drilldownEntityType;
@property(nonatomic) unsigned long long experience; // @synthesize experience=_experience;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(copy, nonatomic) NSArray *entityTypes; // @synthesize entityTypes=_entityTypes;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(copy, nonatomic) NSString *catalogue; // @synthesize catalogue=_catalogue;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void)addDeprecatedPathComponents:(id)arg1;
- (void)addDeprecatedQueryParameters:(id)arg1;
- (id)experiencePathComponent;
- (_Bool)isEqualToSearchRequestParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSURLComponents *urlComponents;
- (id)initWithQuery:(id)arg1 clientVersion:(id)arg2 catalogue:(id)arg3 country:(id)arg4 locale:(id)arg5 timestamp:(id)arg6 requestId:(id)arg7 experience:(unsigned long long)arg8 offset:(unsigned long long)arg9 limit:(unsigned long long)arg10 drilldownEntityType:(id)arg11 endpointVersion:(unsigned long long)arg12 entityTypes:(id)arg13 onDemandSetsEnabled:(_Bool)arg14;

@end

