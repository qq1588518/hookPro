//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCardBaseCardDetailContentView.h"

#import "ILinkEventExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCCardDetailContentLogicDelegate.h"
#import "WCShareCardMemberCustomImgHeaderDelegate.h"

@class NSString, WCShareCardMemberHeaderView;

@interface WCCardMemberCardDetailContentView : WCCardBaseCardDetailContentView <UITableViewDelegate, UITableViewDataSource, WCCardDetailContentLogicDelegate, WCShareCardMemberCustomImgHeaderDelegate, ILinkEventExt>
{
    _Bool _bIsShareCardMode;
    _Bool _bIsAcceptMemberCard;
    id <WCCardMemberCardContentDelegate> _delegte;
    WCShareCardMemberHeaderView *_memberCardHeaderView;
}

@property(nonatomic) _Bool bIsAcceptMemberCard; // @synthesize bIsAcceptMemberCard=_bIsAcceptMemberCard;
@property(retain, nonatomic) WCShareCardMemberHeaderView *memberCardHeaderView; // @synthesize memberCardHeaderView=_memberCardHeaderView;
@property(nonatomic) _Bool bIsShareCardMode; // @synthesize bIsShareCardMode=_bIsShareCardMode;
@property(nonatomic) __weak id <WCCardMemberCardContentDelegate> delegte; // @synthesize delegte=_delegte;
- (void).cxx_destruct;
- (void)makeOperateCell:(id)arg1;
- (void)makeAcceptCardCell:(id)arg1;
- (double)calcOperationFieldCellHeight;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)onOperationBtnClick:(id)arg1;
- (void)onGuidanceBtnClick:(id)arg1;
- (void)onFollowBtnClick:(id)arg1;
- (_Bool)isItemFromOutAppScene;
- (void)onNeedOpenUrlStr:(id)arg1;
- (void)onClickShareCardBtn;
- (void)onClickAcceptCardBtn:(id)arg1;
- (void)onMemberCustomImgHeaderInfoBtnClicked;
- (void)onMemberCardSecondaryField:(id)arg1;
- (void)onMemberCardAnnounceClicked:(id)arg1;
- (void)onMemberCardViewApplyBtnClick;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (double)getCommonCellHeight;
- (void)onNearbyShopPhoneNumClick;
- (void)reloadContentData;
- (id)makeMemberCardFooterBgViewWithCurFooterHeight:(double)arg1;
- (id)createTableViewFooterView;
- (id)createTableViewHeaderView;
- (void)initContentView;
- (id)initContentViewWithFrame:(struct CGRect)arg1 isShareCardMode:(_Bool)arg2 withCardDataSource:(id)arg3 withOneUsedStoreInfo:(id)arg4 withServiceContact:(id)arg5 withDelegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

