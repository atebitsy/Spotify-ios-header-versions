//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, SPTEditPlaylistTextInputStyle;

@interface SPTEditPlaylistHeaderViewStyle : NSObject <GLUEStyle>
{
    double _imageAlpha;
    double _imageTopMargin;
    double _imageWidth;
    SPTEditPlaylistTextInputStyle *_renameFieldStyle;
    SPTEditPlaylistTextInputStyle *_legacyRenameStyle;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) SPTEditPlaylistTextInputStyle *legacyRenameStyle; // @synthesize legacyRenameStyle=_legacyRenameStyle;
@property(copy, nonatomic) SPTEditPlaylistTextInputStyle *renameFieldStyle; // @synthesize renameFieldStyle=_renameFieldStyle;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) double imageWidth; // @synthesize imageWidth=_imageWidth;
@property(nonatomic) double imageTopMargin; // @synthesize imageTopMargin=_imageTopMargin;
@property(nonatomic) double imageAlpha; // @synthesize imageAlpha=_imageAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

