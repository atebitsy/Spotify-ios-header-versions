//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTUBIMobileIosLockScreen_MainControls_SeekBackwardButtonEventFactory-Protocol.h"

@class NSArray, NSString;

@interface SPTUBIMobileIosLockScreen_MainControls_SeekBackwardButtonEventFactoryImplementation : NSObject <SPTUBIMobileIosLockScreen_MainControls_SeekBackwardButtonEventFactory>
{
    NSArray *_components;
}

+ (id)factoryWithComponents:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
- (id)hitSeekByTimeWithMsSeekedOffset:(long long)arg1;
- (id)_location;
- (id)initWithComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

