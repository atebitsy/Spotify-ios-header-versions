//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventLocation, SPTUBIInteractionEvent, SPTUBIMobileAssistedCuration_CardContainerEventFactory, SPTUBIMobileAssistedCuration_EmptyViewEventFactory, SPTUBIMobileAssistedCuration_OfflineViewEventFactory, SPTUBIMobileAssistedCuration_PageControlContainerEventFactory, SPTUBIMobileAssistedCuration_SearchBoxEventFactory, SPTUBIMobileAssistedCuration_ToolbarEventFactory;

@protocol SPTUBIMobileAssistedCurationEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)swipeUiNavigateBack;
- (id <SPTUBIMobileAssistedCuration_PageControlContainerEventFactory>)pageControlContainerFactory;
- (id <SPTUBIMobileAssistedCuration_EmptyViewEventFactory>)emptyViewFactory;
- (id <SPTUBIMobileAssistedCuration_OfflineViewEventFactory>)offlineViewFactory;
- (id <SPTUBIMobileAssistedCuration_CardContainerEventFactory>)cardContainerFactory;
- (id <SPTUBIMobileAssistedCuration_SearchBoxEventFactory>)searchBoxFactory;
- (id <SPTUBIMobileAssistedCuration_ToolbarEventFactory>)toolbarFactory;
- (id <SPTUBIEventLocation>)_location;
@end

