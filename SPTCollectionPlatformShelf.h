//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShelf-Protocol.h"

@class NSString, NSURL;
@protocol SPTCollectionLogger, SPTCollectionPlatform, SPTCollectionPlatformTestManager;

@interface SPTCollectionPlatformShelf : NSObject <SPTShelf>
{
    id <SPTCollectionPlatform> _collectionPlatform;
    NSURL *_entityURL;
    id <SPTCollectionPlatformTestManager> _testManager;
    id <SPTCollectionLogger> _logger;
}

@property(readonly, nonatomic) id <SPTCollectionLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) NSURL *entityURL; // @synthesize entityURL=_entityURL;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
- (void).cxx_destruct;
- (id)initWithCollectionPlatform:(id)arg1 entityURL:(id)arg2 testManager:(id)arg3 logger:(id)arg4;
- (void)shelfViewModel:(CDUnknownBlockType)arg1;
- (void)execute:(id)arg1 source:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

