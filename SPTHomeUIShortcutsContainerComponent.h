//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponent-Protocol.h"

@class NSSet, SPTHomeUIFeatureProperties, SPTHomeUILoggerImplementation;

@interface SPTHomeUIShortcutsContainerComponent : HUGSThemableComponent <HUBComponent>
{
    SPTHomeUILoggerImplementation *_logger;
    SPTHomeUIFeatureProperties *_remoteConfigProperties;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTHomeUIFeatureProperties *remoteConfigProperties; // @synthesize remoteConfigProperties=_remoteConfigProperties;
@property(readonly, nonatomic) SPTHomeUILoggerImplementation *logger; // @synthesize logger=_logger;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1 logger:(id)arg2 remoteConfigProperties:(id)arg3;

@end

