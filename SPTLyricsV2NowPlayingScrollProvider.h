//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingScrollProvider-Protocol.h"

@class NSString, SPTLyricsV2Configuration, SPTLyricsV2GLUETheme, SPTLyricsV2NowPlayingCardViewController, SPTVocalRemovalConfiguration;

@interface SPTLyricsV2NowPlayingScrollProvider : NSObject <SPTNowPlayingScrollProvider>
{
    NSString *_title;
    SPTLyricsV2Configuration *_lyricsConfiguration;
    SPTLyricsV2GLUETheme *_theme;
    SPTLyricsV2NowPlayingCardViewController *_nowPlayingCardViewController;
    SPTVocalRemovalConfiguration *_vocalRemovalConfiguration;
}

@property(readonly, nonatomic) SPTVocalRemovalConfiguration *vocalRemovalConfiguration; // @synthesize vocalRemovalConfiguration=_vocalRemovalConfiguration;
@property(retain, nonatomic) SPTLyricsV2NowPlayingCardViewController *nowPlayingCardViewController; // @synthesize nowPlayingCardViewController=_nowPlayingCardViewController;
@property(readonly, nonatomic) SPTLyricsV2GLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLyricsV2Configuration *lyricsConfiguration; // @synthesize lyricsConfiguration=_lyricsConfiguration;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)createCardViewController;
- (id)componentViewForTrack:(id)arg1;
- (void)loadContentForTrack:(id)arg1;
- (_Bool)isEnabledForTrack:(id)arg1;
- (id)identifier;
- (id)initWithLyricsConfiguration:(id)arg1 vocalRemovalConfiguration:(id)arg2 theme:(id)arg3 cardTitle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

