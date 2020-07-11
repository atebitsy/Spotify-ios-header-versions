//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

@class SPTSettingsTableViewCell;
@protocol SPTGaiaSettingsProvider, SPTLogCenter;

@interface SPTGaiaLocalDevicesSettingsSection : SettingsSection
{
    SPTSettingsTableViewCell *_switchCell;
    id <SPTLogCenter> _logCenter;
    id <SPTGaiaSettingsProvider> _settingsProvider;
}

@property(readonly, nonatomic) id <SPTGaiaSettingsProvider> settingsProvider; // @synthesize settingsProvider=_settingsProvider;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(readonly, nonatomic) SPTSettingsTableViewCell *switchCell; // @synthesize switchCell=_switchCell;
- (void).cxx_destruct;
- (id)footerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (void)didToggleLocalDevicesOnly:(id)arg1;
- (id)initWithSettingsViewController:(id)arg1 logCenter:(id)arg2 settingsProvider:(id)arg3;

@end
