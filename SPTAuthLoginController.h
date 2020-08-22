//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTConnectivityAsyncScheduler;

@interface SPTAuthLoginController : NSObject
{
    unique_ptr_97a42db5 _cppLoginController;
    struct LoginController *_cppLoginControllerPtr;
    id <SPTConnectivityAsyncScheduler> _scheduler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTConnectivityAsyncScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (void)eraseOfflineUser:(id)arg1;
- (void)setRememberMeModeForUsername:(id)arg1 rememberMe:(_Bool)arg2;
- (void)forgetStoredCredentials:(id)arg1;
- (id)serializableCredentialsAndCanonicalUsername:(id *)arg1;
- (id)loginTaskWithGoogleSignInCredentials:(id)arg1 options:(id)arg2;
- (id)loginTaskWithAppleSignInCredentials:(id)arg1 options:(id)arg2;
- (id)loginTaskWithParentChildCredentials:(id)arg1 options:(id)arg2;
- (id)loginTaskWithOneTimeTokenCredentials:(id)arg1 options:(id)arg2;
- (id)loginTaskWithCredentials:(id)arg1 options:(id)arg2;
- (id)loginTaskWithPhoneNumberIdentifier:(id)arg1 options:(id)arg2;
- (id)loginTaskWithCppCredentials:(variant_a76687c1 *)arg1 options:(id)arg2;
- (struct LoginController *)cpp;
- (void)destroy;
- (void)dealloc;
- (id)initWithLoginController:(unique_ptr_97a42db5)arg1 coreThreadScheduler:(id)arg2;

@end

