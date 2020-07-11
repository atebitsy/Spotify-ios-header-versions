//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTBaseViewModel.h"

@class NSURL, SPTProfileViewAllViewModelData;
@protocol SPTLinkDispatcher;

@interface SPTProfileViewAllViewModel : SPTBaseViewModel
{
    long long _dataType;
    SPTProfileViewAllViewModelData *_data;
    NSURL *_uri;
    id <SPTLinkDispatcher> _linkDispatcher;
}

+ (id)entityWithDataType:(long long)arg1 dictionary:(id)arg2;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) NSURL *uri; // @synthesize uri=_uri;
@property(readonly, nonatomic) SPTProfileViewAllViewModelData *data; // @synthesize data=_data;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
- (void).cxx_destruct;
- (id)entitiesListKey;
- (void)pushViewControllerForEntity:(id)arg1 rank:(unsigned long long)arg2;
- (id)parseResponse:(id)arg1 requestKey:(id)arg2 error:(id *)arg3;
- (void)requestData;
- (id)initWithRequestURLDictionary:(id)arg1 offlineModeState:(id)arg2 url:(id)arg3 dataType:(long long)arg4 dataLoader:(id)arg5 linkDispatcher:(id)arg6;

@end
