//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface ScratchInfo : NSObject
{
    int myScore[4];
    int myRank[4];
    int myIndex[4];
    _Bool bFullCombo[4];
    _Bool _bOpen;
    int _musicID;
    long long _packID;
    NSString *_musicName;
    NSString *_artistName;
    NSString *_imgURL;
    NSString *_itemURL;
    NSDate *_endDate;
}

@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSString *itemURL; // @synthesize itemURL=_itemURL;
@property(retain, nonatomic) NSString *imgURL; // @synthesize imgURL=_imgURL;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *musicName; // @synthesize musicName=_musicName;
@property(nonatomic) _Bool bOpen; // @synthesize bOpen=_bOpen;
@property(nonatomic) long long packID; // @synthesize packID=_packID;
@property(nonatomic) int musicID; // @synthesize musicID=_musicID;
- (void).cxx_destruct;
- (_Bool)getFullCombo:(int)arg1;
- (void)setMyRank:(int)arg1 rank:(int)arg2 index:(int)arg3;
- (int)getMyIndex:(int)arg1;
- (int)getMyRank:(int)arg1;
- (int)getMyScore:(int)arg1;
- (void)openUpdate:(id)arg1;
- (void)init:(id)arg1;

@end
