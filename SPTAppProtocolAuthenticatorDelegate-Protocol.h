//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTAppProtocolAuthenticator;

@protocol SPTAppProtocolAuthenticatorDelegate <NSObject>
- (void)authenticator:(id <SPTAppProtocolAuthenticator>)arg1 didFailWithReason:(NSString *)arg2 description:(NSString *)arg3 andReply:(void (^)(id <SPTWAMPMessage>))arg4;
- (void)authenticationDidSucceedWithAuthenticator:(id <SPTAppProtocolAuthenticator>)arg1 andReply:(void (^)(id <SPTWAMPMessage>))arg2;
@end
