//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventFactoryLocation, SPTUBIMobileHomeMixTasteViz_LearnMoreLinkEventFactory, SPTUBIMobileHomeMixTasteViz_ListenNowButtonEventFactory, SPTUBIMobileHomeMixTasteViz_TasteVizViewEventFactory;

@protocol SPTUBIMobileHomeMixTasteVizEventFactory <NSObject>
- (id <SPTUBIMobileHomeMixTasteViz_LearnMoreLinkEventFactory>)learnMoreLinkFactory;
- (id <SPTUBIMobileHomeMixTasteViz_ListenNowButtonEventFactory>)listenNowButtonFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobileHomeMixTasteViz_TasteVizViewEventFactory>)tasteVizViewFactory;
- (id <SPTUBIEventFactoryLocation>)_location;
@end

