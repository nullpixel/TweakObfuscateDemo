//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface RBUnlockData : NSObject
{
    NSString *_version;
    NSArray *_package;
    NSString *_versionColette;
    NSArray *_packageColette;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *packageColette; // @synthesize packageColette=_packageColette;
@property(copy, nonatomic) NSString *versionColette; // @synthesize versionColette=_versionColette;
@property(retain, nonatomic) NSArray *package; // @synthesize package=_package;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)setTutorialData;
- (id)getPackage;
- (void)parseDictionary:(id)arg1;
- (void)save;
- (id)description;

@end
