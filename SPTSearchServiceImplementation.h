//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTRemoteConfigurationService, SPTScannablesService, SPTSearchPlatformService;

@interface SPTSearchServiceImplementation : NSObject <SPTSearchService>
{
    id <SPTContainerService> _containerService;
    id <SPTScannablesService> _scannablesService;
    id <SPTSearchPlatformService> _searchPlatformService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTSearchPlatformService> searchPlatformService; // @synthesize searchPlatformService=_searchPlatformService;
@property(nonatomic) __weak id <SPTScannablesService> scannablesService; // @synthesize scannablesService=_scannablesService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (id)makeViewControllerWithReferrerIdentifier:(id)arg1;
- (id)searchConfiguration;
- (id)provideSearchViewControllerForURL:(id)arg1 context:(id)arg2;
- (void)registerSearchPage;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

