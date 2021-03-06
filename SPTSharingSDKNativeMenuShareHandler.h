//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSharingSDKShareHandler-Protocol.h"

@class NSString, SPTSharingSDKActivityViewControllerWrapper, SPTSharingSDKLinkGenerator;
@protocol SPTSharingSDKEntityData, SPTSharingSDKViewControllerPresenter;

@interface SPTSharingSDKNativeMenuShareHandler : NSObject <SPTSharingSDKShareHandler>
{
    id <SPTSharingSDKEntityData> _entityData;
    SPTSharingSDKLinkGenerator *_linkGenerator;
    id <SPTSharingSDKViewControllerPresenter> _viewControllerPresenter;
    SPTSharingSDKActivityViewControllerWrapper *_activityViewControllerWrapper;
}

+ (id)failedToCompleteUIActivityWithUnderlyingError:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) SPTSharingSDKActivityViewControllerWrapper *activityViewControllerWrapper; // @synthesize activityViewControllerWrapper=_activityViewControllerWrapper;
@property(readonly, nonatomic) id <SPTSharingSDKViewControllerPresenter> viewControllerPresenter; // @synthesize viewControllerPresenter=_viewControllerPresenter;
@property(readonly, nonatomic) SPTSharingSDKLinkGenerator *linkGenerator; // @synthesize linkGenerator=_linkGenerator;
@property(readonly, nonatomic) id <SPTSharingSDKEntityData> entityData; // @synthesize entityData=_entityData;
- (id)completionDataWithShareID:(id)arg1 systemDestination:(id)arg2;
- (void)presentActivityViewControllerWithShareableURL:(id)arg1 shareID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)performShareAction:(CDUnknownBlockType)arg1;
- (id)initWithEntityData:(id)arg1 linkGenerator:(id)arg2 viewControllerPresenter:(id)arg3 activityViewControllerWrapper:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

