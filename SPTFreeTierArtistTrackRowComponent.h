//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponent.h"

#import "HUBComponent-Protocol.h"

@class NSSet;
@protocol _TtP24EncoreIntegrationFeature24SPTArtistTrackRowFactory_;

@interface SPTFreeTierArtistTrackRowComponent : HUGSThemableComponent <HUBComponent>
{
    id <_TtP24EncoreIntegrationFeature24SPTArtistTrackRowFactory_> _artistComponentFactory;
}

@property(retain, nonatomic) id <_TtP24EncoreIntegrationFeature24SPTArtistTrackRowFactory_> artistComponentFactory; // @synthesize artistComponentFactory=_artistComponentFactory;
- (void).cxx_destruct;
- (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2;
- (id)createViewWithFrame:(struct CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *layoutTraits;
- (id)initWithTheme:(id)arg1 encoreComponentFactory:(id)arg2;

@end
