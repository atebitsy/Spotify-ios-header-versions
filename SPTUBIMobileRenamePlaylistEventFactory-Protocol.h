//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventLocation, SPTUBIMobileRenamePlaylist_BackEventFactory, SPTUBIMobileRenamePlaylist_CloseButtonEventFactory, SPTUBIMobileRenamePlaylist_RenameButtonEventFactory;

@protocol SPTUBIMobileRenamePlaylistEventFactory <NSObject>
- (id <SPTUBIMobileRenamePlaylist_CloseButtonEventFactory>)closeButtonFactory;
- (id <SPTUBIMobileRenamePlaylist_BackEventFactory>)backFactory;
- (id <SPTUBIMobileRenamePlaylist_RenameButtonEventFactory>)renameButtonFactory;
- (id <SPTUBIEventLocation>)_location;
@end

