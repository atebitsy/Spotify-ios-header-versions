//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol SPTTimeReporter;

@interface SPTTimeKeeperFake : NSObject
{
    // Error parsing type: , name: wrappedInstance
}

- (void).cxx_destruct;
- (id)init;
- (void)setTimeReporter:(id)arg1;
@property(nonatomic, readonly) id <SPTTimeReporter> timeReporter;
- (void)sendMeasurement:(id)arg1;
- (id)createTimeMeasurementBuilderWithCategory:(id)arg1 enableInstrumentation:(_Bool)arg2;
- (id)createTimeMeasurementBuilderWithCategory:(id)arg1;
@property(nonatomic, readonly) NSArray *sentMeasurements;

@end

