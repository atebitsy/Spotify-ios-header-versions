//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShowInfoViewProvider-Protocol.h"

@class NSString;
@protocol GLUETheme, SPTLinkDispatcher, SPTMetaViewController, SPTNavigationRouter, SPTPodcastLogger;

@interface SPTPodcastYourLibraryInfoViewProviderImplementation : NSObject <SPTShowInfoViewProvider>
{
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTMetaViewController> _metaViewController;
    id <SPTNavigationRouter> _navigationRouter;
    id <GLUETheme> _theme;
    id <SPTPodcastLogger> _podcastLogger;
}

@property(retain, nonatomic) id <SPTPodcastLogger> podcastLogger; // @synthesize podcastLogger=_podcastLogger;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(nonatomic) __weak id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(nonatomic) __weak id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
- (void).cxx_destruct;
- (id)provideInfoViewWithError:(id)arg1 target:(id)arg2;
- (id)provideInfoViewForURI:(id)arg1 mediaType:(unsigned long long)arg2;
- (id)provideInfoViewForURI:(id)arg1;
- (id)initWithTheme:(id)arg1 linkDispatcher:(id)arg2 metaViewController:(id)arg3 navigationRouter:(id)arg4 podcastLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

