//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AnalysisNetworkCore : NSObject
{
}

+ (void)clearDAU;
+ (void)clearInitalize;
+ (void)postAnalysisDataWithCallback:(CDUnknownBlockType)arg1;
+ (_Bool)getSendDauFlg;
+ (_Bool)getInitalizeFlg;
+ (void)postAnalysisClickRegistWithAdType:(id)arg1 adModel:(id)arg2 adLocation:(id)arg3 impressionId:(id)arg4 appliIdTo:(id)arg5 creativeId:(id)arg6 displayNumber:(id)arg7 incentiveType:(id)arg8 installFlg:(id)arg9 callback:(CDUnknownBlockType)arg10;
+ (void)postAnalysisListRegistWithAdType:(id)arg1 adModel:(id)arg2 adLocation:(id)arg3 impressionId:(id)arg4 appliIdList:(id)arg5 creativeIdList:(id)arg6 incentiveTypeList:(id)arg7 installFlgList:(id)arg8 callback:(CDUnknownBlockType)arg9;
+ (void)postAnalysisDataWithActionType:(int)arg1 resultId:(id)arg2 uesrId:(id)arg3 finishedBlock:(CDUnknownBlockType)arg4 failedBlock:(CDUnknownBlockType)arg5 callback:(CDUnknownBlockType)arg6;
+ (void)postSetUserIDWithCallback:(CDUnknownBlockType)arg1;
+ (void)postAnalysisDataWithResultId:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)postDAUWithCallback:(CDUnknownBlockType)arg1;
+ (void)postInitalizeWithCallback:(CDUnknownBlockType)arg1;

@end
