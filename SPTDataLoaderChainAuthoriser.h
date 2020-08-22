//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderAuthorisationHostRegistration-Protocol.h"
#import "SPTDataLoaderAuthoriser-Protocol.h"
#import "SPTDataLoaderAuthoriserDelegate-Protocol.h"

@class NSArray, NSMapTable, NSString;
@protocol SPTDataLoaderAuthoriserDelegate;

@interface SPTDataLoaderChainAuthoriser : NSObject <SPTDataLoaderAuthoriser, SPTDataLoaderAuthorisationHostRegistration, SPTDataLoaderAuthoriserDelegate>
{
    NSString *_identifier;
    id <SPTDataLoaderAuthoriserDelegate> _delegate;
    NSArray *_authorisers;
    NSMapTable *_requestToAuthoriserIndexDictionary;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *requestToAuthoriserIndexDictionary; // @synthesize requestToAuthoriserIndexDictionary=_requestToAuthoriserIndexDictionary;
@property(copy, nonatomic) NSArray *authorisers; // @synthesize authorisers=_authorisers;
@property(nonatomic) __weak id <SPTDataLoaderAuthoriserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)dataLoaderAuthoriser:(id)arg1 didFailToAuthoriseRequest:(id)arg2 withError:(id)arg3;
- (void)dataLoaderAuthoriser:(id)arg1 authorisedRequest:(id)arg2;
- (void)unregisterAuthorisationHostsName:(id)arg1;
- (void)registerAuthorisationHosts:(id)arg1 withName:(id)arg2;
- (void)handleAuthoriseRequest:(id)arg1;
- (_Bool)requestRequiresAuthorisation:(id)arg1;
- (void)requestFailedAuthorisation:(id)arg1;
- (void)refresh;
- (void)authoriseRequest:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAuthorisers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

