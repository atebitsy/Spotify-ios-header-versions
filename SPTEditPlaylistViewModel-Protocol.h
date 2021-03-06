//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, NSURL;
@protocol SPTEditPlaylistTrackViewModel, SPTEditPlaylistViewModelDelegate;

@protocol SPTEditPlaylistViewModel <NSObject>
@property(readonly, nonatomic) _Bool renameEnabled;
@property(readonly, nonatomic) _Bool editAnnotationEnabled;
@property(copy, nonatomic) NSString *editedDescription;
@property(readonly, copy, nonatomic) NSString *originalDescription;
@property(readonly, nonatomic) _Bool reorderEnabled;
@property(copy, nonatomic) NSString *editedPlaylistName;
@property(readonly, copy, nonatomic) NSString *originalPlaylistName;
@property(readonly, nonatomic) unsigned long long countOfTracks;
@property(readonly, nonatomic) NSURL *playlistImageURL;
@property(nonatomic) __weak id <SPTEditPlaylistViewModelDelegate> delegate;
@property(readonly, nonatomic) NSURL *playlistURL;
- (void)saveWithCompletion:(void (^)(_Bool, _Bool))arg1;
- (void)moveTrackAtIndexPath:(NSIndexPath *)arg1 toIndexPath:(NSIndexPath *)arg2;
- (void)removeTrackAtIndexPath:(NSIndexPath *)arg1;
- (NSURL *)trackURLAtIndexPath:(NSIndexPath *)arg1;
- (id <SPTEditPlaylistTrackViewModel>)trackViewModelAtIndexPath:(NSIndexPath *)arg1;
- (void)viewDidLoad;
@end

