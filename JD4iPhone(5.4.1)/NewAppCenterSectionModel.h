//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface NewAppCenterSectionModel : NSObject
{
    NSArray *_unitsArray;
    long long _ID;
    NSString *_name;
    NSString *_titleColor;
    long long _cellHight;
    NSString *_cellIdendifer;
    NSMutableArray *_appRowsArray;
    NSString *_titleImg;
}

+ (id)objectClassInArray;
+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *titleImg; // @synthesize titleImg=_titleImg;
@property(retain, nonatomic) NSMutableArray *appRowsArray; // @synthesize appRowsArray=_appRowsArray;
@property(retain, nonatomic) NSString *cellIdendifer; // @synthesize cellIdendifer=_cellIdendifer;
@property(nonatomic) long long cellHight; // @synthesize cellHight=_cellHight;
@property(retain, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long ID; // @synthesize ID=_ID;
@property(retain, nonatomic) NSArray *unitsArray; // @synthesize unitsArray=_unitsArray;
- (void).cxx_destruct;

@end

