//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTAudioDriverController;

@interface SPTCoreCreateOptions : NSObject
{
    _Bool _isTablet;
    _Bool _perfTracingEnabled;
    unsigned int _clientRevision;
    NSString *_cachePath;
    NSString *_volatileCachePath;
    NSString *_settingsPath;
    NSString *_deviceHardwareModel;
    NSString *_deviceName;
    NSString *_deviceModelName;
    NSString *_deviceDescription;
    NSString *_deviceDescriptionShort;
    NSString *_deviceId;
    NSString *_clientVersionLong;
    NSString *_clientVersionShort;
    NSString *_buildId;
    NSString *_clientId;
    CDUnknownBlockType _acceptLanguageCallback;
    id <SPTAudioDriverController> _audioDriverController;
}

+ (id)iosCoreCreateOptionsWithCachePath:(id)arg1 volatileCachePath:(id)arg2 settingsPath:(id)arg3 audioDriverController:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) _Bool perfTracingEnabled; // @synthesize perfTracingEnabled=_perfTracingEnabled;
@property(retain, nonatomic) id <SPTAudioDriverController> audioDriverController; // @synthesize audioDriverController=_audioDriverController;
@property(copy, nonatomic) CDUnknownBlockType acceptLanguageCallback; // @synthesize acceptLanguageCallback=_acceptLanguageCallback;
@property(nonatomic) _Bool isTablet; // @synthesize isTablet=_isTablet;
@property(copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(copy, nonatomic) NSString *buildId; // @synthesize buildId=_buildId;
@property(copy, nonatomic) NSString *clientVersionShort; // @synthesize clientVersionShort=_clientVersionShort;
@property(copy, nonatomic) NSString *clientVersionLong; // @synthesize clientVersionLong=_clientVersionLong;
@property(nonatomic) unsigned int clientRevision; // @synthesize clientRevision=_clientRevision;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *deviceDescriptionShort; // @synthesize deviceDescriptionShort=_deviceDescriptionShort;
@property(copy, nonatomic) NSString *deviceDescription; // @synthesize deviceDescription=_deviceDescription;
@property(copy, nonatomic) NSString *deviceModelName; // @synthesize deviceModelName=_deviceModelName;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *deviceHardwareModel; // @synthesize deviceHardwareModel=_deviceHardwareModel;
@property(copy, nonatomic) NSString *settingsPath; // @synthesize settingsPath=_settingsPath;
@property(copy, nonatomic) NSString *volatileCachePath; // @synthesize volatileCachePath=_volatileCachePath;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(readonly, nonatomic) struct CoreCreateOptions cppCreateOptions;

@end

