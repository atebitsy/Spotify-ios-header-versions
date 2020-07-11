//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTFreeTierTasteOnboardingCurator.h"

@class SPTDataLoader, SPTObserverManager;

@interface SPTSeedASessionCurator : SPTFreeTierTasteOnboardingCurator
{
    SPTDataLoader *_dataLoader;
    SPTObserverManager *_observerManager;
}

@property(readonly, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)curateSeedASessionWithType:(id)arg1 sourceIdentifier:(id)arg2 artistURIs:(id)arg3 includeSimilarArtists:(_Bool)arg4 sessionId:(id)arg5;
- (void)curateSeedASessionWithArtistURIs:(id)arg1 includeSimilarArtists:(_Bool)arg2 sessionId:(id)arg3;
- (id)initWithDataLoader:(id)arg1 localSettings:(id)arg2 observerManager:(id)arg3;

@end

