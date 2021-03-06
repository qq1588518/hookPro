//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MDLBARechargeHandler : NSObject
{
    CDUnknownBlockType _balanceCallbackBlock;
    id <MDLBARechargeHandlerDelegate> _delegate;
    CDUnknownBlockType _willStart;
    CDUnknownBlockType _tradePayCallback;
}

@property(copy, nonatomic) CDUnknownBlockType tradePayCallback; // @synthesize tradePayCallback=_tradePayCallback;
@property(copy, nonatomic) CDUnknownBlockType willStart; // @synthesize willStart=_willStart;
@property(nonatomic) __weak id <MDLBARechargeHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType balanceCallbackBlock; // @synthesize balanceCallbackBlock=_balanceCallbackBlock;
- (void).cxx_destruct;
- (id)stringTrimZero:(id)arg1;
- (_Bool)checkIsNumber:(id)arg1;
- (id)textAttributedString:(id)arg1;
- (void)chargeCheckWithTradeNo:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5 willStartSelector:(SEL)arg6;
- (void)processPayOrderNotification:(id)arg1;
- (void)processPayOrderResult:(id)arg1;
- (void)tradepayWithSign:(id)arg1;
- (void)chargeSignWithFee:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5 willStartSelector:(SEL)arg6;
- (void)willSignWithFee;
- (void)signWithFeeFail:(id)arg1;
- (void)signWithFeeError:(id)arg1;
- (void)signWithFeeOK:(id)arg1;
- (void)tradepayWithFee:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)involveSelector:(SEL)arg1 target:(id)arg2;
- (void)requestChargeBalance:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4 willStartSelector:(SEL)arg5;
- (void)balanceWillStart;
- (void)processAuthResult:(id)arg1;
- (void)processAuthNotification:(id)arg1;
- (void)balanceFail:(id)arg1;
- (void)balanceErr:(id)arg1;
- (void)balanceOK:(id)arg1;
- (void)requestBalanceWithcallback:(CDUnknownBlockType)arg1;
- (void)dealloc;

@end

