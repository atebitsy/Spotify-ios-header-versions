//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTArtistPickerViewControllerProviderDelegate-Protocol.h"

@class NSString, SPTArtistPickerViewControllerProvider, UINavigationController;
@protocol SPTPlayer;

@interface SPTSeedASessionFlowCoordinator : NSObject <SPTArtistPickerViewControllerProviderDelegate>
{
    SPTArtistPickerViewControllerProvider *_artistPickerViewControllerProvider;
    UINavigationController *_navigationController;
    long long _seedASessionVisualTreatment;
    id <SPTPlayer> _player;
}

@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) long long seedASessionVisualTreatment; // @synthesize seedASessionVisualTreatment=_seedASessionVisualTreatment;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) SPTArtistPickerViewControllerProvider *artistPickerViewControllerProvider; // @synthesize artistPickerViewControllerProvider=_artistPickerViewControllerProvider;
- (void).cxx_destruct;
- (void)didFailSeedASession;
- (void)didFailArtistPicking;
- (void)didFinishArtistPicking:(id)arg1;
- (void)artistPickerFlowDismissedWithPlaylistURI:(id)arg1 shouldAutoplay:(_Bool)arg2;
- (id)provideNavigationControllerWithRootViewController:(id)arg1;
- (void)presentArtistPickerViewController;
- (id)initWithViewControllerProvider:(id)arg1 seedASessionVisualTreatment:(long long)arg2 player:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

