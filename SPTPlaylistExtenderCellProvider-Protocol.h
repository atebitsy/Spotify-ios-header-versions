//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTFreeTierPlaylistCellProvider-Protocol.h"
#import "SPTFreeTierPlaylistModelObserver-Protocol.h"
#import "SPTFreeTierPlaylistSectionDescription-Protocol.h"
#import "SPTFreeTierPlaylistSectionFooter-Protocol.h"
#import "SPTFreeTierPlaylistSectionHeader-Protocol.h"

@protocol SPTFreeTierPlaylistCellProviderDelegate;

@protocol SPTPlaylistExtenderCellProvider <SPTFreeTierPlaylistCellProvider, SPTFreeTierPlaylistSectionDescription, SPTFreeTierPlaylistSectionHeader, SPTFreeTierPlaylistSectionFooter, SPTFreeTierPlaylistModelObserver>
@property(nonatomic) __weak id <SPTFreeTierPlaylistCellProviderDelegate> delegate;
@end

