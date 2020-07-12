//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTHubViewController.h"

#import "HUBViewContentOffsetObserver-Protocol.h"

@class NSTimer, SPTActivityIndicatorView, SPTPremiumDestinationGLUETheme, SPTPremiumDestinationLogger, SPTPremiumDestinationNavigationItemDecorator, SPTPremiumDestinationTabBarBadgeLastSeenDateUpdater;

@interface SPTPremiumDestinationHubViewController : SPTHubViewController <HUBViewContentOffsetObserver>
{
    _Bool _isRootViewController;
    _Bool _shouldShowNavigationBar;
    _Bool _shouldShowLoadingIndicator;
    SPTPremiumDestinationNavigationItemDecorator *_navigationItemDecorator;
    SPTPremiumDestinationTabBarBadgeLastSeenDateUpdater *_tabBarBadgeLastSeenDateUpdater;
    SPTPremiumDestinationGLUETheme *_premiumDestinationTheme;
    SPTPremiumDestinationLogger *_logger;
    NSTimer *_timer;
    SPTActivityIndicatorView *_loadingIndicatorView;
}

@property(retain, nonatomic) SPTActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) SPTPremiumDestinationLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) _Bool shouldShowLoadingIndicator; // @synthesize shouldShowLoadingIndicator=_shouldShowLoadingIndicator;
@property(nonatomic) _Bool shouldShowNavigationBar; // @synthesize shouldShowNavigationBar=_shouldShowNavigationBar;
@property(nonatomic) _Bool isRootViewController; // @synthesize isRootViewController=_isRootViewController;
@property(retain, nonatomic) SPTPremiumDestinationGLUETheme *premiumDestinationTheme; // @synthesize premiumDestinationTheme=_premiumDestinationTheme;
@property(retain, nonatomic) SPTPremiumDestinationTabBarBadgeLastSeenDateUpdater *tabBarBadgeLastSeenDateUpdater; // @synthesize tabBarBadgeLastSeenDateUpdater=_tabBarBadgeLastSeenDateUpdater;
@property(retain, nonatomic) SPTPremiumDestinationNavigationItemDecorator *navigationItemDecorator; // @synthesize navigationItemDecorator=_navigationItemDecorator;
- (void).cxx_destruct;
- (id)getScrollPercentage;
- (void)timeFireStopScroll:(id)arg1;
- (void)displayLoadingIndicatorIfRequiredWithDelay:(unsigned long long)arg1;
- (void)setupLoadingIndicatorView;
- (id)provideStatusBarBackgroundColorForScrollProgress:(double)arg1;
- (void)setupHubsCollectionView;
- (void)viewModelDidLoad:(id)arg1 dataSource:(unsigned long long)arg2;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (unsigned long long)preferredNavigationBarState;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPremiumDestinationTheme:(id)arg1 pageIdentifier:(id)arg2 pageURI:(id)arg3 componentRegistry:(id)arg4 componentLayoutManager:(id)arg5 imageLoaderFactory:(id)arg6 commandHandler:(id)arg7 viewModelProvider:(id)arg8 impressionLogger:(id)arg9 loadingLogger:(id)arg10 shareDragDelegateFactory:(id)arg11 premiumDestinationLogger:(id)arg12;

@end

