//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSString;

@interface OrderInfoStatusModel : JDModel
{
    _Bool _isLimitBuyVender;
    _Bool _isNewUserForNewAddress;
    _Bool _ignoreSKUPriceIncrease;
    _Bool _agreePayBookMoney;
    NSString *_distributeType;
    NSString *_remark;
    NSString *_preSaleMobile;
    NSArray *_addressArray;
}

@property(retain, nonatomic) NSArray *addressArray; // @synthesize addressArray=_addressArray;
@property(copy, nonatomic) NSString *preSaleMobile; // @synthesize preSaleMobile=_preSaleMobile;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) _Bool agreePayBookMoney; // @synthesize agreePayBookMoney=_agreePayBookMoney;
@property(nonatomic) _Bool ignoreSKUPriceIncrease; // @synthesize ignoreSKUPriceIncrease=_ignoreSKUPriceIncrease;
@property(nonatomic) _Bool isNewUserForNewAddress; // @synthesize isNewUserForNewAddress=_isNewUserForNewAddress;
@property(nonatomic) _Bool isLimitBuyVender; // @synthesize isLimitBuyVender=_isLimitBuyVender;
@property(retain, nonatomic) NSString *distributeType; // @synthesize distributeType=_distributeType;
- (id)init;

@end

