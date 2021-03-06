//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEncoreTrackRowDelegate-Protocol.h"
#import "SPTFreeTierPlaylistCellProvider-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSString;
@protocol GLUETheme, SPTFeedbackManager, SPTFreeTierPlaylistConfiguration, SPTOfflineModeState, _TtP24EncoreIntegrationFeature24SPTEncoreTrackRowFactory_;

@interface SPTReleaseRadarDiscoverWeeklyCellProviderImplementation : NSObject <SPTEncoreTrackRowDelegate, SPTOfflineModeStateObserver, SPTFreeTierPlaylistCellProvider>
{
    id <SPTFeedbackManager> _feedbackManager;
    id <SPTFreeTierPlaylistConfiguration> _playlistConfiguration;
    id <GLUETheme> _theme;
    id <_TtP24EncoreIntegrationFeature24SPTEncoreTrackRowFactory_> _encoreTrackRowFactory;
    id <SPTOfflineModeState> _offlineModeState;
}

+ (id)indexPathForView:(id)arg1;
+ (long long)encoreRestrictionForTrackViewModel:(id)arg1;
+ (_Bool)requiresCustomization:(id)arg1;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <_TtP24EncoreIntegrationFeature24SPTEncoreTrackRowFactory_> encoreTrackRowFactory; // @synthesize encoreTrackRowFactory=_encoreTrackRowFactory;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) __weak id <SPTFreeTierPlaylistConfiguration> playlistConfiguration; // @synthesize playlistConfiguration=_playlistConfiguration;
@property(readonly, nonatomic) id <SPTFeedbackManager> feedbackManager; // @synthesize feedbackManager=_feedbackManager;
- (void).cxx_destruct;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (void)reloadCells;
- (id)encoreTrackRowModel:(id)arg1 highlighted:(_Bool)arg2;
- (void)unlikeWithSender:(id)arg1;
- (void)unhideWithSender:(id)arg1;
- (void)tappedWithSender:(id)arg1;
- (void)contextMenuTappedWithSender:(id)arg1;
- (void)unbanWithSender:(id)arg1;
- (void)didEndDisplayingPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)willDisplayPlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (id)reuseIdentifiers;
- (id)identifierForCellForRowAtIndexPath:(id)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (_Bool)didSelectPlaylistCell:(id)arg1 atIndexPath:(id)arg2;
- (void)configurePlaylistCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (_Bool)handlesCellAtIndexPath:(id)arg1;
- (id)initWithPlaylistConfiguration:(id)arg1 theme:(id)arg2 feedbackManager:(id)arg3 encoreTrackRowFactory:(id)arg4 offlineModeState:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

