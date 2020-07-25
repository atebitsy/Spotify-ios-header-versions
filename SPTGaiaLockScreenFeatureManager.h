//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectManagerObserver-Protocol.h"
#import "SPTGaiaLockScreenControlsStateProvider-Protocol.h"
#import "SPTGaiaSettingsObserver-Protocol.h"

@class NSNumber, NSString, SPTObserverManager;
@protocol SPTGaiaConnectManager, SPTGaiaLockScreenPlayerFlagsProvider, SPTGaiaSettingsProvider;

@interface SPTGaiaLockScreenFeatureManager : NSObject <SPTGaiaSettingsObserver, SPTGaiaConnectManagerObserver, SPTGaiaLockScreenControlsStateProvider>
{
    id <SPTGaiaLockScreenPlayerFlagsProvider> _lockScreenFlagsProvider;
    id <SPTGaiaSettingsProvider> _settingsProvider;
    id <SPTGaiaConnectManager> _connectManager;
    SPTObserverManager *_observers;
    NSNumber *_internalLockScreenFeatureIsEnabled;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *internalLockScreenFeatureIsEnabled; // @synthesize internalLockScreenFeatureIsEnabled=_internalLockScreenFeatureIsEnabled;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTGaiaConnectManager> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) id <SPTGaiaSettingsProvider> settingsProvider; // @synthesize settingsProvider=_settingsProvider;
@property(readonly, nonatomic) id <SPTGaiaLockScreenPlayerFlagsProvider> lockScreenFlagsProvider; // @synthesize lockScreenFlagsProvider=_lockScreenFlagsProvider;
- (void)updateObservers;
- (void)connectManager:(id)arg1 activeDeviceDidChange:(id)arg2;
- (void)localDevicesOnlySettingsChanged:(_Bool)arg1;
- (void)lockScreenControlsSettingsChanged:(_Bool)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)lockScreenFeatureIsEnabled;
- (void)dealloc;
- (id)initWithLockScreenPlayerFlagsProvider:(id)arg1 settingsProvider:(id)arg2 connectManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

