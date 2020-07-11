//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeRecentlyPlayedContentOperation-Protocol.h"

@class NSString;
@protocol HUBContentOperationDelegate, SPTRecentlyPlayedList, SPTUBIHubsUtilities;

@interface SPTHomeRecentlyPlayedContentOperationImplementation : NSObject <SPTHomeRecentlyPlayedContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    id <SPTRecentlyPlayedList> _recentlyPlayedList;
    id <SPTUBIHubsUtilities> _ubiHubsInstrumentation;
}

+ (id)recentlyPlayedInfoFromViewModelBuilder:(id)arg1;
@property(readonly, nonatomic) id <SPTUBIHubsUtilities> ubiHubsInstrumentation; // @synthesize ubiHubsInstrumentation=_ubiHubsInstrumentation;
@property(readonly, nonatomic) id <SPTRecentlyPlayedList> recentlyPlayedList; // @synthesize recentlyPlayedList=_recentlyPlayedList;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)styleForEntityURL:(id)arg1;
- (id)ubiLoggingDataForRecentlyPlayedShelfWithPosition:(unsigned long long)arg1 itemIndex:(unsigned long long)arg2 sourceContentIdentifier:(id)arg3;
- (void)addLoggingForItemAtIndex:(unsigned long long)arg1 toItemComponentModelBuilder:(id)arg2 usingRecentlyPlayedInfo:(id)arg3;
- (void)addItem:(id)arg1 withRecentlyPlayedInfo:(id)arg2 index:(unsigned long long)arg3 toCarousel:(id)arg4;
- (void)configureRecentlyPlayedItemComponent:(id)arg1 withItem:(id)arg2;
- (void)configureHomeComponent:(id)arg1 name:(id)arg2 title:(id)arg3 position:(unsigned long long)arg4;
- (void)removeRecentlyPlayedComponentFromViewModelBuilder:(id)arg1;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (id)initWithRecentlyPlayedList:(id)arg1 ubiHubsInstrumentation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *itemComponentModelIdentifierPrefix;
@property(readonly) Class superclass;

@end

