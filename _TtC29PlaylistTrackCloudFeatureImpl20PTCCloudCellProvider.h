//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistLegacyLayout-Protocol.h"

@interface _TtC29PlaylistTrackCloudFeatureImpl20PTCCloudCellProvider : NSObject <SPTFreeTierPlaylistLegacyLayout>
{
    // Error parsing type: , name: theme
    // Error parsing type: , name: navigator
    // Error parsing type: , name: model
}

- (void).cxx_destruct;
- (id)init;
- (void)didEndDisplayingPlaylistCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)didEndDisplayingPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)willDisplayPlaylistCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)willDisplayPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)didSelectPlaylistCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)didSelectPlaylistCell:(id)arg1 atIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (void)configurePlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (double)heightForItem:(id)arg1 indexPath:(id)arg2;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)reuseIdentifierForItem:(id)arg1 indexPath:(id)arg2;
- (id)identifierForCellForRowAtIndexPath:(id)arg1;
- (id)reuseIdentifiers;
- (_Bool)handlesItem:(id)arg1 indexPath:(id)arg2;
- (_Bool)handlesCellAtIndexPath:(id)arg1;

@end

