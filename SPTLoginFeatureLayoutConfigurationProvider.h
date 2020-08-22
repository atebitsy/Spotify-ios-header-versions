//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginFeatureDefaultLayout, SPTLoginFeatureIntentLedLayout, SPTLoginFeatureMethodLedLayout, SPTLoginTestManager, SPTLoginWelcomeViewImageryURLProvider;
@protocol SPTLoginWelcomeModelBuilder, SPTSignupConfiguration;

@interface SPTLoginFeatureLayoutConfigurationProvider : NSObject
{
    unsigned long long _activeLayout;
    id <SPTSignupConfiguration> _configuration;
    SPTLoginTestManager *_testManager;
    SPTLoginWelcomeViewImageryURLProvider *_imageURLProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTLoginWelcomeViewImageryURLProvider *imageURLProvider; // @synthesize imageURLProvider=_imageURLProvider;
@property(readonly, nonatomic) SPTLoginTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTSignupConfiguration> configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) unsigned long long activeLayout; // @synthesize activeLayout=_activeLayout;
- (id)enabledLoginOptions;
- (id)methodLedLayoutLoginOptionArray;
@property(readonly, nonatomic) SPTLoginFeatureMethodLedLayout *methodLedLayout;
- (id)intentLayoutSignupOptionArray;
- (id)intentLayoutLoginOptionArray;
@property(readonly, nonatomic) SPTLoginFeatureIntentLedLayout *intentLedLayout;
- (id)defaultLayoutLoginOptionArray;
@property(readonly, nonatomic) SPTLoginFeatureDefaultLayout *defaultLayout;
- (id)headerModelWithHeader:(id)arg1;
@property(readonly, nonatomic) id <SPTLoginWelcomeModelBuilder> welcomeViewLayout;
- (id)activeLayoutComponentName;
- (unsigned long long)activeLayoutFromConfiguration:(id)arg1 testManager:(id)arg2;
- (id)initWithConfiguration:(id)arg1 testManager:(id)arg2 imageURLProvider:(id)arg3;

@end

