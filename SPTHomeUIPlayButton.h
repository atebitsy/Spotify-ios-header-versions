//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class HUBComponentEvent;
@protocol HUBComponentEventHandler;

@interface SPTHomeUIPlayButton : UIButton
{
    id <HUBComponentEventHandler> _eventHandler;
    HUBComponentEvent *_event;
    unsigned long long _buttonState;
    struct UIEdgeInsets _touchInsets;
}

@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(nonatomic) unsigned long long buttonState; // @synthesize buttonState=_buttonState;
@property(retain, nonatomic) HUBComponentEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) id <HUBComponentEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void).cxx_destruct;
- (void)addAccessibility;
@property(nonatomic, getter=isPlaying) _Bool playing;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)sendTapEvent;
- (void)configureWithModel:(id)arg1 eventHandler:(id)arg2;
- (void)addIconImagesToStates;
- (id)init;

@end

