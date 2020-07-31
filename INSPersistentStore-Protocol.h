//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EventEnvelope, INSInstallIdEntityProxy, INSMessageEntityProxy, NSArray, NSData, NSDictionary, NSSet, NSString;
@protocol INSInstallIdEntityProtocol, INSSequenceNumberEntityProtocol;

@protocol INSPersistentStore <NSObject>
- (unsigned long long)getMessageCountOnPrivateMOC;
- (void)deleteInstallIdEntityOnPrivateMOC;
- (INSInstallIdEntityProxy *)getInstallIdEntityProxyOnPrivateMOC;
- (_Bool)isCurrentlyOnPrivateMOCDispatchQueue;
- (void)performBlockOnPrivateMOCQueue:(void (^)(void))arg1;
- (NSDictionary *)getEventSenderStatsNodesOnPrivateMOCWithSequenceIds:(NSSet *)arg1;
- (id <INSInstallIdEntityProtocol>)getInstallIdOnPrivateMOC;
- (void)saveOnPrivateMOC;
- (INSMessageEntityProxy *)persistNonAuthenticatedEventEnvelopeOnPrivateMOC:(EventEnvelope *)arg1;
- (INSMessageEntityProxy *)persistAuthenticatedEventEnvelopeOnPrivateMOC:(EventEnvelope *)arg1 owner:(NSString *)arg2;
- (id <INSSequenceNumberEntityProtocol>)incrementSequenceNumberOnPrivateMOCWithEventName:(NSString *)arg1 sequenceId:(NSData *)arg2;
- (NSArray *)getNonAuthenticatedMessagesOnPrivateMOC;
- (NSArray *)getAuthenticatedMessagesOnPrivateMOCWithOwner:(NSString *)arg1;
- (NSArray *)getAllMessagesOnPrivateMOC;
- (_Bool)doesContainMessageOnPrivateMOCWithId:(NSString *)arg1;
- (void)deleteMessageOnPrivateMOCWithId:(NSString *)arg1;
@end

