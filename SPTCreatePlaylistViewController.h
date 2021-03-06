//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPageController-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, NSURL, SPTCreatePlaylistGLUETheme, SPTCreatePlaylistInputView;
@protocol SPTCreatePlaylistViewModel, SPTFreeTierPresentationModalPresenter, SPTPageContainer;

@interface SPTCreatePlaylistViewController : UIViewController <UITextFieldDelegate, SPTPageController>
{
    id <SPTCreatePlaylistViewModel> _viewModel;
    SPTCreatePlaylistGLUETheme *_theme;
    id <SPTFreeTierPresentationModalPresenter> _modalPresenter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTFreeTierPresentationModalPresenter> modalPresenter; // @synthesize modalPresenter=_modalPresenter;
@property(retain, nonatomic) SPTCreatePlaylistGLUETheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTCreatePlaylistViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)dealloc;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)renameAction;
- (void)createAction;
- (void)cancelAction;
- (void)updatePrimaryButtonForTitle:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupViewForRenamePlaylist;
- (void)setupViewForCreatePlaylist;
- (void)viewDidLoad;
- (void)loadView;
@property(readonly, nonatomic) SPTCreatePlaylistInputView *inputView;
- (id)initWithViewModel:(id)arg1 theme:(id)arg2 modalPresenter:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

