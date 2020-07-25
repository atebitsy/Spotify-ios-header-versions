//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicSectionViewModel-Protocol.h"

@class NSString;

@interface SPTYourLibraryMusicSectionViewModelImplementation : NSObject <SPTYourLibraryMusicSectionViewModel>
{
    _Bool _sectionHeaderShowing;
    NSString *_title;
    long long _type;
}

+ (id)sectionWithTitle:(id)arg1;
+ (id)hiddenSection;
- (void).cxx_destruct;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic, getter=isSectionHeaderShowing) _Bool sectionHeaderShowing; // @synthesize sectionHeaderShowing=_sectionHeaderShowing;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)performAction;
- (id)initWithTitle:(id)arg1 headerShowing:(_Bool)arg2;
- (id)initWithTitle:(id)arg1 headerShowing:(_Bool)arg2 type:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

