//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSEventSequenceIDProviderProtocol-Protocol.h"

@class NSData, NSString;

@interface INSEventSequenceIDProvider : NSObject <INSEventSequenceIDProviderProtocol>
{
    NSData *_deviceID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *deviceID; // @synthesize deviceID=_deviceID;
- (id)eventSequenceIDWithInstallID:(id)arg1 owner:(id)arg2;
- (id)eventSequenceIDWithInstallID:(id)arg1;
- (id)initWithDeviceID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

