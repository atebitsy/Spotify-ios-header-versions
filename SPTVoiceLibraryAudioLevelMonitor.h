//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTVoiceLibraryAudioLevelMonitor : NSObject
{
    CDStruct_edb3adff _levelMonitorData;
}

@property(nonatomic) CDStruct_edb3adff levelMonitorData; // @synthesize levelMonitorData=_levelMonitorData;
- (void)reset;
- (CDStruct_edb3adff)performLevelMonitoringForAudioBuffer:(const struct AudioBufferList *)arg1 frameCount:(unsigned int)arg2;

@end

