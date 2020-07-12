//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastUIService-Protocol.h"

@class NSString, SPTAllocationContext, SPTPodcastUITestHubManager;
@protocol SPTContainerService, SPTGLUEService, SPTHomeUIService, SPTHubFrameworkService, SPTPodcastUIButtonsFactory, SPTPodcastUIComponentFactory, SPTPodcastUIStringFormatter, SPTSettingsFeature, SPTURIDispatchService;

@interface SPTPodcastUIServiceImplementation : NSObject <SPTPodcastUIService>
{
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTHomeUIService> _homeUIService;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTURIDispatchService> _uriDispatchService;
    SPTPodcastUITestHubManager *_hubManager;
    id <SPTPodcastUIStringFormatter> _stringFormatter;
    id <SPTPodcastUIButtonsFactory> _buttonsFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTPodcastUIButtonsFactory> buttonsFactory; // @synthesize buttonsFactory=_buttonsFactory;
@property(retain, nonatomic) id <SPTPodcastUIStringFormatter> stringFormatter; // @synthesize stringFormatter=_stringFormatter;
@property(retain, nonatomic) SPTPodcastUITestHubManager *hubManager; // @synthesize hubManager=_hubManager;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTHomeUIService> homeUIService; // @synthesize homeUIService=_homeUIService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)registerSettingsPage:(id)arg1 featureSettingsItemFactory:(id)arg2 linkDispatcher:(id)arg3;
- (id)providePodcastUITestViewControllerWithURI:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) id <SPTPodcastUIComponentFactory> componentFactory;
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

