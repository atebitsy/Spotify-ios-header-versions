//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileCollectionArtist_ItemList_DownloadToggleEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileCollectionArtist_ItemList_DownloadToggleEventFactoryImplementation : NSObject <SPTUBIMobileCollectionArtist_ItemList_DownloadToggleEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithUri:(id)arg1 components:(id)arg2;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (void).cxx_destruct;
- (id)hitNoAction;
- (id)hitUiReveal;
- (id)hitRemoveDownloadWithItemToRemoveFromDownloads:(id)arg1;
- (id)hitDownloadWithItemToDownload:(id)arg1;
- (id)cancelFactoryWithUri:(id)arg1;
- (id)confirmRemoveDownloadsFactoryWithUri:(id)arg1;
- (id)_location;
- (id)initWithUri:(id)arg1 components:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

