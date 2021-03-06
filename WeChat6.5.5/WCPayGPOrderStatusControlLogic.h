//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"
#import "WCPayGPOrderStatusViewControllerDelegate-Protocol.h"
#import "WCPayPayMoneyLogicDelegate-Protocol.h"

@class NSString, WCPayPayMoneyLogic;
@protocol WCPayGPOrderStatusControlLogicDelegate;

__attribute__((visibility("hidden")))
@interface WCPayGPOrderStatusControlLogic : WCPayControlLogic <PBMessageObserverDelegate, WCPayGPOrderStatusViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCBaseControlMgrExt, WCBaseControlLogicDeleagte, UIAlertViewDelegate>
{
    unsigned int _msgLocalID;
    id <WCPayGPOrderStatusControlLogicDelegate> _orderStatusDelegate;
    WCPayPayMoneyLogic *_payMoneyLogic;
    unsigned long long _currentLogicScene;
    NSString *_curAlertRightBtnUrl;
}

@property(retain, nonatomic) NSString *curAlertRightBtnUrl; // @synthesize curAlertRightBtnUrl=_curAlertRightBtnUrl;
@property(nonatomic) unsigned int msgLocalID; // @synthesize msgLocalID=_msgLocalID;
@property(nonatomic) unsigned long long currentLogicScene; // @synthesize currentLogicScene=_currentLogicScene;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
@property(nonatomic) __weak id <WCPayGPOrderStatusControlLogicDelegate> orderStatusDelegate; // @synthesize orderStatusDelegate=_orderStatusDelegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetAACloseUnpayNotifyResonse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetSendPayNotifyMsgResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetCloseAAOrderResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetAAOrderPrePayResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetAAOrderDetailResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)getAAOrderDetailFromSvr;
- (_Bool)gotoViewController:(id)arg1;
- (_Bool)updateC2CNewXmlMsgContentWithRespXml:(id)arg1;
- (void)addAAPaySuccessSysMsg;
- (void)delayStopLogic;
- (void)dismissAndStopLogic;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onClickViewBalanceLink;
- (void)startPayMoneyLogic;
- (void)onPayerClickCloseUnPayNotify;
- (void)onLauncherClickCloseOrderBtn;
- (void)onLauncherClickSendPayNotifyMsgBtn;
- (void)onPayerClickPayMoneyButton;
- (void)onOrderStatusViewControllerCancel;
- (void)confirmCloseUnPayNotifyFromSysMsg;
- (void)cancelCloseUnPayNotifyFromSysMsg;
- (void)confirmCloseOrderFromSysMsg;
- (void)cancelCloseOrderFromSysMsg;
- (void)startLogic;
- (void)stopLogic;
- (id)initWithBillNum:(id)arg1 withOrderStatusFromScene:(unsigned long long)arg2 withChatroomContact:(id)arg3 withLogicScene:(unsigned long long)arg4 withMsgLocalID:(unsigned int)arg5;
- (id)initWithBillNum:(id)arg1 withOrderStatusFromScene:(unsigned long long)arg2 withChatroomContact:(id)arg3 withLogicScene:(unsigned long long)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

