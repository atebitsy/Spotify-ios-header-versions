//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicSongsHeaderViewModel-Protocol.h"

@class NSString;
@protocol SPTCollectionPlatformConfiguration, SPTYourLibraryMusicSongsHeaderViewModelActionDelegate, SPTYourLibraryMusicSongsHeaderViewModelDelegate, SPTYourLibraryMusicTestManager;

@interface SPTYourLibraryMusicSongsHeaderViewModelImplementation : NSObject <SPTYourLibraryMusicSongsHeaderViewModel>
{
    _Bool _playButtonHiddenWhenFiltering;
    _Bool _playButtonHidden;
    _Bool _filterAndSortingHidden;
    id <SPTYourLibraryMusicSongsHeaderViewModelDelegate> delegate;
    id <SPTYourLibraryMusicSongsHeaderViewModelActionDelegate> actionDelegate;
    NSString *_textFilter;
    id <SPTYourLibraryMusicTestManager> _testManager;
    id <SPTCollectionPlatformConfiguration> _collectionPlatformConfigurator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionPlatformConfigurator; // @synthesize collectionPlatformConfigurator=_collectionPlatformConfigurator;
@property(readonly, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic, getter=isFilterAndSortingHidden) _Bool filterAndSortingHidden; // @synthesize filterAndSortingHidden=_filterAndSortingHidden;
@property(nonatomic, getter=isPlayButtonHidden) _Bool playButtonHidden; // @synthesize playButtonHidden=_playButtonHidden;
@property(readonly, nonatomic, getter=isPlayButtonHiddenWhenFiltering) _Bool playButtonHiddenWhenFiltering; // @synthesize playButtonHiddenWhenFiltering=_playButtonHiddenWhenFiltering;
@property(copy, nonatomic) NSString *textFilter; // @synthesize textFilter=_textFilter;
@property(nonatomic) __weak id <SPTYourLibraryMusicSongsHeaderViewModelActionDelegate> actionDelegate; // @synthesize actionDelegate;
@property(nonatomic) __weak id <SPTYourLibraryMusicSongsHeaderViewModelDelegate> delegate; // @synthesize delegate;
- (void)willEndFiltering;
- (void)willStartFiltering;
- (void)presentSortingFilterPickerInTargetViewController:(id)arg1;
- (void)logFilterSortInteractionType:(unsigned long long)arg1;
- (void)play;
@property(readonly, nonatomic) unsigned long long filterBarButtonType;
@property(readonly, copy, nonatomic) NSString *searchPlaceholder;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *playButtonTitle;
- (id)initWithTestManager:(id)arg1 hidePlayButtonWhenFiltering:(_Bool)arg2 collectionPlatformConfigurator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

