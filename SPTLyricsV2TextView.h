//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSMutableDictionary, NSValue, SPTLyricsV2TextViewStyle;

@interface SPTLyricsV2TextView : UITextView
{
    unsigned long long _activeFrom;
    unsigned long long _activeLength;
    unsigned long long _textLength;
    SPTLyricsV2TextViewStyle *_glueStyle;
    NSMutableDictionary *_links;
    NSValue *_currentLinkRangeValue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSValue *currentLinkRangeValue; // @synthesize currentLinkRangeValue=_currentLinkRangeValue;
@property(retain, nonatomic) NSMutableDictionary *links; // @synthesize links=_links;
@property(copy, nonatomic) SPTLyricsV2TextViewStyle *glueStyle; // @synthesize glueStyle=_glueStyle;
@property(nonatomic) unsigned long long textLength; // @synthesize textLength=_textLength;
@property(nonatomic) unsigned long long activeLength; // @synthesize activeLength=_activeLength;
@property(nonatomic) unsigned long long activeFrom; // @synthesize activeFrom=_activeFrom;
- (void)updateActiveText:(unsigned long long)arg1;
- (void)updateActiveText;
- (struct _NSRange)verticalRangeOfSubstringWithRange:(struct _NSRange)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)removeAllLinks;
- (void)addLinkWithRange:(struct _NSRange)arg1 callback:(CDUnknownBlockType)arg2;
- (double)heightForOffset:(unsigned long long)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

