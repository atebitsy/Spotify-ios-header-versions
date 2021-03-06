//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSettingsFeature-Protocol.h"

@class NSMapTable, NSString, SPTAllocationContext, SettingsRegistryImplementation;
@protocol SPTClientSettings, SPTContainerService, SPTCoreService, SPTSessionService, SPTURIDispatchService;

@interface SPTSettingsFeatureImplementation : NSObject <SPTSettingsFeature>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTCoreService> _coreService;
    id <SPTContainerService> _containerService;
    id <SPTURIDispatchService> _URIDispatchService;
    SettingsRegistryImplementation *_settingsRegistry;
    id <SPTClientSettings> _clientSettings;
    NSMapTable *_featureSettingsPages;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *featureSettingsPages; // @synthesize featureSettingsPages=_featureSettingsPages;
@property(retain, nonatomic) id <SPTClientSettings> clientSettings; // @synthesize clientSettings=_clientSettings;
@property(retain, nonatomic) SettingsRegistryImplementation *settingsRegistry; // @synthesize settingsRegistry=_settingsRegistry;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (id)provideSettingsStructure;
- (id)provideClientSettings;
- (id)provideSettingsDataSourceForServiceIdentifier:(id)arg1;
- (id)provideFeatureSettingsItemFactoryForServiceIdentifier:(id)arg1;
- (id)provideSettingsRegistry;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

