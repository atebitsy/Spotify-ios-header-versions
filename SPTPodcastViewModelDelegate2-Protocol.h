//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSIndexPath, SPTPodcastFilterContextViewController, SPTPodcastViewModel, UIView;
@protocol SPTPodcastEpisode, SPTPodcastViewModelSection;

@protocol SPTPodcastViewModelDelegate2 <NSObject>
- (void)viewModelDidUpdateSupplementaryContent:(SPTPodcastViewModel *)arg1;
- (void)viewModel:(SPTPodcastViewModel *)arg1 showContextMenuForTrailerEpisode:(id <SPTPodcastEpisode>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)viewModel:(SPTPodcastViewModel *)arg1 scrollToLatestPlayedEpisodeAtIndexPath:(NSIndexPath *)arg2;
- (void)podcastViewModelDidUpdatePlaybackRestrictions:(SPTPodcastViewModel *)arg1;
- (void)viewModel:(SPTPodcastViewModel *)arg1 didUpdateFilteredState:(_Bool)arg2;
- (void)viewModel:(SPTPodcastViewModel *)arg1 didUpdateSectionWithSectionViewModel:(id <SPTPodcastViewModelSection>)arg2 atIndexPath:(NSIndexPath *)arg3;
- (void)viewModelDidSelectContextMenuButton:(SPTPodcastViewModel *)arg1 senderView:(UIView *)arg2;
- (void)viewModel:(SPTPodcastViewModel *)arg1 willPresentFilterContextViewController:(SPTPodcastFilterContextViewController *)arg2 fromSender:(id)arg3;
- (void)viewModel:(SPTPodcastViewModel *)arg1 podcastDidFinishLoadingWithError:(NSError *)arg2;
@end

