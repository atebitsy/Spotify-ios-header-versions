//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierTasteOnboardingCurationObserver-Protocol.h"

@class NSString, SPTObserverManager;
@protocol SPTFreeTierTasteOnboardingCurationProvider;

@interface SPTFreeTierTasteOnboardingCompoundCuration : NSObject <SPTFreeTierTasteOnboardingCurationObserver>
{
    id <SPTFreeTierTasteOnboardingCurationProvider> _podcastOnboardingCurationProvider;
    SPTObserverManager *_tasteOnboardingCurationObserver;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SPTObserverManager *tasteOnboardingCurationObserver; // @synthesize tasteOnboardingCurationObserver=_tasteOnboardingCurationObserver;
@property(retain, nonatomic) id <SPTFreeTierTasteOnboardingCurationProvider> podcastOnboardingCurationProvider; // @synthesize podcastOnboardingCurationProvider=_podcastOnboardingCurationProvider;
- (void)tasteOnboardingDidFinishCurating:(id)arg1;
- (void)tasteOnboardingDidUpdateTaste:(id)arg1;
- (void)dealloc;
- (id)initWithPodcastOnboardingCurationProvider:(id)arg1 tasteOnboardingCurationObserver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

