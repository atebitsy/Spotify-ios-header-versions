//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTSearchEntityCardBuilder : NSObject
{
}

+ (id)navigateCommandForEntity:(id)arg1;
+ (id)saveToHistoryCommandForEntity:(id)arg1 newPodcastRowsEnabled:(_Bool)arg2;
+ (id)sequentialCommandWithCommands:(id)arg1;
+ (id)loggingDataForEntity:(id)arg1 drilldown:(_Bool)arg2 position:(unsigned long long)arg3 ubiLocationSerializer:(id)arg4;
+ (id)metadataForEntity:(id)arg1;
+ (id)customDataForEntity:(id)arg1 newPodcastRowsEnabled:(_Bool)arg2;
+ (id)cardForEntity:(id)arg1 componentIdentifier:(id)arg2 componentModelIdentifier:(id)arg3 drilldown:(_Bool)arg4 newPodcastRowsEnabled:(_Bool)arg5 sectionID:(id)arg6 requestID:(id)arg7 pageURI:(id)arg8 position:(long long)arg9 ubiLocationSerializer:(id)arg10;

@end

