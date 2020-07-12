//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeUILogger-Protocol.h"

@class NSString, SPTMobileHomeEventFactoryProvider;
@protocol SPTEventSender, SPTLogCenter, SPTUBILogger;

@interface SPTHomeUILoggerImplementation : NSObject <SPTHomeUILogger>
{
    id <SPTLogCenter> _logCenter;
    id <SPTUBILogger> _ubiLogger;
    id <SPTEventSender> _eventSender;
    SPTMobileHomeEventFactoryProvider *_mobileHomeEventFactoryProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SPTMobileHomeEventFactoryProvider *mobileHomeEventFactoryProvider; // @synthesize mobileHomeEventFactoryProvider=_mobileHomeEventFactoryProvider;
@property(readonly, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(readonly, nonatomic) id <SPTUBILogger> ubiLogger; // @synthesize ubiLogger=_ubiLogger;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (id)trackURIInModel:(id)arg1;
- (void)logDidChangePlayerStateInPromoV2Component:(unsigned long long)arg1 forTrackWithModel:(id)arg2 loggingData:(id)arg3;
- (void)logDimensionsForView:(id)arg1 withContext:(id)arg2;
- (void)logDimensionsForCell:(id)arg1 withIndexPath:(id)arg2 collectionView:(id)arg3 context:(id)arg4;
- (void)logDidResumeTrackInPromoV2ComponentWithModel:(id)arg1 loggingData:(id)arg2;
- (void)logDidPauseTrackInPromoV2ComponentWithModel:(id)arg1 loggingData:(id)arg2;
- (void)logDidPlayTrackInPromoV2ComponentWithModel:(id)arg1 loggingData:(id)arg2;
- (id)initWithLogCenter:(id)arg1 ubiLogger:(id)arg2 eventSender:(id)arg3 mobileHomeEventFactoryProvider:(id)arg4;
- (id)initWithLogCenter:(id)arg1 ubiLogger:(id)arg2 eventSender:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

