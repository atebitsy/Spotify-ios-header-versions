//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HUBViewContentOffsetObserver-Protocol.h"
#import "SPContentInsetViewController-Protocol.h"
#import "SPTHubPlayTrackListCommandHandlerDelegate-Protocol.h"
#import "SPTImageLoaderDelegate-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTSearch2ViewControllerProtocol-Protocol.h"
#import "SPTSearch2ViewModelProviderDelegate-Protocol.h"
#import "SPTSearchPlatformColorInterpolatorDelegate-Protocol.h"

@class GLUEGradientView, NSMutableDictionary, NSString, NSURL, SPTProgressView, SPTSearch2Configuration, SPTSearchHubViewController, SPTSearchPlatformColorInterpolator;
@protocol GLUETheme, SPTExplicitContentAccessManager, SPTImageLoader, SPTPageContainer, SPTSearch2ViewModelProvider, SPTSearchLoadingLogger, SPTShareDragDelegateFactory;

@interface SPTSearch2ViewController : UIViewController <SPContentInsetViewController, SPTSearch2ViewModelProviderDelegate, HUBViewContentOffsetObserver, SPTImageLoaderDelegate, SPTHubPlayTrackListCommandHandlerDelegate, SPTSearchPlatformColorInterpolatorDelegate, SPTPageController, SPTSearch2ViewControllerProtocol>
{
    _Bool _automaticallyAdjustsInsets;
    NSString *_query;
    SPTSearchHubViewController *_hubViewController;
    SPTProgressView *_progressView;
    GLUEGradientView *_gradientView;
    id <SPTSearch2ViewModelProvider> _viewModelProvider;
    id <SPTImageLoader> _imageLoader;
    id <GLUETheme> _theme;
    SPTSearch2Configuration *_configuration;
    SPTSearchPlatformColorInterpolator *_colorInterpolator;
    id <SPTSearchLoadingLogger> _loadingLogger;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    NSMutableDictionary *_dragDelegateHolders;
    id <SPTShareDragDelegateFactory> _shareDragDelegateFactory;
    struct UIEdgeInsets _insets;
}

@property(readonly, nonatomic) id <SPTShareDragDelegateFactory> shareDragDelegateFactory; // @synthesize shareDragDelegateFactory=_shareDragDelegateFactory;
@property(readonly, nonatomic) NSMutableDictionary *dragDelegateHolders; // @synthesize dragDelegateHolders=_dragDelegateHolders;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTSearchLoadingLogger> loadingLogger; // @synthesize loadingLogger=_loadingLogger;
@property(readonly, nonatomic) SPTSearchPlatformColorInterpolator *colorInterpolator; // @synthesize colorInterpolator=_colorInterpolator;
@property(readonly, copy, nonatomic) SPTSearch2Configuration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) id <SPTImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(readonly, nonatomic) id <SPTSearch2ViewModelProvider> viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
@property(readonly, nonatomic) SPTSearchHubViewController *hubViewController; // @synthesize hubViewController=_hubViewController;
@property(nonatomic) _Bool automaticallyAdjustsInsets; // @synthesize automaticallyAdjustsInsets=_automaticallyAdjustsInsets;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)configureDragDelegateWithViewModel:(id)arg1;
- (id)makeClearRecentsCommandHandlerWithDataSource:(id)arg1 searchLogger:(id)arg2 ubiHubs:(id)arg3;
- (id)makeRemoveRecentCommandHandlerWithDataSource:(id)arg1 searchLogger:(id)arg2 ubiHubs:(id)arg3;
- (id)makeReloadCommandHandlerWithLogger:(id)arg1 ubiHubs:(id)arg2;
- (id)makeKeyboardDismissCommandHandler;
- (id)makeSaveToRecentsHandlerWithDataSource:(id)arg1;
- (id)makePlayTrackHandlerWithPlayerFeature:(id)arg1 searchLogger:(id)arg2 ubiLogger:(id)arg3 ubiHubs:(id)arg4;
- (id)makePlayerProviderWithPlayerFeature:(id)arg1;
- (id)makeHUBViewControllerWithDependencies:(id)arg1 configuration:(id)arg2;
- (void)dismissKeyboard;
- (void)setGradientColor:(id)arg1 animated:(_Bool)arg2;
- (void)updateGradientForViewModel:(id)arg1;
- (void)logLoadingCompletedWithModel:(id)arg1;
- (void)handleLoadingLoggingForQuery:(id)arg1 previousQuery:(id)arg2;
- (void)updateGradientStyle;
- (void)adjustInsetsIfNeeded;
- (void)layoutGradientView;
- (void)layoutSubviews;
- (void)colorInterpolatorDidChangeColor:(id)arg1;
- (id)playTrackListHandler:(id)arg1 providePlayerContextForCommand:(id)arg2 event:(id)arg3;
- (void)imageLoader:(id)arg1 didLoadImage:(id)arg2 forURL:(id)arg3 loadTime:(double)arg4 context:(id)arg5;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (void)viewModelProvider:(id)arg1 didUpdateStateFrom:(unsigned long long)arg2;
- (void)viewModelProvider:(id)arg1 didUpdateViewModelFrom:(id)arg2;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)sp_updateContentInsets;
- (void)scrollToTop;
@property(readonly, copy, nonatomic) NSString *requestID;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)backgroundColor;
@property(readonly, nonatomic) GLUEGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(readonly, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
- (id)initWithViewModelProvider:(id)arg1 dependencies:(id)arg2 configuration:(id)arg3 loadingLogger:(id)arg4;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end
