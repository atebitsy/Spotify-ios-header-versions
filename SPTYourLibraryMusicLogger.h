//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicSortFilterLogger-Protocol.h"

@class NSString;
@protocol SPTLogCenter, SPTUBILogger, SPTUBIMobileYourLibraryAlbumsEventFactory, SPTUBIMobileYourLibraryArtistsEventFactory, SPTUBIMobileYourLibraryPlaylistsEventFactory;

@interface SPTYourLibraryMusicLogger : NSObject <SPTYourLibraryMusicSortFilterLogger>
{
    NSString *_pageURI;
    id <SPTUBIMobileYourLibraryPlaylistsEventFactory> _playlistsEventFactory;
    id <SPTUBIMobileYourLibraryArtistsEventFactory> _artistsEventFactory;
    id <SPTUBIMobileYourLibraryAlbumsEventFactory> _albumsEventFactory;
    id <SPTUBILogger> _ubiLogger;
    id <SPTLogCenter> _logCenter;
    unsigned long long _type;
}

@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTUBIMobileYourLibraryAlbumsEventFactory> albumsEventFactory; // @synthesize albumsEventFactory=_albumsEventFactory;
@property(readonly, nonatomic) id <SPTUBIMobileYourLibraryArtistsEventFactory> artistsEventFactory; // @synthesize artistsEventFactory=_artistsEventFactory;
@property(readonly, nonatomic) id <SPTUBIMobileYourLibraryPlaylistsEventFactory> playlistsEventFactory; // @synthesize playlistsEventFactory=_playlistsEventFactory;
@property(readonly, copy, nonatomic) NSString *pageURI; // @synthesize pageURI=_pageURI;
- (void).cxx_destruct;
- (void)logUBIPlaylistImpression:(CDUnknownBlockType)arg1 artistImpression:(CDUnknownBlockType)arg2 albumImpression:(CDUnknownBlockType)arg3;
- (void)logUBIImpressionEvent:(id)arg1;
- (void)logUBIPlaylistEvent:(CDUnknownBlockType)arg1 artistEvent:(CDUnknownBlockType)arg2 albumEvent:(CDUnknownBlockType)arg3;
- (void)logUBIInteractionEvent:(id)arg1;
- (void)logUIImpressionWithSectionId:(id)arg1 itemIndex:(long long)arg2 targetURI:(id)arg3 impressionType:(id)arg4 renderType:(id)arg5;
- (void)logUIImpressionWithImpressionType:(id)arg1;
- (void)logUIInteractionWithSectionId:(id)arg1 itemIndex:(long long)arg2 targetURI:(id)arg3 interactionType:(id)arg4 userIntent:(id)arg5;
- (void)logUIInteractionWithSectionId:(id)arg1 userIntent:(id)arg2;
- (void)logEmptyStaticFilterViewImpression;
- (void)logEmptyTextFilterViewImpression;
- (void)logEmptyViewImpression;
- (void)logQuickScrollIsVisible;
- (void)logSortingIdentifier:(id)arg1 index:(unsigned long long)arg2;
- (void)logClearFilterWithIdentifier:(id)arg1 index:(unsigned long long)arg2;
- (void)logFilterIdentifier:(id)arg1 sectionId:(id)arg2 filterAdded:(_Bool)arg3 index:(unsigned long long)arg4;
- (void)logSortFilterPickerCanceledWithReason:(unsigned long long)arg1;
- (void)logFilterSortInteractionType:(unsigned long long)arg1;
- (void)logAddArtistsWithURL:(id)arg1;
- (void)logAddArtistsButtonWithURL:(id)arg1;
- (void)logCreatePlaylist;
- (void)logCreatePlaylistButton;
- (void)logLikedSongsWithURL:(id)arg1;
- (void)logToggleCollapseSection:(unsigned long long)arg1 collapsed:(_Bool)arg2;
- (void)logSectionIndexSelected;
- (void)logQuickScrollDragEnded;
- (void)logQuickScrollDragStarted;
- (void)logHiddenContentWithURL:(id)arg1;
- (void)logItemActionSelectedAtIndex:(unsigned long long)arg1 section:(unsigned long long)arg2 targetURI:(id)arg3;
- (void)logItemSelectedAtIndex:(unsigned long long)arg1 section:(unsigned long long)arg2 targetURI:(id)arg3;
- (id)initWithPageURI:(id)arg1 playlistsEventFactory:(id)arg2 artistsEventFactory:(id)arg3 albumsEventFactory:(id)arg4 ubiLogger:(id)arg5 logCenter:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

