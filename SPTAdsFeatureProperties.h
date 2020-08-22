//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTRemoteConfigurationProperties-Protocol.h"

@class NSString;

@interface SPTAdsFeatureProperties : NSObject <SPTRemoteConfigurationProperties>
{
    _Bool _creamBookmarkAudioAdsIos;
    _Bool _audioAdsSwiftNpvEnabled;
    _Bool _comscoreEnabled;
    unsigned long long _adsInAppBrowserIos;
    unsigned long long _audioPlusFormat;
    unsigned long long _audioPlusVersion;
    NSString *_adsInAppBrowserIosString;
    NSString *_audioPlusFormatString;
    NSString *_audioPlusVersionString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *audioPlusVersionString; // @synthesize audioPlusVersionString=_audioPlusVersionString;
@property(retain, nonatomic) NSString *audioPlusFormatString; // @synthesize audioPlusFormatString=_audioPlusFormatString;
@property(retain, nonatomic) NSString *adsInAppBrowserIosString; // @synthesize adsInAppBrowserIosString=_adsInAppBrowserIosString;
@property(readonly, nonatomic) unsigned long long audioPlusVersion; // @synthesize audioPlusVersion=_audioPlusVersion;
@property(readonly, nonatomic) unsigned long long audioPlusFormat; // @synthesize audioPlusFormat=_audioPlusFormat;
@property(readonly, nonatomic) unsigned long long adsInAppBrowserIos; // @synthesize adsInAppBrowserIos=_adsInAppBrowserIos;
@property(readonly, nonatomic) _Bool comscoreEnabled; // @synthesize comscoreEnabled=_comscoreEnabled;
@property(readonly, nonatomic) _Bool audioAdsSwiftNpvEnabled; // @synthesize audioAdsSwiftNpvEnabled=_audioAdsSwiftNpvEnabled;
@property(readonly, nonatomic) _Bool creamBookmarkAudioAdsIos; // @synthesize creamBookmarkAudioAdsIos=_creamBookmarkAudioAdsIos;
- (unsigned long long)mapAudioPlusVersionToEnumValue:(id)arg1;
- (unsigned long long)mapAudioPlusFormatToEnumValue:(id)arg1;
- (unsigned long long)mapAdsInAppBrowserIosToEnumValue:(id)arg1;
- (id)propertyModels;
- (id)initWithPropertyValuesDictionary:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

