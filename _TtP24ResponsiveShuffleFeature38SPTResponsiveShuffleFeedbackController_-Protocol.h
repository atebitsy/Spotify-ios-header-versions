//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSURL;
@protocol _TtP24ResponsiveShuffleFeature36SPTResponsiveShuffleFeedbackObserver_;

@protocol _TtP24ResponsiveShuffleFeature38SPTResponsiveShuffleFeedbackController_
- (void)unthumbDownTappedWithTrackURI:(NSURL *)arg1;
- (void)thumbDownTappedWithTrackURI:(NSURL *)arg1;
- (void)unthumbUpTappedWithTrackURI:(NSURL *)arg1;
- (void)thumbUpTappedWithTrackURI:(NSURL *)arg1;
- (void)registerObserver:(id <_TtP24ResponsiveShuffleFeature36SPTResponsiveShuffleFeedbackObserver_>)arg1;
- (void)banTappedWithTrackURI:(NSURL *)arg1;
- (void)unheartTappedWithTrackURI:(NSURL *)arg1;
- (void)heartTappedWithTrackURI:(NSURL *)arg1;
@property(nonatomic, readonly) _Bool shouldShowDefaultConfirmation;
@end

