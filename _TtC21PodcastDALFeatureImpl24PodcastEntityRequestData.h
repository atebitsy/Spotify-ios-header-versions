//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastRequestData-Protocol.h"

@class NSArray, NSData, NSPredicate, NSString;

@interface _TtC21PodcastDALFeatureImpl24PodcastEntityRequestData : NSObject <SPTPodcastRequestData>
{
    // Error parsing type: , name: requestStringTemplate
    // Error parsing type: , name: filterPredicate
    // Error parsing type: , name: sortDescriptors
    // Error parsing type: , name: requestAction
    // Error parsing type: , name: requestBody
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSData *requestBody;
@property(nonatomic, readonly) NSString *requestAction;
@property(nonatomic, readonly) NSArray *sortDescriptors;
@property(nonatomic, readonly) NSPredicate *filterPredicate; // @synthesize filterPredicate;
@property(nonatomic, readonly) NSString *requestStringTemplate;

@end

