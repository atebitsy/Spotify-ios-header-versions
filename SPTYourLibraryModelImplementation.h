//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryModel-Protocol.h"
#import "SPTYourLibraryPageProviderRegistry-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, SPTObserverManager;

@interface SPTYourLibraryModelImplementation : NSObject <SPTYourLibraryModel, SPTYourLibraryPageProviderRegistry>
{
    _Bool _loaded;
    NSMutableArray *_pageProviders;
    NSMutableSet *_groupIdentifiers;
    SPTObserverManager *_observers;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSMutableSet *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(retain, nonatomic) NSMutableArray *pageProviders; // @synthesize pageProviders=_pageProviders;
- (id)groupData;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)notifyIfLoaded;
- (void)registerPageProvider:(id)arg1;
- (void)load;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

