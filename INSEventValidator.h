//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSEventValidatorProtocol-Protocol.h"

@class NSString;
@protocol INSInternalErrorEventDelegate, INSLogger;

@interface INSEventValidator : NSObject <INSEventValidatorProtocol>
{
    unsigned long long _maxPayloadSize;
    unsigned long long _maxESSPayloadSize;
    NSString *_shortVersionString;
    id <INSLogger> _logger;
    id <INSInternalErrorEventDelegate> _errorDelegate;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <INSInternalErrorEventDelegate> errorDelegate; // @synthesize errorDelegate=_errorDelegate;
@property(retain, nonatomic) id <INSLogger> logger; // @synthesize logger=_logger;
@property(copy, nonatomic) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(nonatomic) unsigned long long maxESSPayloadSize; // @synthesize maxESSPayloadSize=_maxESSPayloadSize;
@property(nonatomic) unsigned long long maxPayloadSize; // @synthesize maxPayloadSize=_maxPayloadSize;
- (void)logRejectedClientEventForValidatorResult:(unsigned long long)arg1 eventName:(id)arg2;
- (id)errorInfoWithDescription:(id)arg1 messageName:(id)arg2;
- (id)errorForValidatorResult:(unsigned long long)arg1 message:(id)arg2;
- (unsigned long long)validateMessage:(id)arg1;
- (_Bool)validateOwner:(id)arg1 forMessage:(id)arg2;
- (_Bool)validateEnvelope:(id)arg1 error:(id *)arg2;
- (_Bool)validateMessage:(id)arg1 error:(id *)arg2;
- (id)initWithMaxPayloadSize:(unsigned long long)arg1 maxESSPayloadSize:(unsigned long long)arg2 shortVersionString:(id)arg3 logger:(id)arg4 errorDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

