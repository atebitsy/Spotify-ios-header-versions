//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface FBSDKIcon : NSObject
{
    UIColor *_color;
}

@property(readonly, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (struct CGPath *)pathWithSize:(struct CGSize)arg1;
- (id)imageWithSize:(struct CGSize)arg1;
- (id)init;
- (id)initWithColor:(id)arg1;

@end

