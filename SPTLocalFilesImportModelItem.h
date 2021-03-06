//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLocalFilesImportModelItem-Protocol.h"

@class NSArray, NSString, NSURL;

@interface SPTLocalFilesImportModelItem : NSObject <SPTLocalFilesImportModelItem>
{
    _Bool _isSelected;
    _Bool _isPartiallySelected;
    NSString *_title;
    NSURL *_imageURL;
    NSArray *_children;
    SPTLocalFilesImportModelItem *_parent;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isPartiallySelected; // @synthesize isPartiallySelected=_isPartiallySelected;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) SPTLocalFilesImportModelItem *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSArray *children; // @synthesize children=_children;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long numberOfTracks;
- (void)updateSelectionStatus;
- (void)recursivelySelectChildren;
- (void)toggleSelection;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

