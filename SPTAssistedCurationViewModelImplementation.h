//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationModelDelegate-Protocol.h"
#import "SPTAssistedCurationViewModel-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, NSURL;
@protocol SPTAgeVerificationProvider, SPTAssistedCurationAddTrackHandler, SPTAssistedCurationCardsSortMechanism, SPTAssistedCurationModel, SPTAssistedCurationUITestManager, SPTAssistedCurationViewModelDelegate, SPTAudioPreviewModelFactory, SPTAudioPreviewPlayer, SPTExplicitContentAccessManager, SPTSnackbarConditionalPresenter;

@interface SPTAssistedCurationViewModelImplementation : NSObject <SPTAssistedCurationViewModel, SPTAssistedCurationModelDelegate>
{
    id <SPTAssistedCurationViewModelDelegate> _delegate;
    id <SPTAssistedCurationAddTrackHandler> _addTrackHandler;
    id <SPTAssistedCurationModel> _assistedCurationModel;
    NSMutableArray *_cards;
    id <SPTAssistedCurationCardsSortMechanism> _sortMechanism;
    NSMutableSet *_waitForProviderIdentifiers;
    id <SPTAudioPreviewModelFactory> _audioPreviewModelFactory;
    id <SPTAudioPreviewPlayer> _audioPreviewPlayer;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTAgeVerificationProvider> _ageVerificationProvider;
    id <SPTAssistedCurationUITestManager> _testManager;
}

@property(readonly, nonatomic) id <SPTAssistedCurationUITestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTAgeVerificationProvider> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(readonly, nonatomic) id <SPTAudioPreviewPlayer> audioPreviewPlayer; // @synthesize audioPreviewPlayer=_audioPreviewPlayer;
@property(readonly, nonatomic) id <SPTAudioPreviewModelFactory> audioPreviewModelFactory; // @synthesize audioPreviewModelFactory=_audioPreviewModelFactory;
@property(retain, nonatomic) NSMutableSet *waitForProviderIdentifiers; // @synthesize waitForProviderIdentifiers=_waitForProviderIdentifiers;
@property(readonly, nonatomic) id <SPTAssistedCurationCardsSortMechanism> sortMechanism; // @synthesize sortMechanism=_sortMechanism;
@property(retain, nonatomic) NSMutableArray *cards; // @synthesize cards=_cards;
@property(retain, nonatomic) id <SPTAssistedCurationModel> assistedCurationModel; // @synthesize assistedCurationModel=_assistedCurationModel;
@property(readonly, nonatomic) id <SPTAssistedCurationAddTrackHandler> addTrackHandler; // @synthesize addTrackHandler=_addTrackHandler;
@property(nonatomic) __weak id <SPTAssistedCurationViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)assistedCurationModel:(id)arg1 notAddedToPlaylistDuplicatedTrackURI:(id)arg2;
- (void)assistedCurationModel:(id)arg1 error:(id)arg2 addingToPlaylistTrackURI:(id)arg3;
- (void)assistedCurationModel:(id)arg1 addedTrackURI:(id)arg2;
- (void)noCardsAvailableForAssistedCurationModel:(id)arg1 offline:(_Bool)arg2;
- (void)assistedCurationModel:(id)arg1 error:(id)arg2;
- (void)assistedCurationModel:(id)arg1 removedCard:(id)arg2;
- (void)assistedCurationModel:(id)arg1 newCards:(id)arg2;
- (void)assistedCurationModel:(id)arg1 noCardsAvailableFromCardProvider:(id)arg2;
- (void)presentMessage:(id)arg1;
- (void)verifyWaitingForProviderIdentifier:(id)arg1;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, nonatomic) long long addTrackIcon;
@property(readonly, nonatomic) NSURL *playlistURI;
- (void)viewDidDisappear;
- (void)viewDidLoad;
@property(readonly, nonatomic) unsigned long long numberOfCards;
- (unsigned long long)indexOfCardViewModel:(id)arg1;
- (id)cardViewModelAtIndex:(unsigned long long)arg1;
- (id)initWithAssistedCurationModel:(id)arg1 addTrackHandler:(id)arg2 sortMechanism:(id)arg3 waitForCardProviders:(id)arg4 audioPreviewPlayer:(id)arg5 audioPreviewModelFactory:(id)arg6 snackbarPresenter:(id)arg7 explicitContentAccessManager:(id)arg8 ageVerificationProvider:(id)arg9 testManager:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

