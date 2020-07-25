//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKDiscoveryManagerListener-Protocol.h"
#import "GCKSessionManagerListener-Protocol.h"
#import "SPTCastCustomChannelDelegate-Protocol.h"
#import "SPTGaiaCastCoreInteractorDelegate-Protocol.h"

@class GCKCastContext, GCKDevice, NSArray, NSString, SPTCastCustomChannel, SPTCastReceiverAppIDManager, SPTGaiaCastCoreInteractor, SPTGaiaCastErrorLogger, SPTObserverManager;
@protocol SPTGaiaConnectManager, SPTProductState;

@interface SPTCastManager : NSObject <GCKDiscoveryManagerListener, GCKSessionManagerListener, SPTCastCustomChannelDelegate, SPTGaiaCastCoreInteractorDelegate>
{
    id <SPTProductState> _productState;
    GCKCastContext *_castContext;
    SPTCastReceiverAppIDManager *_receiverAppManager;
    id <SPTGaiaConnectManager> _connectManager;
    SPTGaiaCastCoreInteractor *_coreInteractor;
    SPTGaiaCastErrorLogger *_errorLogger;
    GCKDevice *_deviceToConnectAfterDisconnection;
    SPTCastCustomChannel *_castCustomChannel;
    SPTObserverManager *_observers;
    NSArray *_devices;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) SPTCastCustomChannel *castCustomChannel; // @synthesize castCustomChannel=_castCustomChannel;
@property(retain, nonatomic) GCKDevice *deviceToConnectAfterDisconnection; // @synthesize deviceToConnectAfterDisconnection=_deviceToConnectAfterDisconnection;
@property(retain, nonatomic) SPTGaiaCastErrorLogger *errorLogger; // @synthesize errorLogger=_errorLogger;
@property(retain, nonatomic) SPTGaiaCastCoreInteractor *coreInteractor; // @synthesize coreInteractor=_coreInteractor;
@property(retain, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(retain, nonatomic) SPTCastReceiverAppIDManager *receiverAppManager; // @synthesize receiverAppManager=_receiverAppManager;
@property(retain, nonatomic) GCKCastContext *castContext; // @synthesize castContext=_castContext;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
- (void)refreshLocalDevices;
- (void)disconnectCastFromDevice;
@property(readonly, nonatomic) GCKDevice *connectedCastDevice;
- (void)connectToDevice:(id)arg1;
- (void)connectToCastDeviceWithName:(id)arg1;
- (void)notifyObserversConnectivityUpdated;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)isLoginAlreadyPerformed;
- (_Bool)isDevice:(id)arg1 sameAsCastDevice:(id)arg2;
- (id)castDiscoveredDeviceFromGCKDevice:(id)arg1;
- (void)removeDeviceFromCore:(id)arg1;
- (void)injectDeviceToCore:(id)arg1;
- (void)removeCastDevice:(id)arg1;
- (void)addCastDevice:(id)arg1;
- (void)didLogoutFromDevice;
- (void)didRequestMessage:(id)arg1;
- (void)didRequestConnect:(id)arg1;
- (void)destroyMessageChannel;
- (void)createMessageChannel;
- (void)createChannels;
- (void)sessionManager:(id)arg1 didResumeCastSession:(id)arg2;
- (void)sessionManager:(id)arg1 didSuspendCastSession:(id)arg2 withReason:(long long)arg3;
- (void)sessionManager:(id)arg1 didEndCastSession:(id)arg2 withError:(id)arg3;
- (void)sessionManager:(id)arg1 willEndSession:(id)arg2;
- (void)sessionManager:(id)arg1 didFailToStartCastSession:(id)arg2 withError:(id)arg3;
- (void)sessionManager:(id)arg1 didStartCastSession:(id)arg2;
- (void)messageReceived:(id)arg1;
- (void)didUpdateDeviceList;
- (void)didUpdateDeviceListSync;
- (id)castModelName:(id)arg1;
- (id)activeDevice;
- (id)getCastDeviceList;
- (_Bool)isConnectedCastDevice:(id)arg1;
- (_Bool)isConnectDeviceConnectIncarnationPreferred:(id)arg1;
- (_Bool)isDeviceCast:(id)arg1;
- (_Bool)isCastSessionActive;
- (void)stopScanning;
- (void)startScanning;
- (void)stopScanningInternal;
- (void)startScanningInternal;
- (void)tearDown;
- (void)setupCoreInteractor;
- (void)setupDeviceManager;
- (void)setupCastContext;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 castContext:(id)arg2 receiverAppManager:(id)arg3 connectManager:(id)arg4 coreInteractor:(id)arg5 errorLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

