//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HUGSThemableComponentView.h"

#import "HUBComponentViewWithEvents-Protocol.h"
#import "HUBComponentViewWithImageHandling-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SPTPodcastUIEpisodeImageCardViewV2;
@protocol HUBComponentEventHandler;

@interface SPTPodcastUIEpisodeImageCardComponentViewV2 : HUGSThemableComponentView <UIGestureRecognizerDelegate, HUBComponentViewWithEvents, HUBComponentViewWithImageHandling>
{
    _Bool _highlighted;
    id <HUBComponentEventHandler> _eventHandler;
    SPTPodcastUIEpisodeImageCardViewV2 *_imageCardView;
}

+ (struct CGSize)preferredViewSizeForDisplayingModel:(id)arg1 containerViewSize:(struct CGSize)arg2 theme:(id)arg3;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) SPTPodcastUIEpisodeImageCardViewV2 *imageCardView; // @synthesize imageCardView=_imageCardView;
@property(retain, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)applyThemeLayout;
- (void)sendSelectionEvent;
- (struct CGSize)preferredSizeForImageFromData:(id)arg1 model:(id)arg2 containerViewSize:(struct CGSize)arg3;
- (void)updateViewForLoadedImage:(id)arg1 fromData:(id)arg2 model:(id)arg3 animated:(_Bool)arg4;
- (void)setMetadataWithModel:(id)arg1;
- (void)setTitleWithModel:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (void)prepareForReuse;
- (void)setUpSubviews;
- (id)initWithTheme:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

