//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastRequestData-Protocol.h"

@class NSArray, NSData, NSPredicate, NSString;

@interface _TtC21PodcastDALFeatureImpl33PodcastEpisodeUnplayedRequestData : NSObject <SPTPodcastRequestData>
{
    // Error parsing type: , name: requestStringTemplate
    // Error parsing type: , name: filterPredicate
    // Error parsing type: , name: sortDescriptors
    // Error parsing type: , name: requestAction
    // Error parsing type: , name: requestBody
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSData *requestBody;
@property(nonatomic, copy) NSString *requestAction;
@property(nonatomic, copy) NSArray *sortDescriptors;
@property(nonatomic, retain) NSPredicate *filterPredicate; // @synthesize filterPredicate;
@property(nonatomic, copy) NSString *requestStringTemplate;

@end

