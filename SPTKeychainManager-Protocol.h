//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSString;

@protocol SPTKeychainManager <NSObject>
- (NSError *)deleteAllData;
- (_Bool)deleteObjectForDomain:(NSString *)arg1 andKey:(NSString *)arg2 accessGroup:(NSString *)arg3 accessAttr:(NSString *)arg4 synchronizable:(_Bool)arg5;
- (_Bool)deleteStringForDomain:(NSString *)arg1 andKey:(NSString *)arg2 accessGroup:(NSString *)arg3 accessAttr:(NSString *)arg4;
- (NSError *)setData:(NSData *)arg1 forDomain:(NSString *)arg2 andKey:(NSString *)arg3 accessGroup:(NSString *)arg4 accessAttr:(NSString *)arg5 synchronizable:(_Bool)arg6;
- (NSError *)setString:(NSString *)arg1 forDomain:(NSString *)arg2 andKey:(NSString *)arg3 accessGroup:(NSString *)arg4 accessAttr:(NSString *)arg5;
- (NSData *)dataForDomain:(NSString *)arg1 andKey:(NSString *)arg2 accessGroup:(NSString *)arg3 accessAttr:(NSString *)arg4 synchronizable:(_Bool)arg5;
- (NSString *)stringForDomain:(NSString *)arg1 andKey:(NSString *)arg2 accessGroup:(NSString *)arg3 accessAttr:(NSString *)arg4;
@end

