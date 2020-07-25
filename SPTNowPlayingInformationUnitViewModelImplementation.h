//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingInformationUnitViewModel-Protocol.h"
#import "SPTNowPlayingModelObserver-Protocol.h"

@class NSString, NSURL, SPTNowPlayingLogger, SPTNowPlayingModel;
@protocol SPTLinkDispatcher, SPTNowPlayingInformationUnitViewModelDelegate;

@interface SPTNowPlayingInformationUnitViewModelImplementation : NSObject <SPTNowPlayingModelObserver, SPTNowPlayingInformationUnitViewModel>
{
    id <SPTNowPlayingInformationUnitViewModelDelegate> _delegate;
    SPTNowPlayingModel *_model;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_contextSource;
    SPTNowPlayingLogger *_logger;
    id <SPTLinkDispatcher> _linkDispatcher;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSURL *contextSource; // @synthesize contextSource=_contextSource;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) SPTNowPlayingModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SPTNowPlayingInformationUnitViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getCurrentSubtitleWithNowPlayingModel:(id)arg1;
- (void)updateWithNowPlayingModel:(id)arg1 trackDidChange:(_Bool)arg2;
- (void)navigateToCurrentArtist;
- (void)nowPlayingModel:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingModelDidUpdateMetadata:(id)arg1;
- (void)navigateToSubtitleLink;
- (void)navigateToCurrentAlbum;
- (void)dealloc;
- (void)stopObservers;
- (void)startObservers;
- (id)initWithNowPlayingModel:(id)arg1 linkDispatcher:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

