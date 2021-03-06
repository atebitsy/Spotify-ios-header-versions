//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTBrowseFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _shouldEnableFindPromo;
    _Bool _shouldRegisterMarketingFormatComponents;
    _Bool _shouldUsePageLoader;
    _Bool _shouldEnableMovedEditorialHeader;
}

@property(readonly, nonatomic) _Bool shouldEnableMovedEditorialHeader; // @synthesize shouldEnableMovedEditorialHeader=_shouldEnableMovedEditorialHeader;
@property(readonly, nonatomic) _Bool shouldUsePageLoader; // @synthesize shouldUsePageLoader=_shouldUsePageLoader;
@property(readonly, nonatomic) _Bool shouldRegisterMarketingFormatComponents; // @synthesize shouldRegisterMarketingFormatComponents=_shouldRegisterMarketingFormatComponents;
@property(readonly, nonatomic) _Bool shouldEnableFindPromo; // @synthesize shouldEnableFindPromo=_shouldEnableFindPromo;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

