//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL, SPTSkipToTrack;
@protocol SPTExternalIntegrationContentRequestOptions;

@protocol SPTExternalIntegrationContent <NSObject>
@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent;
@property(readonly, nonatomic, getter=isAvailableOffline) _Bool availableOffline;
@property(readonly, copy, nonatomic) id <SPTExternalIntegrationContentRequestOptions> requestOptions;
@property(readonly, copy, nonatomic) SPTSkipToTrack *skipToTrack;
@property(readonly, copy, nonatomic) NSURL *contextURI;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, copy, nonatomic) NSString *emptyContainerDescription;
@property(readonly, nonatomic, getter=isContainer) _Bool container;
@property(readonly, copy, nonatomic) NSString *source;
@property(readonly, copy, nonatomic) NSString *uniqueId;
@property(readonly, nonatomic) float playbackProgress;
@property(readonly, nonatomic) long long placeholderIcon;
@property(readonly, copy, nonatomic) NSURL *imageURI;
@property(readonly, copy, nonatomic) NSURL *viewURI;
@property(readonly, copy, nonatomic) NSURL *URI;
@property(readonly, copy, nonatomic) NSString *contentDescription;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@end

