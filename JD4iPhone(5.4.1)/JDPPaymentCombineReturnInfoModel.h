//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBPaymentBaseReturnModel.h"

@class JDPPaymentCombineCellModel, NSArray, NSString;

@interface JDPPaymentCombineReturnInfoModel : CBPaymentBaseReturnModel
{
    NSString *_commendChannel;
    JDPPaymentCombineCellModel *_topChannel;
    NSArray *_combinList;
    NSString *_desc;
}

@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSArray *combinList; // @synthesize combinList=_combinList;
@property(retain, nonatomic) JDPPaymentCombineCellModel *topChannel; // @synthesize topChannel=_topChannel;
@property(copy, nonatomic) NSString *commendChannel; // @synthesize commendChannel=_commendChannel;
- (void).cxx_destruct;

@end

