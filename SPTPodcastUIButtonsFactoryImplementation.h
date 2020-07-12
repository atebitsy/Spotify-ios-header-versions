//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastUIButtonsFactory-Protocol.h"

@class NSString, SPTTheme;
@protocol GLUETheme;

@interface SPTPodcastUIButtonsFactoryImplementation : NSObject <SPTPodcastUIButtonsFactory>
{
    SPTTheme *_theme;
    id <GLUETheme> _glueTheme;
}

@property(retain, nonatomic) id <GLUETheme> glueTheme; // @synthesize glueTheme=_glueTheme;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)contextMenuButtonForIndexPath:(id)arg1 target:(id)arg2;
- (id)checkmarkButtonForIndexPath:(id)arg1 target:(id)arg2;
- (id)playButton:(_Bool)arg1 indexPath:(id)arg2 target:(id)arg3;
- (id)shareButtonwithIndexPath:(id)arg1 target:(id)arg2;
- (id)crossButtonWithIndexPath:(id)arg1 target:(id)arg2;
- (id)downloadButtonwithIndexPath:(id)arg1 supportsGranularDownloadProgress:(_Bool)arg2 target:(id)arg3;
- (id)podcastPlayButtonWithState:(_Bool)arg1 indexPath:(id)arg2 target:(id)arg3;
- (id)internalPodcastButtonWithType:(long long)arg1 indexPath:(id)arg2 target:(id)arg3;
- (id)podcastButtonWithType:(long long)arg1 indexPath:(id)arg2 target:(id)arg3;
- (id)podcastButtonWithType:(long long)arg1;
- (id)initWithTheme:(id)arg1 glueTheme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

