//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SPTNowPlayingScrollConfiguration : NSObject
{
    long long _identifier;
    NSArray *_cardsIdentifiers;
}

+ (id)concertCardsConfiguration;
+ (id)samplesCardConfiguration;
+ (id)podcastInspectorConfiguration;
+ (id)feedbackCardsConfiguration;
+ (id)pivotsConfiguration;
+ (id)defaultConfiguration;
@property(copy, nonatomic) NSArray *cardsIdentifiers; // @synthesize cardsIdentifiers=_cardsIdentifiers;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(long long)arg1 cardsIdentifiers:(id)arg2;

@end

