//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDKSwizzle;

@interface FBSDKSwizzlingOnClass : NSObject
{
    FBSDKSwizzle *_bindingSwizzle;
    Class _bindingClass;
}

- (void).cxx_destruct;
@property(retain) Class bindingClass; // @synthesize bindingClass=_bindingClass;
@property(retain) FBSDKSwizzle *bindingSwizzle; // @synthesize bindingSwizzle=_bindingSwizzle;
- (id)initWithSwizzle:(id)arg1 class:(Class)arg2;

@end

