//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileArtistPage_TopTracks_TrackRowEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileArtistPage_TopTracks_TrackRowEventFactoryImplementation : NSObject <SPTUBIMobileArtistPage_TopTracks_TrackRowEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithPosition:(long long)arg1 uri:(id)arg2 components:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)swipeAddItemToQueueWithItemToAddToQueue:(id)arg1;
- (id)swipeRemoveLikeWithItemNoLongerLiked:(id)arg1;
- (id)swipeLikeWithItemToBeLiked:(id)arg1;
- (id)hitUiReveal;
- (id)hitPlayWithItemToBePlayed:(id)arg1;
- (id)impression;
- (id)_location;
- (id)initWithPosition:(long long)arg1 uri:(id)arg2 components:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

