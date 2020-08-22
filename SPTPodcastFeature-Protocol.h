//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString, NSURL, SPTPodcastEpisodeCellActionHandlerFactory;
@protocol SPTLinkDispatcher, SPTPodcastContextMenuProvider, SPTPodcastDataLoader, SPTPodcastEntityDataLoader, SPTPodcastEpisodeCellConfigurator, SPTPodcastEpisodeFactory, SPTPodcastFactory, SPTPodcastLogger><SPTPodcastUBILogger, SPTPodcastPlayer, SPTPodcastRequestFactory, SPTPodcastSpeedControlManager, SPTPodcastTestManager;

@protocol SPTPodcastFeature <SPTService>
- (SPTPodcastEpisodeCellActionHandlerFactory *)provideCellActionHandlerFactory;
- (id <SPTPodcastEpisodeCellConfigurator>)provideEpisodeCellConfigurator;
- (id <SPTPodcastPlayer>)providePodcastPlayerWithViewURI:(NSURL *)arg1 featureIdentifier:(NSString *)arg2 referrerIdentifier:(NSString *)arg3;
- (id <SPTPodcastLogger><SPTPodcastUBILogger>)providePodcastLogger;
- (id <SPTPodcastEpisodeFactory>)providePodcastEpisodeFactory;
- (id <SPTPodcastFactory>)providePodcastFactory;
- (id <SPTPodcastDataLoader>)providePodcastDataLoader;
- (id <SPTPodcastRequestFactory>)providePodcastRequestFactory;
- (id <SPTPodcastSpeedControlManager>)providePodcastSpeedControlManager;
- (id <SPTPodcastTestManager>)provideTestManager;
- (id <SPTPodcastEntityDataLoader>)providePodcastEntityDataLoader;
- (id <SPTPodcastContextMenuProvider>)provideDefaultContextMenuProvider;
- (id <SPTPodcastContextMenuProvider>)provideContextMenuProviderWithLinkDispatcher:(id <SPTLinkDispatcher>)arg1;
@end

