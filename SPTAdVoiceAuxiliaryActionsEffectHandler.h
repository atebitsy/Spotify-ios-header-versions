//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTAdNowPlayingAuxiliaryActionsHandler;
@protocol SPTAdsBaseEntity;

@interface SPTAdVoiceAuxiliaryActionsEffectHandler : NSObject
{
    SPTAdNowPlayingAuxiliaryActionsHandler *_nowPlayingAuxiliaryActionsHandler;
    id <SPTAdsBaseEntity> _adEntity;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTAdsBaseEntity> adEntity; // @synthesize adEntity=_adEntity;
@property(retain, nonatomic) SPTAdNowPlayingAuxiliaryActionsHandler *nowPlayingAuxiliaryActionsHandler; // @synthesize nowPlayingAuxiliaryActionsHandler=_nowPlayingAuxiliaryActionsHandler;
- (void)handleSaveAdEffect:(id)arg1 eventSink:(CDUnknownBlockType)arg2;
- (id)initWithNowPlayingAuxiliaryActionsHandler:(id)arg1 adEntity:(id)arg2;

@end

