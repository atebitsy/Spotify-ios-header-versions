//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchPlatformResponseParser-Protocol.h"

@class HUBViewModelBuilderFactory, NSString, NSURL;
@protocol SPTExplicitContentAccessManager, SPTSearch2EmptyStatePropertiesProvider, SPTUserBehaviourHubsInstrumentation, _TtP22AgeVerificationFeature26SPTAgeVerificationProvider_;

@interface SPTSearchPlatformProtobufResponseParser : NSObject <SPTSearchPlatformResponseParser>
{
    _Bool _nftExperience;
    _Bool _isDrillDown;
    _Bool _newCarouselEnabled;
    NSURL *_pageURI;
    HUBViewModelBuilderFactory *_viewModelBuilderFactory;
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> _ageVerificationProvider;
    id <SPTUserBehaviourHubsInstrumentation> _ubiHubs;
    NSString *_query;
    unsigned long long _podcastRowsType;
    NSString *_referrerIdentifier;
}

@property(readonly, copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(readonly, nonatomic) _Bool newCarouselEnabled; // @synthesize newCarouselEnabled=_newCarouselEnabled;
@property(readonly, nonatomic) unsigned long long podcastRowsType; // @synthesize podcastRowsType=_podcastRowsType;
@property(readonly, nonatomic) _Bool isDrillDown; // @synthesize isDrillDown=_isDrillDown;
@property(readonly, nonatomic) _Bool nftExperience; // @synthesize nftExperience=_nftExperience;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) id <SPTUserBehaviourHubsInstrumentation> ubiHubs; // @synthesize ubiHubs=_ubiHubs;
@property(readonly, nonatomic) id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
@property(readonly, nonatomic) HUBViewModelBuilderFactory *viewModelBuilderFactory; // @synthesize viewModelBuilderFactory=_viewModelBuilderFactory;
@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
- (void).cxx_destruct;
- (id)seeAllRowsFromEntityTypes:(id)arg1 requestID:(id)arg2;
- (id)renderableEntitiesPredicate;
- (id)componentModelIdentifierWithSectionID:(id)arg1 itemIndex:(id)arg2;
- (_Bool)drillDownShouldUseCardsForEntityType:(int)arg1;
- (id)drillDownTitleForQuery:(id)arg1 entityType:(int)arg2;
- (int)entityTypeForEntity:(id)arg1;
- (id)sectionIDForEntityType:(int)arg1;
- (_Bool)nftExperienceWithUserTierProvider:(id)arg1;
- (id)emptyStateProperties;
- (id)noResultsViewModelWithRequestID:(id)arg1;
- (id)resultsViewModelForDrillDownResponse:(id)arg1 requestID:(id)arg2 offset:(unsigned long long)arg3;
- (id)resultsViewModelForMainResponse:(id)arg1 requestID:(id)arg2;
- (id)viewModelForDrillDownResponse:(id)arg1 requestID:(id)arg2 offset:(unsigned long long)arg3;
- (id)viewModelForMainResponse:(id)arg1 requestID:(id)arg2;
- (id)rowsForEntities:(id)arg1 requestID:(id)arg2 sectionID:(id)arg3 offset:(unsigned long long)arg4;
- (id)cardsForEntities:(id)arg1 componentIdentifier:(id)arg2 requestID:(id)arg3 sectionID:(id)arg4 offset:(unsigned long long)arg5;
- (id)carouselWithEntities:(id)arg1 requestID:(id)arg2;
- (id)carouselHeaderWithTitle:(id)arg1;
- (id)recsFromRecommendations:(id)arg1 entityName:(id)arg2 requestID:(id)arg3;
- (id)parseDrillDownResponse:(id)arg1 requestID:(id)arg2 offset:(unsigned long long)arg3 error:(id *)arg4;
- (id)parseMainResponse:(id)arg1 requestID:(id)arg2 error:(id *)arg3;
- (id)parse:(id)arg1 requestID:(id)arg2 offset:(unsigned long long)arg3 error:(id *)arg4;
- (id)initWithPageURI:(id)arg1 viewModelBuilderFactory:(id)arg2 emptyStatePropertiesProvider:(id)arg3 userTierProvider:(id)arg4 explicitContentAccessManager:(id)arg5 ageVerificationProvider:(id)arg6 query:(id)arg7 isDrillDown:(_Bool)arg8 podcastRowsType:(unsigned long long)arg9 newCarouselEnabled:(_Bool)arg10 ubiHubs:(id)arg11 referrerIdentifier:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

