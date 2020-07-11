//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFindFriendsFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTFindFriendsLogger;
@protocol FollowFeature, SPContextMenuFeature, SPTContainerService, SPTContainerUIService, SPTCoreService, SPTGLUEService, SPTNetworkService, SPTSessionService, SPTURIDispatchService;

@interface SPTFindFriendsFeatureImplementation : NSObject <SPTFindFriendsFeature>
{
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTCoreService> _coreService;
    id <SPTNetworkService> _networkService;
    id <FollowFeature> _followFeature;
    SPTFindFriendsLogger *_logger;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTGLUEService> _glueService;
    id <SPContextMenuFeature> _contextMenuFeature;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(retain, nonatomic) SPTFindFriendsLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <FollowFeature> followFeature; // @synthesize followFeature=_followFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (id)provideFindFriendsTheme;
- (void)presentFindFriendsFromViewController:(id)arg1;
- (id)provideFindFriendsVCForURI:(id)arg1 context:(id)arg2;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
