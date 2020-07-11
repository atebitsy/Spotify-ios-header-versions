//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeUIService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTFeatureFlaggingService, SPTGLUEService, SPTHomeUIComponentFactory, SPTHomeUITestManager, SPTPlayerFeature, SPTSessionService, SPTSettingsFeature, SPTUBIService;

@interface SPTHomeUIServiceImplementation : NSObject <SPTHomeUIService>
{
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTSessionService> _sessionService;
    id <SPTUBIService> _ubiService;
    id <SPTHomeUITestManager> _testManager;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTHomeUITestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideHomeComponentLayoutManager;
@property(readonly, nonatomic) id <SPTHomeUIComponentFactory> componentFactory;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

