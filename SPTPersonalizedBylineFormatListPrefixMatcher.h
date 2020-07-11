//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTPersonalizedBylineFormatListPrefixMatcher : NSObject
{
    NSURL *_playlistURI;
    NSString *_decodedHex;
}

@property(readonly, copy, nonatomic) NSString *decodedHex; // @synthesize decodedHex=_decodedHex;
@property(readonly, nonatomic) NSURL *playlistURI; // @synthesize playlistURI=_playlistURI;
- (void).cxx_destruct;
- (id)decodeHex;
- (_Bool)matchesFormatListPrefix:(id)arg1;
- (id)initWithPlaylistURI:(id)arg1;

@end
