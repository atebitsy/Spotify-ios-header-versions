//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@protocol HUBCommandHandler, SPTPlayer;

@interface SPTHomePlayThenPauseCommandHandler : NSObject <HUBCommandHandler>
{
    id <HUBCommandHandler> _playCommand;
    id <SPTPlayer> _player;
}

@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <HUBCommandHandler> playCommand; // @synthesize playCommand=_playCommand;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithPlayer:(id)arg1 defaultCommands:(id)arg2;

@end

