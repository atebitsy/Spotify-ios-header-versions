//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastUIComponentFactory-Protocol.h"

@class NSString, SPTPodcastUIFeatureProperties;
@protocol GLUETheme;

@interface SPTPodcastUIComponentFactoryImplementation : NSObject <SPTPodcastUIComponentFactory>
{
    id <GLUETheme> _theme;
    SPTPodcastUIFeatureProperties *_featureProperties;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTPodcastUIFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void)unregisterPodcastComponentsFromComponentRegistry:(id)arg1;
- (void)registerPodcastComponentsToComponentRegistry:(id)arg1;
- (id)provideBrowseImageHeaderComponents;
- (id)providePodcastHubComponents;
- (id)initWithTheme:(id)arg1 featureProperties:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

