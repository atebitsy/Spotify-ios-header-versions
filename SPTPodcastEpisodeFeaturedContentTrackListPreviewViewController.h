//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPodcastEpisodeFeaturedContentTrackListPreviewViewDelegate-Protocol.h"

@class GLUESectionHeaderView, NSString, SPTPodcastEpisodeFeaturedContentTrackListPreviewView;
@protocol GLUEImageLoader, SPTEpisodeSegmentsModel, SPTLinkDispatcher, _TtP29EpisodeSegmentsFetcherFeature34SPTEpisodeSegmentsCosmosDataLoader_;

@interface SPTPodcastEpisodeFeaturedContentTrackListPreviewViewController : UIViewController <SPTPodcastEpisodeFeaturedContentTrackListPreviewViewDelegate>
{
    GLUESectionHeaderView *_sectionHeaderView;
    SPTPodcastEpisodeFeaturedContentTrackListPreviewView *_previewView;
    NSString *_episodeURIString;
    id <_TtP29EpisodeSegmentsFetcherFeature34SPTEpisodeSegmentsCosmosDataLoader_> _dataLoader;
    id <GLUEImageLoader> _imageLoader;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTEpisodeSegmentsModel> _episodeSegmentsModel;
}

@property(retain, nonatomic) id <SPTEpisodeSegmentsModel> episodeSegmentsModel; // @synthesize episodeSegmentsModel=_episodeSegmentsModel;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <GLUEImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <_TtP29EpisodeSegmentsFetcherFeature34SPTEpisodeSegmentsCosmosDataLoader_> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, copy, nonatomic) NSString *episodeURIString; // @synthesize episodeURIString=_episodeURIString;
@property(retain, nonatomic) SPTPodcastEpisodeFeaturedContentTrackListPreviewView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) GLUESectionHeaderView *sectionHeaderView; // @synthesize sectionHeaderView=_sectionHeaderView;
- (void).cxx_destruct;
- (void)navigateToTimeline;
- (void)podcastEpisodeFeaturedContentTrackListPreviewViewDidSelect:(id)arg1;
- (void)setContentHidden:(_Bool)arg1;
- (void)handleFetchedModel:(id)arg1;
- (void)fetchEpisodeSegmentsModel;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithEpisodeURI:(id)arg1 dataLoader:(id)arg2 imageLoader:(id)arg3 linkDispatcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

