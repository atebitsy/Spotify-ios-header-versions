//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTNowPlayingButton.h"

#import "SPTNowPlayingCollectionButton-Protocol.h"

@class NSString, UIColor;
@protocol SPTCollectionPlatformTestManager;

@interface SPTNowPlayingCollectionButton : SPTNowPlayingButton <SPTNowPlayingCollectionButton>
{
    UIColor *_iconColor;
    UIColor *_addedIconColor;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    struct CGSize _iconSize;
}

+ (id)collectionButtonWithTestManager:(id)arg1;
@property(readonly, nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(retain, nonatomic) UIColor *addedIconColor; // @synthesize addedIconColor=_addedIconColor;
- (void)setIconColor:(id)arg1;
- (id)iconColor;
- (void)setIconSize:(struct CGSize)arg1;
- (struct CGSize)iconSize;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)applyNPVTheme;
- (id)initWithFrame:(struct CGRect)arg1 collectionTestManager:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)applyIcon;
@property(nonatomic, getter=isInCollection) _Bool inCollection;

// Remaining properties
@property(nonatomic) unsigned long long buttonState; // @dynamic buttonState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
