//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

@interface SPTHomeMixWelcomeCardModel : NSObject
{
    NSString *_name;
    UIColor *_backgroundColor;
    NSArray *_facePiles;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *facePiles; // @synthesize facePiles=_facePiles;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 backgroundColor:(id)arg2 facePiles:(id)arg3;

@end

