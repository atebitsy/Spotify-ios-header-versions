//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistHeaderProvider-Protocol.h"

@class NSString, SPTFreeTierPlaylistEncoreHeaderControllerImplementation;
@protocol SPTEncorePlaylistHeaderFactory, SPTImageLoader, SPTLinkDispatcher;

@interface SPTFreeTierPlaylistEncoreHeaderProviderImplementation : NSObject <SPTFreeTierPlaylistHeaderProvider>
{
    id <SPTImageLoader> _imageLoader;
    SPTFreeTierPlaylistEncoreHeaderControllerImplementation *_headerController;
    id <SPTEncorePlaylistHeaderFactory> _encoreComponentFactory;
    id <SPTLinkDispatcher> _linkDispatcher;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTEncorePlaylistHeaderFactory> encoreComponentFactory; // @synthesize encoreComponentFactory=_encoreComponentFactory;
@property(retain, nonatomic) SPTFreeTierPlaylistEncoreHeaderControllerImplementation *headerController; // @synthesize headerController=_headerController;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) _Bool drawDropShadow;
@property(readonly, nonatomic) _Bool drawBottomLineLayer;
- (id)provideHeader;
- (void)configureBarButtonManagerDelegate:(id)arg1;
- (void)configureWithPlaylistConfiguration:(id)arg1 filterSortBarView:(id)arg2;
- (void)setupVISREFHeaderController;
- (id)initWithImageLoader:(id)arg1 linkDispatcher:(id)arg2 encoreComponentFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
