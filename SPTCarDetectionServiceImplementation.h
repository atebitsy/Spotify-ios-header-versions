//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCarDetectionService-Protocol.h"
#import "SPTCarDetectionTestManagerObserver-Protocol.h"

@class NSString, SPTAccessory, SPTAllocationContext, SPTCarDetectionAccessoryBasedCarDetector, SPTCarDetectionMotionBasedCarDetector, SPTCarDetectionTestManager, SPTCarDetectorMiddleware;
@protocol SPTAccessoryManagerService, SPTCarmageddonService, SPTExternalIntegrationDebugLogService, SPTFeatureFlaggingService;

@interface SPTCarDetectionServiceImplementation : NSObject <SPTCarDetectionTestManagerObserver, SPTCarDetectionService>
{
    SPTAccessory *_debugCarAccessory;
    id <SPTAccessoryManagerService> _accessoryManagerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTExternalIntegrationDebugLogService> _debugLogService;
    id <SPTCarmageddonService> _carmageddonService;
    SPTCarDetectionTestManager *_testManager;
    SPTCarDetectionAccessoryBasedCarDetector *_accessoryBasedCarDetector;
    SPTCarDetectionMotionBasedCarDetector *_motionBasedCarDetector;
    SPTCarDetectorMiddleware *_carDetectorMiddleware;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTCarDetectorMiddleware *carDetectorMiddleware; // @synthesize carDetectorMiddleware=_carDetectorMiddleware;
@property(retain, nonatomic) SPTCarDetectionMotionBasedCarDetector *motionBasedCarDetector; // @synthesize motionBasedCarDetector=_motionBasedCarDetector;
@property(retain, nonatomic) SPTCarDetectionAccessoryBasedCarDetector *accessoryBasedCarDetector; // @synthesize accessoryBasedCarDetector=_accessoryBasedCarDetector;
@property(retain, nonatomic) SPTCarDetectionTestManager *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTCarmageddonService> carmageddonService; // @synthesize carmageddonService=_carmageddonService;
@property(nonatomic) __weak id <SPTExternalIntegrationDebugLogService> debugLogService; // @synthesize debugLogService=_debugLogService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTAccessoryManagerService> accessoryManagerService; // @synthesize accessoryManagerService=_accessoryManagerService;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTAccessory *debugCarAccessory; // @synthesize debugCarAccessory=_debugCarAccessory;
- (void)testManager:(id)arg1 didChangeDebugCarConnectedEnabled:(_Bool)arg2;
- (id)provideCarDetector;
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
