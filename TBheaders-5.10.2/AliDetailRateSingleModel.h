//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSArray;
@protocol AliDetailRateListItem;

@interface AliDetailRateSingleModel : AliDetailComponentModel
{
    NSArray<AliDetailRateListItem> *_itemList;	// 8 = 0x8
}

+ (_Bool)childFilter:(id)arg1 layoutModel:(id)arg2;
@property(retain, nonatomic) NSArray<AliDetailRateListItem> *itemList; // @synthesize itemList=_itemList;
- (void).cxx_destruct;
- (void)getDetailRateSingeModel:(id)arg1;
- (void)parseDataFromDetailModel:(id)arg1;

@end

