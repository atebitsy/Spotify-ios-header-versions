//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FollowModelObserver-Protocol.h"
#import "SPTFreeTierEntityContextMenuButtonViewModel-Protocol.h"

@class FollowModel, NSDictionary, NSString, NSURL;
@protocol SPTContextMenuActionsProvider, SPTContextMenuPresenter, SPTContextMenuPresenterFactory, SPTFollowModelFactory, SPTFreeTierArtistContextMenuButtonViewModelLogger, SPTFreeTierArtistTestManager, SPTFreeTierEntityContextMenuButtonViewModelDelegate, SPTModerationReportDecorationRegistry, SPTModerationServiceState;

@interface SPTFreeTierArtistContextMenuButtonViewModel : NSObject <SPTFreeTierEntityContextMenuButtonViewModel, FollowModelObserver>
{
    _Bool _artistBanned;
    id <SPTFreeTierEntityContextMenuButtonViewModelDelegate> _delegate;
    unsigned long long _state;
    id <SPTContextMenuPresenterFactory> _presenterFactory;
    id <SPTContextMenuActionsProvider> _actionFactory;
    NSURL *_viewURI;
    NSDictionary *_metadata;
    id <SPTContextMenuPresenter> _presenter;
    id <SPTFreeTierArtistTestManager> _freeTierArtistTestManager;
    id <SPTFollowModelFactory> _followModelFactory;
    FollowModel *_followModel;
    id <SPTModerationReportDecorationRegistry> _decorationRegistry;
    id <SPTModerationServiceState> _moderationFeatureState;
    id <SPTFreeTierArtistContextMenuButtonViewModelLogger> _ubiLogger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTFreeTierArtistContextMenuButtonViewModelLogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTModerationServiceState> moderationFeatureState; // @synthesize moderationFeatureState=_moderationFeatureState;
@property(readonly, nonatomic) id <SPTModerationReportDecorationRegistry> decorationRegistry; // @synthesize decorationRegistry=_decorationRegistry;
@property(nonatomic, getter=isArtistBanned) _Bool artistBanned; // @synthesize artistBanned=_artistBanned;
@property(retain, nonatomic) FollowModel *followModel; // @synthesize followModel=_followModel;
@property(readonly, nonatomic) id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(readonly, nonatomic) id <SPTFreeTierArtistTestManager> freeTierArtistTestManager; // @synthesize freeTierArtistTestManager=_freeTierArtistTestManager;
@property(retain, nonatomic) id <SPTContextMenuPresenter> presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(readonly, nonatomic) id <SPTContextMenuActionsProvider> actionFactory; // @synthesize actionFactory=_actionFactory;
@property(readonly, nonatomic) id <SPTContextMenuPresenterFactory> presenterFactory; // @synthesize presenterFactory=_presenterFactory;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <SPTFreeTierEntityContextMenuButtonViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)followModel:(id)arg1 followDataDidChange:(id)arg2;
- (void)registerArtistModerationDecorator;
- (id)createRadioTask;
- (id)createContextMenuTasks;
- (id)contextMenuPresenterWithSenderView:(id)arg1;
- (void)transitionToState:(unsigned long long)arg1;
- (void)tapContextMenuButton:(id)arg1;
- (void)configureWithViewURI:(id)arg1 metadata:(id)arg2;
- (void)fetchFollowModelForArtist:(id)arg1;
- (id)initWithPresenterFactory:(id)arg1 actionFactory:(id)arg2 freeTierArtistTestManager:(id)arg3 artistURI:(id)arg4 followModelFactory:(id)arg5 decorationRegistry:(id)arg6 moderationFeatureState:(id)arg7 ubiLogger:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

