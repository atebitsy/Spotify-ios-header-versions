//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPTSharingSDKUTMTag : NSObject
{
    NSString *_source;
    NSString *_medium;
    NSString *_campaign;
    NSString *_term;
    NSString *_content;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *term; // @synthesize term=_term;
@property(readonly, copy, nonatomic) NSString *campaign; // @synthesize campaign=_campaign;
@property(readonly, copy, nonatomic) NSString *medium; // @synthesize medium=_medium;
@property(readonly, copy, nonatomic) NSString *source; // @synthesize source=_source;
- (id)initWithSource:(id)arg1 medium:(id)arg2 campaign:(id)arg3 term:(id)arg4 content:(id)arg5;

@end

