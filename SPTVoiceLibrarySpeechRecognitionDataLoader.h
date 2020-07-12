//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTVoiceLibraryOutputStreamDelegate-Protocol.h"

@class NSInputStream, NSMutableData, NSString, SPTDataLoader, SPTDataLoaderRequest, SPTVoiceLibraryJSONObjectDecoder, SPTVoiceLibraryOutputStreamHelper, SPTVoiceLibrarySpeechProxyRequest;
@protocol SPTDataLoaderCancellationToken, SPTPlayer, SPTVoiceLibrarySpeechRecognitionDataLoaderDelegate;

@interface SPTVoiceLibrarySpeechRecognitionDataLoader : NSObject <SPTVoiceLibraryOutputStreamDelegate, SPTDataLoaderDelegate>
{
    _Bool _hasReceivedFinalTranscription;
    id <SPTVoiceLibrarySpeechRecognitionDataLoaderDelegate> _delegate;
    SPTDataLoader *_dataLoader;
    id <SPTPlayer> _player;
    NSString *_sampleRate;
    SPTVoiceLibrarySpeechProxyRequest *_speechProxyRequest;
    NSMutableData *_finalResponseBody;
    SPTDataLoaderRequest *_request;
    id <SPTDataLoaderCancellationToken> _cancellationToken;
    SPTVoiceLibraryOutputStreamHelper *_outputStreamHelper;
    NSInputStream *_inputStream;
    NSString *_boundary;
    SPTVoiceLibraryJSONObjectDecoder *_jsonObjectDecoder;
}

@property(retain, nonatomic) SPTVoiceLibraryJSONObjectDecoder *jsonObjectDecoder; // @synthesize jsonObjectDecoder=_jsonObjectDecoder;
@property(copy, nonatomic) NSString *boundary; // @synthesize boundary=_boundary;
@property(retain, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property(retain, nonatomic) SPTVoiceLibraryOutputStreamHelper *outputStreamHelper; // @synthesize outputStreamHelper=_outputStreamHelper;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(retain, nonatomic) SPTDataLoaderRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSMutableData *finalResponseBody; // @synthesize finalResponseBody=_finalResponseBody;
@property(nonatomic) _Bool hasReceivedFinalTranscription; // @synthesize hasReceivedFinalTranscription=_hasReceivedFinalTranscription;
@property(readonly, nonatomic) SPTVoiceLibrarySpeechProxyRequest *speechProxyRequest; // @synthesize speechProxyRequest=_speechProxyRequest;
@property(readonly, nonatomic) NSString *sampleRate; // @synthesize sampleRate=_sampleRate;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTVoiceLibrarySpeechRecognitionDataLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didEncounterEndOfOutputStream;
- (void)outputStream:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)dataLoaderShouldSupportChunks:(id)arg1;
- (void)dataLoader:(id)arg1 needsNewBodyStream:(CDUnknownBlockType)arg2 forRequest:(id)arg3;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveDataChunk:(id)arg2 forResponse:(id)arg3;
- (void)dataLoader:(id)arg1 didReceiveInitialResponse:(id)arg2;
- (void)notifyError:(id)arg1;
- (id)parseJSONfromData:(id)arg1;
- (id)invalidResponseErrorWithUnderlyingError:(id)arg1;
- (void)writeInitialMessage;
- (void)setupStreams;
- (void)write:(short **)arg1 maxLength:(unsigned long long)arg2;
- (void)cancel;
- (void)start;
- (id)initWithDataLoader:(id)arg1 player:(id)arg2 sampleRate:(double)arg3 speechProxyRequest:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

