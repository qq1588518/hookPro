//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMCommonChatViewController.h"

#import "TBIMGroupServiceDelegate-Protocol.h"
#import "UIViewControllerTBNavigator-Protocol.h"

@class NSString, NSTimer, TBIMMarqueeView;
@protocol TBIMGroupAdapter, TBIMGroupServiceAdapter;

@interface TBChatRoomViewController : TBIMCommonChatViewController <TBIMGroupServiceDelegate, UIViewControllerTBNavigator>
{
    _Bool _bleave;	// 24 = 0x18
    id <TBIMGroupServiceAdapter> _groupService;	// 32 = 0x20
    id <TBIMGroupAdapter> _group;	// 40 = 0x28
    NSTimer *_timer;	// 48 = 0x30
    TBIMMarqueeView *_marqueeView;	// 56 = 0x38
    double _disappearTime;	// 64 = 0x40
}

@property(nonatomic) _Bool bleave; // @synthesize bleave=_bleave;
@property(nonatomic) double disappearTime; // @synthesize disappearTime=_disappearTime;
@property(retain, nonatomic) TBIMMarqueeView *marqueeView; // @synthesize marqueeView=_marqueeView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) id <TBIMGroupAdapter> group; // @synthesize group=_group;
@property(retain, nonatomic) id <TBIMGroupServiceAdapter> groupService; // @synthesize groupService=_groupService;
- (void).cxx_destruct;
- (void)hideUnreadLocator;
- (void)showUnreadLocatorWithUnreadNumber:(long long)arg1 withRealMsgCount:(unsigned long long)arg2;
- (void)backPhotoModelListWithPhotoViewerContainerView:(id)arg1 photoModel:(id)arg2 requestCount:(long long)arg3;
- (void)frontPhotoModelListWithPhotoViewerContainerView:(id)arg1 photoModel:(id)arg2 requestCount:(long long)arg3;
- (_Bool)isBackHasMore;
- (_Bool)isFrontHasMore;
- (long long)photoViewerRequestOffset;
- (long long)photoViewerRequestCount;
- (void)setupNotice;
- (void)closeNoticeTips;
- (void)showNoticeTips:(id)arg1;
- (void)tipCloseClick:(id)arg1;
- (void)tipActionClick:(id)arg1;
- (void)sendHeartbeat;
- (void)stopTimer;
- (void)startTimer;
- (void)messageViewCell:(id)arg1 headImageDidTapped:(id)arg2;
- (id)titleForChat;
- (id)getGroupId;
- (void)groupInfoDeleted:(id)arg1;
- (void)groupInfoChange:(id)arg1 success:(unsigned long long)arg2;
- (void)groupMessageCleanForGroupId:(id)arg1;
- (void)groupUserUpdatedSuccess:(id)arg1;
- (void)gotoShop:(id)arg1;
- (void)gotoGroupInfo:(id)arg1;
- (void)setupNavigation;
- (void)reflushStyle;
- (void)updateNaviBar;
- (void)dealloc;
- (void)enterChatRoom;
- (void)leaveChatRoom;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)applicationWillResignActiveNotificationShouldShutdown:(id)arg1;
- (void)applicationDidBecomeActiveShouldRestart:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithGroupId:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

