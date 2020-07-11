//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEImageStyle, GLUELabelStyle, NSString;

@interface SPTYourLibraryMusicSongsEntitySectionHeaderViewStyle : NSObject <GLUEStyle>
{
    double _estimatedHeight;
    double _topMargin;
    double _leadingMargin;
    double _trailingMargin;
    double _bottomMargin;
    GLUELabelStyle *_titleLabelStyle;
    GLUEImageStyle *_imageStyle;
    double _titleLeadingMargin;
}

@property(nonatomic) double titleLeadingMargin; // @synthesize titleLeadingMargin=_titleLeadingMargin;
@property(copy, nonatomic) GLUEImageStyle *imageStyle; // @synthesize imageStyle=_imageStyle;
@property(copy, nonatomic) GLUELabelStyle *titleLabelStyle; // @synthesize titleLabelStyle=_titleLabelStyle;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double trailingMargin; // @synthesize trailingMargin=_trailingMargin;
@property(nonatomic) double leadingMargin; // @synthesize leadingMargin=_leadingMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double estimatedHeight; // @synthesize estimatedHeight=_estimatedHeight;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
