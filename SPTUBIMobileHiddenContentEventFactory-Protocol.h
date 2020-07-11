//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileHiddenContent_ItemListEventFactory, SPTUBIMobileHiddenContent_TabsEventFactory, SPTUBIMobileHiddenContent_ToolbarEventFactory, SPTUBIMobileHiddenContent_UndoSnackbarEventFactory;

@protocol SPTUBIMobileHiddenContentEventFactory <NSObject>
- (id <SPTUBIMobileHiddenContent_UndoSnackbarEventFactory>)undoSnackbarFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobileHiddenContent_ItemListEventFactory>)itemListFactoryWithIdentifier:(NSString *)arg1;
- (id <SPTUBIMobileHiddenContent_TabsEventFactory>)tabsFactory;
- (id <SPTUBIMobileHiddenContent_ToolbarEventFactory>)toolbarFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end
