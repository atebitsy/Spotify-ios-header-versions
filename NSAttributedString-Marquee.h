//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (Marquee)
+ (id)attributedStringForSPTIcon:(long long)arg1 fontSize:(double)arg2;
+ (id)attributedStringForSPTIcon:(long long)arg1 fontSize:(double)arg2 fontColor:(id)arg3;
+ (id)spt_attributedGeniusString:(id)arg1 font:(id)arg2 highlightColor:(id)arg3 defaultColor:(id)arg4 paragraphStyle:(id)arg5;
- (id)contextMenuHeaderString;
- (id)encore_scaledStringToFitSize:(struct CGSize)arg1 minScale:(double)arg2;
- (id)encore_scaledStringToFitSize:(struct CGSize)arg1 numberOfLines:(unsigned long long)arg2 minScale:(double)arg3 scaledStringFits:(_Bool *)arg4;
- (id)encore_scaledStringToFitWidth:(double)arg1 numberOfLines:(unsigned long long)arg2 minScale:(double)arg3;
- (id)spt_attributedStringByPrependingShuffleBadgeWithTextAlignment:(long long)arg1;
- (id)spt_attributedStringByPrependingShuffleBadgeForEntityRow;
- (id)spt_attributedStringByPrependingShuffleBadge;
- (id)attributedStringByPrependingShuffleBadge;
- (id)marqueeContextMenuHeaderString;
- (id)spt_collapsedAttributedStringWithStringEnding:(id)arg1 sizeConstraint:(struct CGSize)arg2 numberOfLines:(long long)arg3;
- (id)spt_timestampLinkAttributedStringWithContextURL:(id)arg1 maxTimeLimit:(long long)arg2 dotStyling:(_Bool)arg3;
- (id)spt_dottedTimestampLinkAttributedStringWithContextURL:(id)arg1 maxTimeLimit:(long long)arg2;
- (id)spt_timestampLinkAttributedStringWithContextURL:(id)arg1 maxTimeLimit:(long long)arg2;
- (id)spt_attributedStringWithLinkAttributes:(id)arg1;
- (id)spt_attributedStringWithLinkFont:(id)arg1;
- (id)spt_attributedStringWithUnderlinedLink;
- (id)spt_nullAttributeSanitizedString;
- (id)spt_podcastUnderlinedLinkAttributedString;
- (id)spt_podcastCollapsedAttributedStringWithStringEnding:(id)arg1 sizeConstraint:(struct CGSize)arg2 numberOfLines:(long long)arg3;
@end

