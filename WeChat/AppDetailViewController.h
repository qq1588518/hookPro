//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IEnterpriseMsgExt.h"
#import "IMsgExt.h"
#import "IMsgRevokeExt.h"
#import "MMAppAttachFileMgrExt.h"
#import "UIAlertViewDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UIWebViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class CMessageWrap, MMMPMoviePlayerController, MMProgressView, NSString, ShareDataToOpenSDKController, UIButton, UIDocumentInteractionController, UILabel, UITapGestureRecognizer, UIView, WCActionSheet;

@interface AppDetailViewController : MMUIViewController <WCActionSheetDelegate, UIDocumentInteractionControllerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, MMAppAttachFileMgrExt, UIWebViewDelegate, IMsgExt, IEnterpriseMsgExt, IMsgRevokeExt, UIAlertViewDelegate>
{
    NSString *m_nsUsrName;
    CMessageWrap *m_wrapMsg;
    _Bool m_bDownloading;
    _Bool m_bRegister;
    MMProgressView *m_viewProgress;
    UILabel *m_labProgress;
    UIButton *m_btnCancelDownload;
    UIButton *m_btnDownload;
    UILabel *m_labCannotOpen;
    UIButton *m_btnViewDetail;
    UIButton *m_btnOpenByApp;
    UILabel *m_labelFileName;
    id <AppDetailDelegate> m_delegate;
    _Bool m_bPreview;
    unsigned int m_uiPreviewType;
    UIDocumentInteractionController *m_vcDocument;
    _Bool m_bViewDidAppear;
    _Bool m_bOpenMode;
    _Bool m_bFileExpired;
    _Bool m_bHasRevoke;
    MMMPMoviePlayerController *_moviePlayerController;
    WCActionSheet *m_actionSheet;
    ShareDataToOpenSDKController *m_shareOpenSDKController;
    UIView *m_webView;
    _Bool _bIsNaviBarHide;
    UITapGestureRecognizer *_singleTapRec;
    _Bool _bIsDisableTapRec;
    _Bool m_showInfoOnly;
    _Bool m_bIsFileExistInSvr;
    UIButton *m_shareToFriendBtn;
    NSString *_m_tmpFilePath;
}

@property(retain, nonatomic) NSString *m_tmpFilePath; // @synthesize m_tmpFilePath=_m_tmpFilePath;
@property(nonatomic) _Bool m_bIsFileExistInSvr; // @synthesize m_bIsFileExistInSvr;
@property(retain, nonatomic) UIButton *m_shareToFriendBtn; // @synthesize m_shareToFriendBtn;
@property(nonatomic) _Bool m_showInfoOnly; // @synthesize m_showInfoOnly;
@property(nonatomic) _Bool m_bOpenMode; // @synthesize m_bOpenMode;
@property(nonatomic) __weak id <AppDetailDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CMessageWrap *m_wrapMsg; // @synthesize m_wrapMsg;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (void).cxx_destruct;
- (void)shareToFriend;
- (void)initShareToFriendBtn;
- (void)onCheckAppAttachRet:(id)arg1 isExistInSvr:(_Bool)arg2;
- (void)checkIsFileExistInSvr;
- (void)onSingleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setNaviBarHide:(_Bool)arg1 animation:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)handleModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)SetProgress:(unsigned int)arg1;
- (void)ShowProgressView;
- (void)ShowDownloadBtn;
- (void)StopDownloadAndUpdateView;
- (void)StopDownload;
- (void)StartDownload;
- (_Bool)isExceptionFileName:(id)arg1;
- (void)tryRegister;
- (void)OnReturn;
- (void)OnOperate:(id)arg1;
- (_Bool)canShowMsgForwardTo3rdApp;
- (void)InitDownload:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)OnOpenByApp:(id)arg1;
- (void)OnLookDetail;
- (void)InitInfoiew;
- (void)InitPreview;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)SetDownloadHide:(_Bool)arg1;
- (void)SetProgressHide:(_Bool)arg1;
- (id)GetFileDisplayName;
- (id)GetTmpFilePath;
- (id)GetFilePath;
- (void)dealloc;
- (void)SafeDeleteDocument;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

