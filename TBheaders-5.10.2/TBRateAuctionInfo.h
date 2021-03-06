//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRateJSONModel.h"

@class NSString;

@interface TBRateAuctionInfo : TBRateJSONModel
{
    NSString *_auctionId;	// 8 = 0x8
    NSString *_catId;	// 16 = 0x10
    NSString *_tradeId;	// 24 = 0x18
    NSString *_pic;	// 32 = 0x20
    NSString *_sku;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSString *_price;	// 56 = 0x38
}

+ (id)modelKeyMapper;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *tradeId; // @synthesize tradeId=_tradeId;
@property(retain, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property(retain, nonatomic) NSString *auctionId; // @synthesize auctionId=_auctionId;
- (void).cxx_destruct;

@end

