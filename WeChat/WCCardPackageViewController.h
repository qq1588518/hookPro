//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCCardPkgExt.h"
#import "SessionSelectControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMUISearchBar, NSString, UIActivityIndicatorView, UIButton, UIScrollView, UISegmentedControl, UIView, WCCardDataController, WCCardPackageTableView, WCCardTitleView;

@interface WCCardPackageViewController : MMUIViewController <UIAlertViewDelegate, WCActionSheetDelegate, SessionSelectControllerDelegate, UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDelegate, IWCCardPkgExt>
{
    UIView *_navHeaderView;
    WCCardTitleView *_titleView;
    double _headViewHeight;
    UIButton *_messageTipView;
    UIButton *_messageTipViewForShare;
    WCCardDataController *_myCardDataController;
    WCCardPackageTableView *_myCardTableView;
    UIView *_myCardFooterView;
    UIScrollView *_myCardLoadingView;
    UIActivityIndicatorView *_mgCardActivityView;
    UIButton *_myCardHeadView;
    unsigned int _myCardMinUpdateTime;
    MMUISearchBar *_searchBar;
    UISegmentedControl *_segmentedControl;
    double _enterTimeForState;
    _Bool fromAddEntrance;
    _Bool hasAlreadyGetCardLayout;
    _Bool fromShareCardList;
    _Bool _fromMoreViewController;
    id <WCCardPackageViewControllerDelegate> delegate;
}

@property(nonatomic) _Bool fromMoreViewController; // @synthesize fromMoreViewController=_fromMoreViewController;
@property(nonatomic) __weak id <WCCardPackageViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool fromShareCardList; // @synthesize fromShareCardList;
@property(nonatomic) _Bool hasAlreadyGetCardLayout; // @synthesize hasAlreadyGetCardLayout;
@property(nonatomic) _Bool fromAddEntrance; // @synthesize fromAddEntrance;
- (void).cxx_destruct;
- (void)showMessageListByNewMsg;
- (id)getCardMsgTipWording;
- (id)genNewMessageTipView:(id)arg1;
- (void)initHeaderViewWithLastMsg:(id)arg1;
- (void)onRetrieveLocation:(int)arg1;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)checkDBAutoRecover;
- (_Bool)hasUnreadMessage;
- (void)setHasEnterCardListBefore;
- (_Bool)hasEnterCardListBefore;
- (void)onGiftToFriendWithIndexPath:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showMessageListByMore;
- (void)gotoMsgCenterViewControllerForNewMsg:(_Bool)arg1;
- (void)onCancel;
- (void)onRightButtonOP;
- (void)layoutTableView;
- (void)viewDidLayoutSubviews;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)onShowAllMessage;
- (void)initNavigationBar;
- (_Bool)useTransparentNavibar;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

