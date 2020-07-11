//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTDrivingMotionDetectionLoaderResult;
@protocol SPTDrivingStateDetector;

@protocol SPTDrivingMotionBasedStateDetectorDelegate <NSObject>
- (void)drivingStateDetector:(id <SPTDrivingStateDetector>)arg1 didReceivePredictionResult:(SPTDrivingMotionDetectionLoaderResult *)arg2;

@optional
- (void)drivingStateDetectorDidSendPredictionRequest:(id <SPTDrivingStateDetector>)arg1;
- (void)drivingStateDetectorDidReceiveSensorBatch:(id <SPTDrivingStateDetector>)arg1;
- (void)drivingStateDetector:(id <SPTDrivingStateDetector>)arg1 didReceivePredictionError:(NSError *)arg2;
@end
