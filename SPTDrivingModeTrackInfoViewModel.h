//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingInformationUnitViewModel-Protocol.h"

@class NSString;
@protocol SPTNowPlayingInformationUnitViewModel, SPTNowPlayingInformationUnitViewModelDelegate, SPTPlayer;

@interface SPTDrivingModeTrackInfoViewModel : NSObject <SPTNowPlayingInformationUnitViewModel>
{
    _Bool shouldShowPositiveFeedback;
    _Bool feedbackButtonEnabled;
    _Bool feedbackButtonSelected;
    id <SPTNowPlayingInformationUnitViewModel> _trackInfoModel;
    id <SPTPlayer> _player;
}

@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTNowPlayingInformationUnitViewModel> trackInfoModel; // @synthesize trackInfoModel=_trackInfoModel;
@property(readonly, nonatomic, getter=isFeedbackButtonSelected) _Bool feedbackButtonSelected; // @synthesize feedbackButtonSelected;
@property(readonly, nonatomic, getter=isFeedbackButtonEnabled) _Bool feedbackButtonEnabled; // @synthesize feedbackButtonEnabled;
@property(readonly, nonatomic) _Bool shouldShowPositiveFeedback; // @synthesize shouldShowPositiveFeedback;
- (void).cxx_destruct;
- (void)stopObservers;
- (void)startObservers;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(nonatomic) __weak id <SPTNowPlayingInformationUnitViewModelDelegate> delegate;
- (id)initWithTrackInformationUnitViewModel:(id)arg1 player:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

