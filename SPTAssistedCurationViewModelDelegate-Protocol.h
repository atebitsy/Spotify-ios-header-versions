//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTAssistedCurationViewModel;

@protocol SPTAssistedCurationViewModelDelegate <NSObject>
- (void)dismissSearchAssistedCurationViewModel:(id <SPTAssistedCurationViewModel>)arg1;
- (void)assistedCurationViewModel:(id <SPTAssistedCurationViewModel>)arg1 noCardsBecauseOffline:(_Bool)arg2;
- (void)assistedCurationViewModel:(id <SPTAssistedCurationViewModel>)arg1 error:(NSError *)arg2;
- (void)assistedCurationViewModel:(id <SPTAssistedCurationViewModel>)arg1 removedCardAtIndex:(long long)arg2;
- (void)assistedCurationViewModel:(id <SPTAssistedCurationViewModel>)arg1 scrollToCardAtIndex:(long long)arg2;
- (void)didChangeAssistedCurationViewModel:(id <SPTAssistedCurationViewModel>)arg1;
@end

