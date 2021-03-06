//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLoginKeychainManager, SPTLoginLogger;

@interface SPTSigninWithAppleHandler : NSObject
{
    id <SPTLoginKeychainManager> _keychainManager;
    id <SPTLoginLogger> _logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTLoginKeychainManager> keychainManager; // @synthesize keychainManager=_keychainManager;
- (void)storeSigninWithAppleUserId:(id)arg1;
- (void)readSigninWithAppleUserId:(CDUnknownBlockType)arg1;
- (void)validateSigninWithApple:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithKeychainManager:(id)arg1 logger:(id)arg2;

@end

