//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@protocol SPTHubInteractionLogger, SPTHubPlayTrackListCommandHandlerDelegate, SPTPlayer, SPTUBIHubsUtilities;

@interface SPTHubPlayTrackListCommandHandler : NSObject <HUBCommandHandler>
{
    id <SPTHubPlayTrackListCommandHandlerDelegate> _delegate;
    id <SPTPlayer> _player;
    id <SPTHubInteractionLogger> _interactionLogger;
    id <SPTUBIHubsUtilities> _ubiHubsInstrumentation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTUBIHubsUtilities> ubiHubsInstrumentation; // @synthesize ubiHubsInstrumentation=_ubiHubsInstrumentation;
@property(readonly, nonatomic) id <SPTHubInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTHubPlayTrackListCommandHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithPlayer:(id)arg1 interactionLogger:(id)arg2 ubiHubsInstrumentation:(id)arg3;

@end

