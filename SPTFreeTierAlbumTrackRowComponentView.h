//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "SPTEncoreTrackRowDelegate-Protocol.h"
#import "SPTHubSwipeableTableViewCellComponentView-Protocol.h"

@class NSString, SPTEncoreSwipeableTableViewCell, SPTEncoreTrackRow, SPTSwipeableTableViewCell;
@protocol HUBComponentEventHandler, HUBComponentModel;

@interface SPTFreeTierAlbumTrackRowComponentView : HUGSThemableComponentView <SPTEncoreTrackRowDelegate, HUBComponentViewWithEvents, SPTHubSwipeableTableViewCellComponentView>
{
    id <HUBComponentEventHandler> _eventHandler;
    id <HUBComponentModel> _model;
    SPTEncoreSwipeableTableViewCell *_tableCell;
    SPTEncoreTrackRow *_trackRow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTEncoreTrackRow *trackRow; // @synthesize trackRow=_trackRow;
@property(readonly, nonatomic) SPTEncoreSwipeableTableViewCell *tableCell; // @synthesize tableCell=_tableCell;
@property(retain, nonatomic) id <HUBComponentModel> model; // @synthesize model=_model;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (_Bool)trackIsPlaying;
- (_Bool)trackIsDisabled;
- (_Bool)trackIsPremiumOnly;
- (id)artistNames;
- (id)createTrackRowModelFromHubsWithPressedState:(_Bool)arg1;
- (void)unlikeWithSender:(id)arg1;
- (void)unhideWithSender:(id)arg1;
- (void)unbanWithSender:(id)arg1;
- (void)tappedWithSender:(id)arg1;
- (void)contextMenuTappedWithSender:(id)arg1;
- (void)sendSelectionEvent;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (void)wrapCellInControl:(id)arg1;
@property(readonly, nonatomic) SPTSwipeableTableViewCell *tableViewCell;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2 encoreComponentFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

