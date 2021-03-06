//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;

@interface SPTGaiaEducationDetailModel : NSObject
{
    NSString *_title;
    NSString *_detailedTitle;
    UIImage *_image;
    NSString *_pageURI;
    NSString *_pageIdentifier;
    NSArray *_steps;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(readonly, copy, nonatomic) NSString *pageURI; // @synthesize pageURI=_pageURI;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *detailedTitle; // @synthesize detailedTitle=_detailedTitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 detailedTitle:(id)arg2 image:(id)arg3 pageURI:(id)arg4 pageIdentifier:(id)arg5 steps:(id)arg6;

@end

