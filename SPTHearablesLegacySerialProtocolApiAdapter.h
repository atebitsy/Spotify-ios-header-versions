//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHearablesSerialProtocolAdapter-Protocol.h"

@class NSString;
@protocol SPTHearablesSpotifyGoAPI;

@interface SPTHearablesLegacySerialProtocolApiAdapter : NSObject <SPTHearablesSerialProtocolAdapter>
{
    id <SPTHearablesSpotifyGoAPI> _adaptee;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTHearablesSpotifyGoAPI> adaptee; // @synthesize adaptee=_adaptee;
- (id)parseData:(id)arg1;
- (void)executeMessage:(id)arg1;
- (id)initWithImplementation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

