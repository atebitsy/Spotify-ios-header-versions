//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOnboardingFlowCoordinator-Protocol.h"

@protocol SPTOnboardingServiceFlowStateReporter;

@interface _TtC22AllBoardingFeatureImpl26AllBoardingFlowCoordinator : NSObject <SPTOnboardingFlowCoordinator>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: modalPresentationController
    // Error parsing type: , name: dataLoaderFactory
    // Error parsing type: , name: pageLoaderViewService
    // Error parsing type: , name: networkService
    // Error parsing type: , name: glueService
    // Error parsing type: , name: ubiLogger
    // Error parsing type: , name: followModelFactory
    // Error parsing type: , name: modalPresentationMonitor
    // Error parsing type: , name: eventSender
    // Error parsing type: , name: initialDeeplink
    // Error parsing type: , name: curationManager
    // Error parsing type: , name: flowLoop
    // Error parsing type: , name: navigationController
    // Error parsing type: , name: presentationMode
}

- (void).cxx_destruct;
- (id)init;
- (void)startOnboardingFlow;
@property(nonatomic) __weak id <SPTOnboardingServiceFlowStateReporter> delegate; // @synthesize delegate;

@end

