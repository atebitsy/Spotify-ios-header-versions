//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBJSONCompatibleBuilder-Protocol.h"

@class NSArray, NSMutableDictionary, NSNumber, NSString, NSURL, UIImage;
@protocol HUBCommandModelBuilder, HUBComponentImageDataBuilder, HUBComponentModel, HUBComponentModelBuilder, HUBComponentTargetBuilder;

@protocol HUBComponentModelBuilder <HUBJSONCompatibleBuilder>
@property(readonly, nonatomic) NSMutableDictionary *customData;
@property(readonly, nonatomic) NSMutableDictionary *loggingData;
@property(readonly, nonatomic) NSMutableDictionary *metadata;
@property(readonly, nonatomic) _Bool targetBuilderExists;
@property(readonly, nonatomic) id <HUBComponentTargetBuilder> targetBuilder;
@property(copy, nonatomic) NSString *iconIdentifier;
@property(retain, nonatomic) UIImage *backgroundImage;
@property(copy, nonatomic) NSURL *backgroundImageURL;
@property(readonly, nonatomic) id <HUBComponentImageDataBuilder> backgroundImageDataBuilder;
@property(retain, nonatomic) UIImage *mainImage;
@property(copy, nonatomic) NSURL *mainImageURL;
@property(readonly, nonatomic) id <HUBComponentImageDataBuilder> mainImageDataBuilder;
@property(copy, nonatomic) NSString *descriptionText;
@property(copy, nonatomic) NSString *accessoryTitle;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *componentCategory;
@property(copy, nonatomic) NSString *componentName;
@property(copy, nonatomic) NSString *componentNamespace;
@property(copy, nonatomic) NSString *groupIdentifier;
@property(copy, nonatomic) NSNumber *preferredIndex;
@property(readonly, copy, nonatomic) NSString *modelIdentifier;
- (void)removeAllChildBuilders;
- (void)removeBuilderForChildWithIdentifier:(NSString *)arg1;
- (NSArray *)buildersForChildrenInGroupWithIdentifier:(NSString *)arg1;
- (id <HUBComponentModelBuilder>)builderForChildWithIdentifier:(NSString *)arg1;
- (_Bool)builderExistsForChildWithIdentifier:(NSString *)arg1;
- (NSArray *)allChildBuilders;
- (id <HUBComponentImageDataBuilder>)builderForCustomImageDataWithIdentifier:(NSString *)arg1;
- (_Bool)builderExistsForCustomImageDataWithIdentifier:(NSString *)arg1;
- (id <HUBCommandModelBuilder>)commandModelBuilderForEventWithName:(NSString *)arg1;
- (_Bool)builderExistsForEventWithName:(NSString *)arg1;
- (id <HUBComponentModel>)buildForIndex:(unsigned long long)arg1 parent:(id <HUBComponentModel>)arg2;
@end

