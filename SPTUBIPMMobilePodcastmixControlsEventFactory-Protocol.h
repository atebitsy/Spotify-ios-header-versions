//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTUBIEventLocation, SPTUBIPMMobilePodcastmixControls_CustomizeIconButtonEventFactory, SPTUBIPMMobilePodcastmixControls_CustomizeMenuActionEventFactory, SPTUBIPMMobilePodcastmixControls_CustomizeSnackbarButtonEventFactory, SPTUBIPMMobilePodcastmixControls_CustomizeSummaryEditButtonEventFactory, SPTUBIPMMobilePodcastmixControls_ErrorScreenEventFactory, SPTUBIPMMobilePodcastmixControls_ErrorSnackbarEventFactory, SPTUBIPMMobilePodcastmixControls_HelpButtonEventFactory, SPTUBIPMMobilePodcastmixControls_ItemlistEventFactory, SPTUBIPMMobilePodcastmixControls_TopicFilterListEventFactory;

@protocol SPTUBIPMMobilePodcastmixControlsEventFactory <NSObject>
- (id <SPTUBIPMMobilePodcastmixControls_CustomizeSnackbarButtonEventFactory>)customizeSnackbarButtonFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIPMMobilePodcastmixControls_CustomizeMenuActionEventFactory>)customizeMenuActionFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIPMMobilePodcastmixControls_CustomizeIconButtonEventFactory>)customizeIconButtonFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIPMMobilePodcastmixControls_CustomizeSummaryEditButtonEventFactory>)customizeSummaryEditButtonFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIPMMobilePodcastmixControls_ErrorSnackbarEventFactory>)errorSnackbarFactoryWithReason:(NSString *)arg1;
- (id <SPTUBIPMMobilePodcastmixControls_ErrorScreenEventFactory>)errorScreenFactoryWithReason:(NSString *)arg1;
- (id <SPTUBIPMMobilePodcastmixControls_ItemlistEventFactory>)itemlistFactory;
- (id <SPTUBIPMMobilePodcastmixControls_TopicFilterListEventFactory>)topicFilterListFactory;
- (id <SPTUBIPMMobilePodcastmixControls_HelpButtonEventFactory>)helpButtonFactory;
- (id <SPTUBIEventLocation>)_location;
@end
