//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBFavoriteGoodsFilter : TBJSONModel
{
    NSString *_categoryId;	// 8 = 0x8
    NSString *_categoryName;	// 16 = 0x10
    long long _totalCount;	// 24 = 0x18
    NSString *_source;	// 32 = 0x20
}

+ (id)jsonToModelKeyMapDictionary;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;

@end

