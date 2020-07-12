//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTPlaylistExtenderItem, SPTPlaylistExtenderModelDelegate;

@protocol SPTPlaylistExtenderModel <NSObject>
@property(readonly, nonatomic, getter=isStarted) _Bool started;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) NSString *sectionFooterButtonTitle;
@property(readonly, nonatomic) NSString *sectionHeaderSubtitle;
@property(readonly, nonatomic) NSString *sectionHeaderTitle;
@property(readonly, nonatomic) NSURL *playlistURI;
@property(nonatomic) __weak id <SPTPlaylistExtenderModelDelegate> delegate;
- (_Bool)shouldDisplayFooter;
- (void)startLoading;
- (void)refresh;
- (void)trackSelectedAtIndex:(long long)arg1;
- (void)addTrackAtIndex:(unsigned long long)arg1;
- (id <SPTPlaylistExtenderItem>)itemForIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfTracks;
@end

