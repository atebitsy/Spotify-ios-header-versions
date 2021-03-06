//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GLUEAccessoryIconButton, GLUEButton, UIStackView, UIView;
@protocol SPTPodcastUIDownloadButton;

@interface SPTPodcastEpisodeActionsTableViewCell : UITableViewCell
{
    GLUEButton *_mainActionButton;
    GLUEAccessoryIconButton *_shareButton;
    GLUEAccessoryIconButton<SPTPodcastUIDownloadButton> *_downloadButton;
    UIView *_mainActionContainer;
    UIStackView *_secondaryActionsStackView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIStackView *secondaryActionsStackView; // @synthesize secondaryActionsStackView=_secondaryActionsStackView;
@property(retain, nonatomic) UIView *mainActionContainer; // @synthesize mainActionContainer=_mainActionContainer;
@property(retain, nonatomic) GLUEAccessoryIconButton<SPTPodcastUIDownloadButton> *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) GLUEAccessoryIconButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) GLUEButton *mainActionButton; // @synthesize mainActionButton=_mainActionButton;
- (id)initWithGlueTheme:(id)arg1 buttonsFactory:(id)arg2 allowEpisodeDownload:(_Bool)arg3;

@end

