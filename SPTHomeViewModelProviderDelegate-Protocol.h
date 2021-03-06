//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTHomeViewModelProvider;
@protocol HUBViewModel;

@protocol SPTHomeViewModelProviderDelegate <NSObject>
- (void)viewModelProvider:(SPTHomeViewModelProvider *)arg1 didLoadRemoteViewModel:(id <HUBViewModel>)arg2 withError:(NSError *)arg3;
- (void)viewModelProviderWillLoadRemoteViewModel:(SPTHomeViewModelProvider *)arg1;
- (void)viewModelProvider:(SPTHomeViewModelProvider *)arg1 didLoadCachedViewModel:(id <HUBViewModel>)arg2 withError:(NSError *)arg3;
- (void)viewModelProviderWillLoadCachedViewModel:(SPTHomeViewModelProvider *)arg1;
@end

