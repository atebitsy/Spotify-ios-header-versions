//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTYourLibraryMusicSectionViewModel-Protocol.h"

@class NSString;

@protocol SPTYourLibraryMusicAssistantSectionViewModel <SPTYourLibraryMusicSectionViewModel>
@property(readonly, nonatomic) CDUnknownBlockType closeAction;
@property(readonly, nonatomic) CDUnknownBlockType buttonAction;
@property(readonly, nonatomic) NSString *buttonText;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *headerText;
- (id)initWithHeaderText:(NSString *)arg1 title:(NSString *)arg2 subtitle:(NSString *)arg3 buttonText:(NSString *)arg4 closeAction:(void (^)(void))arg5;
@end

