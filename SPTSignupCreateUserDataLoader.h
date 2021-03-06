//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTSignupDataLoader-Protocol.h"

@class NSString, SPTDataLoader, SPTSignupRequestProvider, SPTSignupResponseProcessor;
@protocol SPTLoginLogger, SPTSignupDataLoaderDelegate;

@interface SPTSignupCreateUserDataLoader : NSObject <SPTDataLoaderDelegate, SPTSignupDataLoader>
{
    id <SPTSignupDataLoaderDelegate> delegate;
    SPTDataLoader *_dataLoader;
    SPTSignupResponseProcessor *_responseProcessor;
    SPTSignupRequestProvider *_requestProvider;
    id <SPTLoginLogger> _logger;
    NSString *_userCreationAttemptID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *userCreationAttemptID; // @synthesize userCreationAttemptID=_userCreationAttemptID;
@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTSignupRequestProvider *requestProvider; // @synthesize requestProvider=_requestProvider;
@property(readonly, nonatomic) SPTSignupResponseProcessor *responseProcessor; // @synthesize responseProcessor=_responseProcessor;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTSignupDataLoaderDelegate> delegate; // @synthesize delegate;
- (void)resetCurrentLoggerAttemptID;
- (void)logUserCreationCompletionWithError:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)performCreateUserRequest:(id)arg1;
- (void)performCreateGuestUserWithUserInfoModel:(id)arg1;
- (void)performCreateUserWithUserInfoModel:(id)arg1;
- (void)performCreateFacebookUserWithInfoModel:(id)arg1;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1 responseProcessor:(id)arg2 requestProvider:(id)arg3 logger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

