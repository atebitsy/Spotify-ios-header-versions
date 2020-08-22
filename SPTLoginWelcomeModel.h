//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;
@protocol SPTLoginWelcomeViewHeader;

@interface SPTLoginWelcomeModel : NSObject
{
    NSString *_buttonHeading;
    NSArray *_actionButtons;
    NSString *_layoutName;
    id <SPTLoginWelcomeViewHeader> _header;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTLoginWelcomeViewHeader> header; // @synthesize header=_header;
@property(readonly, nonatomic) NSString *layoutName; // @synthesize layoutName=_layoutName;
@property(readonly, nonatomic) NSArray *actionButtons; // @synthesize actionButtons=_actionButtons;
@property(readonly, nonatomic) NSString *buttonHeading; // @synthesize buttonHeading=_buttonHeading;
@property(readonly, nonatomic) NSString *headerName;
@property(readonly, nonatomic) NSURL *imageURL;
- (id)initWithButtonHeading:(id)arg1 actionButtons:(id)arg2 header:(id)arg3 layoutName:(id)arg4;

@end

