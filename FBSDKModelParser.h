//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBSDKModelParser : NSObject
{
}

+ (_Bool)checkWeights:(unordered_map_32d37657)arg1 withExpectedInfo:(id)arg2;
+ (id)getMTMLWeightsInfo;
+ (id)getKeysMapping;
+ (_Bool)validateWeights:(unordered_map_32d37657)arg1 forKey:(id)arg2;
+ (unordered_map_32d37657)parseWeightsData:(id)arg1;

@end

