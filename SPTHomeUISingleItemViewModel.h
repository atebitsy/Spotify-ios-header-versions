//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"

@class NSString;
@protocol HUBComponentModel, SPTHomeUISingleItemViewModelDelegate, SPTPlayer;

@interface SPTHomeUISingleItemViewModel : NSObject <SPTPlayerObserver>
{
    _Bool _isActiveContext;
    id <SPTHomeUISingleItemViewModelDelegate> _delegate;
    id <HUBComponentModel> _hubComponentModel;
    id <SPTPlayer> _player;
}

@property(nonatomic) _Bool isActiveContext; // @synthesize isActiveContext=_isActiveContext;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <HUBComponentModel> hubComponentModel; // @synthesize hubComponentModel=_hubComponentModel;
@property(nonatomic) __weak id <SPTHomeUISingleItemViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 hubComponentModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

