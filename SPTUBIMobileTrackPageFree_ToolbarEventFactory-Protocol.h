//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventFactoryLocation, SPTUBIMobileTrackPageFree_Toolbar_BackNavigationButtonEventFactory, SPTUBIMobileTrackPageFree_Toolbar_ContextMenuButtonEventFactory, SPTUBIMobileTrackPageFree_Toolbar_HeartButtonEventFactory;

@protocol SPTUBIMobileTrackPageFree_ToolbarEventFactory <NSObject>
- (id <SPTUBIMobileTrackPageFree_Toolbar_ContextMenuButtonEventFactory>)contextMenuButtonFactory;
- (id <SPTUBIMobileTrackPageFree_Toolbar_HeartButtonEventFactory>)heartButtonFactory;
- (id <SPTUBIMobileTrackPageFree_Toolbar_BackNavigationButtonEventFactory>)backNavigationButtonFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

