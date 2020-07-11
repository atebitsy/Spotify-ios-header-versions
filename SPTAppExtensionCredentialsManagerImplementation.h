//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAppExtensionCredentialsManager-Protocol.h"

@class NSString;

@interface SPTAppExtensionCredentialsManagerImplementation : NSObject <SPTAppExtensionCredentialsManager>
{
    NSString *_domain;
    NSString *_accessGroup;
}

@property(copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)accessGroup:(long long)arg1;
- (id)ESDKCredentials;
- (_Bool)deleteESDKCredentials;
- (id)setESDKCredentials:(id)arg1;
- (id)storedLoginSession;
- (_Bool)deleteStoredLoginSession;
- (id)setStoredLoginSession:(id)arg1;
- (id)coreCredentials;
- (_Bool)deleteCoreCredentials;
- (id)setCoreCredentials:(id)arg1;
- (id)initWithAccessGroup:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

