//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTUBIEventLocation, SPTUBIMobileHome_ItemEventFactory, SPTUBIMobileHome_LargeCardEventFactory, SPTUBIMobileHome_PromoV1EventFactory, SPTUBIMobileHome_PromoV2EventFactory, SPTUBIMobileHome_SectionHeaderEventFactory, SPTUBIMobileHome_ShelvesEventFactory, SPTUBIMobileHome_TasteOnboardingEventFactory, SPTUBIMobileHome_ToolbarEventFactory;

@protocol SPTUBIMobileHomeEventFactory <NSObject>
- (id <SPTUBIMobileHome_ItemEventFactory>)itemFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2 uri:(NSURL *)arg3;
- (id <SPTUBIMobileHome_LargeCardEventFactory>)largeCardFactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2 uri:(NSURL *)arg3;
- (id <SPTUBIMobileHome_SectionHeaderEventFactory>)sectionHeaderFactory;
- (id <SPTUBIMobileHome_TasteOnboardingEventFactory>)tasteOnboardingFactoryWithPosition:(long long)arg1;
- (id <SPTUBIMobileHome_ShelvesEventFactory>)shelvesFactory;
- (id <SPTUBIMobileHome_PromoV2EventFactory>)promoV2FactoryWithIdentifier:(NSString *)arg1 position:(long long)arg2 uri:(NSURL *)arg3;
- (id <SPTUBIMobileHome_PromoV1EventFactory>)promoV1FactoryWithIdentifier:(NSString *)arg1 uri:(NSURL *)arg2;
- (id <SPTUBIMobileHome_ToolbarEventFactory>)toolbarFactory;
- (id <SPTUBIEventLocation>)_location;
@end

