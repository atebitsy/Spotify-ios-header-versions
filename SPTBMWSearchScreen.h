//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBMWListScreen-Protocol.h"

@class NSDictionary, NSString, NSTimer, SPTAccessory;
@protocol SPTAccessoryActionLogger, SPTBMWListScreenDelegate, SPTExternalIntegrationContent, SPTExternalIntegrationExternalActionOrigin, SPTExternalIntegrationSearchController;

@interface SPTBMWSearchScreen : NSObject <SPTBMWListScreen>
{
    id <SPTBMWListScreenDelegate> _delegate;
    id <SPTExternalIntegrationExternalActionOrigin> _externalActionOrigin;
    id <SPTExternalIntegrationSearchController> _searchController;
    NSDictionary *_searchResult;
    NSTimer *_bounceTimer;
    NSString *_searchString;
    NSString *_lastIssuedSearchString;
    unsigned long long _level;
    SPTAccessory *_currentAccessory;
    id <SPTAccessoryActionLogger> _actionLogger;
    id _debugLog;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id debugLog; // @synthesize debugLog=_debugLog;
@property(readonly, nonatomic) id <SPTAccessoryActionLogger> actionLogger; // @synthesize actionLogger=_actionLogger;
@property(readonly, nonatomic) __weak SPTAccessory *currentAccessory; // @synthesize currentAccessory=_currentAccessory;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *lastIssuedSearchString; // @synthesize lastIssuedSearchString=_lastIssuedSearchString;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) NSTimer *bounceTimer; // @synthesize bounceTimer=_bounceTimer;
@property(retain, nonatomic) NSDictionary *searchResult; // @synthesize searchResult=_searchResult;
@property(readonly, nonatomic) id <SPTExternalIntegrationSearchController> searchController; // @synthesize searchController=_searchController;
@property(readonly, nonatomic) __weak id <SPTBMWListScreenDelegate> delegate; // @synthesize delegate=_delegate;
- (id)sectionContentForGroupIndex:(long long)arg1;
- (id)contentForRow:(long long)arg1 groupIndex:(long long)arg2;
- (id)imageForRow:(long long)arg1 groupIndex:(long long)arg2 preferredSize:(struct CGSize)arg3;
- (long long)targetScreenIndexForRow:(long long)arg1 groupIndex:(long long)arg2;
- (id)titleForLine:(long long)arg1 row:(long long)arg2 groupIndex:(long long)arg3;
- (unsigned long long)numberOfItemsForGroupIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long groupCount;
- (id)titleForGroupIndex:(long long)arg1;
@property(readonly, nonatomic) _Bool canProvideDataImmediately;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *loadingTitle;
@property(readonly, nonatomic) NSString *emptyListTitle;
@property(readonly, nonatomic) id <SPTExternalIntegrationContent> containerContent;
- (void)selectedRow:(long long)arg1 groupIndex:(long long)arg2;
- (void)screenDidAppear;
- (void)screenDidDisappear;
- (void)updateSearchTriggered;
- (void)performSearchWithQuery:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateSearchRequest:(CDUnknownBlockType)arg1;
- (void)update:(CDUnknownBlockType)arg1;
- (void)didChangeSearchString:(id)arg1;
@property(readonly, nonatomic) id <SPTExternalIntegrationExternalActionOrigin> externalActionOrigin; // @synthesize externalActionOrigin=_externalActionOrigin;
- (id)initWithSearchController:(id)arg1 debugLog:(id)arg2 delegate:(id)arg3 currentAccessory:(id)arg4 actionLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

