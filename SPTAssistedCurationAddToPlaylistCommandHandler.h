//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@protocol SPTAssistedCurationAddTrackHandler;

@interface SPTAssistedCurationAddToPlaylistCommandHandler : NSObject <HUBCommandHandler>
{
    id <SPTAssistedCurationAddTrackHandler> _addTrackHandler;
}

@property(readonly, nonatomic) id <SPTAssistedCurationAddTrackHandler> addTrackHandler; // @synthesize addTrackHandler=_addTrackHandler;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithAddTrackHandler:(id)arg1;

@end

