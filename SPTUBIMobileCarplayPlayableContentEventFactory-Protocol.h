//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTUBIEventLocation, SPTUBIMobileCarplayPlayableContent_ItemListEventFactory;

@protocol SPTUBIMobileCarplayPlayableContentEventFactory <NSObject>
- (id <SPTUBIMobileCarplayPlayableContent_ItemListEventFactory>)itemListFactoryWithPosition:(long long)arg1 uri:(NSURL *)arg2 reason:(NSString *)arg3;
- (id <SPTUBIEventLocation>)_location;
@end

