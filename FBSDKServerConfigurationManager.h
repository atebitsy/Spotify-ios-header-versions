//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKServerConfigurationManager : NSObject
{
}

+ (CDUnknownBlockType)_wrapperBlockForLoadBlock:(CDUnknownBlockType)arg1;
+ (_Bool)_serverConfigurationTimestampIsValid:(id)arg1;
+ (id)_parseDialogConfigurations:(id)arg1;
+ (void)_didProcessConfigurationFromNetwork:(id)arg1 appID:(id)arg2 error:(id)arg3;
+ (id)requestToLoadServerConfiguration:(id)arg1;
+ (void)processLoadRequestResponse:(id)arg1 error:(id)arg2 appID:(id)arg3;
+ (void)loadServerConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
+ (id)cachedServerConfiguration;
+ (void)clearCache;
+ (void)initialize;
- (id)init;

@end

