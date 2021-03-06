//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTReportContentService-Protocol.h"

@class NSString, SPTAllocationContext, SPTReportContentReporter;
@protocol SPContextMenuFeature, SPTModerationService, SPTNetworkService;

@interface SPTReportContentServiceImplementation : NSObject <SPTReportContentService>
{
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTNetworkService> _networkService;
    id <SPTModerationService> _moderationService;
    SPTReportContentReporter *_reporter;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTReportContentReporter *reporter; // @synthesize reporter=_reporter;
@property(nonatomic) __weak id <SPTModerationService> moderationService; // @synthesize moderationService=_moderationService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
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

