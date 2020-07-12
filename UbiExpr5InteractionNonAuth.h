//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface UbiExpr5InteractionNonAuth : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *actionName; // @dynamic actionName;
@property(retain, nonatomic) NSMutableArray *actionParameterNamesArray; // @dynamic actionParameterNamesArray;
@property(readonly, nonatomic) unsigned long long actionParameterNamesArray_Count; // @dynamic actionParameterNamesArray_Count;
@property(retain, nonatomic) NSMutableArray *actionParameterValuesArray; // @dynamic actionParameterValuesArray;
@property(readonly, nonatomic) unsigned long long actionParameterValuesArray_Count; // @dynamic actionParameterValuesArray_Count;
@property(nonatomic) int actionVersion; // @dynamic actionVersion;
@property(copy, nonatomic) NSString *app; // @dynamic app;
@property(retain, nonatomic) NSMutableArray *elementPathIdsArray; // @dynamic elementPathIdsArray;
@property(readonly, nonatomic) unsigned long long elementPathIdsArray_Count; // @dynamic elementPathIdsArray_Count;
@property(retain, nonatomic) NSMutableArray *elementPathNamesArray; // @dynamic elementPathNamesArray;
@property(readonly, nonatomic) unsigned long long elementPathNamesArray_Count; // @dynamic elementPathNamesArray_Count;
@property(retain, nonatomic) NSMutableArray *elementPathPosArray; // @dynamic elementPathPosArray;
@property(readonly, nonatomic) unsigned long long elementPathPosArray_Count; // @dynamic elementPathPosArray_Count;
@property(retain, nonatomic) NSMutableArray *elementPathReasonsArray; // @dynamic elementPathReasonsArray;
@property(readonly, nonatomic) unsigned long long elementPathReasonsArray_Count; // @dynamic elementPathReasonsArray_Count;
@property(retain, nonatomic) NSMutableArray *elementPathUrisArray; // @dynamic elementPathUrisArray;
@property(readonly, nonatomic) unsigned long long elementPathUrisArray_Count; // @dynamic elementPathUrisArray_Count;
@property(retain, nonatomic) NSMutableArray *errorsArray; // @dynamic errorsArray;
@property(readonly, nonatomic) unsigned long long errorsArray_Count; // @dynamic errorsArray_Count;
@property(copy, nonatomic) NSString *generatorCommitHash; // @dynamic generatorCommitHash;
@property(nonatomic) _Bool hasActionName; // @dynamic hasActionName;
@property(nonatomic) _Bool hasActionVersion; // @dynamic hasActionVersion;
@property(nonatomic) _Bool hasApp; // @dynamic hasApp;
@property(nonatomic) _Bool hasGeneratorCommitHash; // @dynamic hasGeneratorCommitHash;
@property(nonatomic) _Bool hasInteractionId; // @dynamic hasInteractionId;
@property(nonatomic) _Bool hasInteractionType; // @dynamic hasInteractionType;
@property(nonatomic) _Bool hasPageInstanceId; // @dynamic hasPageInstanceId;
@property(nonatomic) _Bool hasPlaybackId; // @dynamic hasPlaybackId;
@property(nonatomic) _Bool hasSpecificationCommitHash; // @dynamic hasSpecificationCommitHash;
@property(nonatomic) _Bool hasSpecificationVersion; // @dynamic hasSpecificationVersion;
@property(copy, nonatomic) NSString *interactionId; // @dynamic interactionId;
@property(copy, nonatomic) NSString *interactionType; // @dynamic interactionType;
@property(copy, nonatomic) NSString *pageInstanceId; // @dynamic pageInstanceId;
@property(copy, nonatomic) NSString *playbackId; // @dynamic playbackId;
@property(copy, nonatomic) NSString *specificationCommitHash; // @dynamic specificationCommitHash;
@property(copy, nonatomic) NSString *specificationVersion; // @dynamic specificationVersion;

@end

