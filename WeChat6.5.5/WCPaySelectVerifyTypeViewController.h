//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class NSString;
@protocol WCPaySelectVerifyTypeViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WCPaySelectVerifyTypeViewController : WCPayBaseViewController
{
    id <WCPaySelectVerifyTypeViewControllerDelegate> m_delegate;
    NSString *bindCardTitle;
    NSString *bindCardSubTitle;
    NSString *bindIdTitle;
    NSString *bindIdSubTitle;
    NSString *extralWording;
    _Bool questionAnswerSwitch;
    NSString *questionAnswerUrl;
    _Bool isShowBindCard;
    _Bool isShowRealnameVerify;
    _Bool isShowBindCardVerify;
    NSString *bindCardVerifyTitle;
    NSString *bindCardVerifySubTitle;
    _Bool isNeedShowBindCardVerifyAlertView;
    NSString *bindCardVeifyAlertViewRightButtonText;
    NSString *bindCardVeifyAlertViewContent;
}

- (void).cxx_destruct;
- (void)onRightBarButtonClick;
- (void)populateData:(id)arg1;
- (void)getWording;
- (void)selectBindCardVerify;
- (void)selectRealnameVerify;
- (void)selectBindCard;
- (void)makeSelectBindCardVerifyCell:(id)arg1;
- (void)makeSelectRealnameVerifyCell:(id)arg1;
- (void)makeSelectBindCardCell:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)OnBack;
- (void)reloadTableView;
- (void)initNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)init;

@end

