//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUBComponentView.h"

#import "HUBComponentViewContentOffsetObserver-Protocol.h"
#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"

@class NSLayoutConstraint, NSURL, SPTEncoreAlbumHeader, SPTEncoreAlbumHeaderController;
@protocol HUBComponentEventHandler;

@interface SPTEncoreAlbumHeaderHubComponentView : HUBComponentView <HUBComponentViewWithImageHandling, HUBComponentViewWithEvents, HUBComponentViewContentOffsetObserver>
{
    id <HUBComponentEventHandler> _eventHandler;
    CDUnknownBlockType _backButtonTappedBlock;
    id _followButtonModel;
    id _contextMenuButtonModel;
    id _offlineButtonModel;
    SPTEncoreAlbumHeaderController *_headerController;
    NSLayoutConstraint *_heightConstraint;
    NSURL *_lastImageURL;
    double _statusBarHeight;
    SPTEncoreAlbumHeader *_header;
    struct CGSize _screenSize;
}

@property(retain, nonatomic) SPTEncoreAlbumHeader *header; // @synthesize header=_header;
@property(nonatomic) struct CGSize screenSize; // @synthesize screenSize=_screenSize;
@property(nonatomic) double statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(retain, nonatomic) NSURL *lastImageURL; // @synthesize lastImageURL=_lastImageURL;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) SPTEncoreAlbumHeaderController *headerController; // @synthesize headerController=_headerController;
@property(retain, nonatomic) id offlineButtonModel; // @synthesize offlineButtonModel=_offlineButtonModel;
@property(retain, nonatomic) id contextMenuButtonModel; // @synthesize contextMenuButtonModel=_contextMenuButtonModel;
@property(retain, nonatomic) id followButtonModel; // @synthesize followButtonModel=_followButtonModel;
@property(copy, nonatomic) CDUnknownBlockType backButtonTappedBlock; // @synthesize backButtonTappedBlock=_backButtonTappedBlock;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)updateViewForChangedContentOffset:(struct CGPoint)arg1;
- (void)updateViewForImageFailedWithError:(id)arg1 fromData:(id)arg2 model:(id)arg3;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)configureWithModel:(id)arg1;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1 albumHeaderFactory:(id)arg2 imageLoader:(id)arg3 linkDispatcher:(id)arg4;

@end

