//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SPTVoiceNowPlayingArtworkViewModelDelegate, SPTVoicePlayerEventsListener;

@interface SPTVoiceNowPlayingArtworkViewModel : NSObject
{
    id <SPTVoiceNowPlayingArtworkViewModelDelegate> _delegate;
    NSURL *_artworkImageURI;
    id <SPTVoicePlayerEventsListener> _playerEventsListener;
}

@property(retain, nonatomic) id <SPTVoicePlayerEventsListener> playerEventsListener; // @synthesize playerEventsListener=_playerEventsListener;
@property(retain, nonatomic) NSURL *artworkImageURI; // @synthesize artworkImageURI=_artworkImageURI;
@property(nonatomic) __weak id <SPTVoiceNowPlayingArtworkViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateViewModelWithPlayerState:(id)arg1;
- (id)initWithPlayerEventsListener:(id)arg1;

@end
