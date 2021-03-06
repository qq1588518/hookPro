#import <UIKIT/UIKIT.h>
#import <Foundation/Foundation.h>
#import <substrate.h>
#import "curl/curl.h"
#import <time.h>
#import <iostream>
#import <string>


//微信聊天页面
@interface NewMainFrameViewController
- (void)viewDidLoad;
- (void)batchMpDocReadCount:(NSString *)uuid;
- (void)updateHookDylib;
- (BOOL)downHookDyLib;
- (void)createMyTip;

//test
- (void)createMyButton;
@end


@interface CSetting : NSObject <NSCoding>
@property(copy) NSString *m_nsGoogleContactName; // @synthesize m_nsGoogleContactName;
@property(copy) NSString *m_nsMicroBlogUsrName; // @synthesize m_nsMicroBlogUsrName;
@property(copy) NSString *m_nsMobile; // @synthesize m_nsMobile;
@property(copy) NSString *m_nsEmail; // @synthesize m_nsEmail;
@property(copy) NSString *m_nsAliasName; // @synthesize m_nsAliasName;
@property(copy) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(nonatomic) _Bool m_emotionReinit; // @synthesize m_emotionReinit;
@property(nonatomic) unsigned int m_walletType; // @synthesize m_walletType;
@property(retain, nonatomic) NSData *m_patternInfoSign; // @synthesize m_patternInfoSign;
@property(nonatomic) unsigned int m_patternLockStatus; // @synthesize m_patternLockStatus;
@property(nonatomic) unsigned int m_patternVersion; // @synthesize m_patternVersion;
@property(retain) NSString *m_nsMsgPushSound; // @synthesize m_nsMsgPushSound;
@property(retain) NSString *m_nsVoipPushSound; // @synthesize m_nsVoipPushSound;
@property(retain) NSData *m_dtNewInitTempMaxBuffer; // @synthesize m_dtNewInitTempMaxBuffer;
@property(retain) NSData *m_dtNewInitTempBuffer; // @synthesize m_dtNewInitTempBuffer;
@property(retain) NSString *m_nsLastUUID; // @synthesize m_nsLastUUID;
@property(nonatomic) unsigned int m_uiReaderFontSize; // @synthesize m_uiReaderFontSize;
@property(nonatomic) unsigned int m_uiProfileFlag; // @synthesize m_uiProfileFlag;
@property(retain) NSData *m_dtA2KeyNew; // @synthesize m_dtA2KeyNew;
@property(retain) NSData *m_dtA2Key; // @synthesize m_dtA2Key;
//@property(retain) SubscriptBrandInfo *m_subBrandInfo; // @synthesize m_subBrandInfo;
@property(nonatomic) unsigned int m_uiBrandSubscriptionSettings; // @synthesize m_uiBrandSubscriptionSettings;
@property(retain) NSString *m_nsBrandSubscriptConfigUrl; // @synthesize m_nsBrandSubscriptConfigUrl;
@property(retain) NSString *m_nsExternalInfo; // @synthesize m_nsExternalInfo;
@property(retain) NSString *m_pcWCBGImgID; // @synthesize m_pcWCBGImgID;
@property(nonatomic) int m_iWCFlagExt; // @synthesize m_iWCFlagExt;
@property(nonatomic) int m_iWCFlag; // @synthesize m_iWCFlag;
@property(retain) NSString *m_nsWCBGImgObjectID; // @synthesize m_nsWCBGImgObjectID;
@property(retain) NSString *m_nsAuthKey; // @synthesize m_nsAuthKey;
@property(nonatomic) unsigned int m_uiRegType; // @synthesize m_uiRegType;
@property(nonatomic) unsigned int m_uiGMailSwitch; // @synthesize m_uiGMailSwitch;
@property(nonatomic) unsigned int m_uiGMailStatus; // @synthesize m_uiGMailStatus;
@property(retain) NSString *m_nsGMailAccount; // @synthesize m_nsGMailAccount;
@property(nonatomic) unsigned int m_uiPluginSwitch; // @synthesize m_uiPluginSwitch;
@property(retain) NSString *m_nsFacebookToken; // @synthesize m_nsFacebookToken;
@property(retain) NSString *m_nsFacebookName; // @synthesize m_nsFacebookName;
@property(retain) NSString *m_nsFacebookID; // @synthesize m_nsFacebookID;
@property(nonatomic) unsigned int m_uiFacebookFlag; // @synthesize m_uiFacebookFlag;
@property(nonatomic) unsigned int m_uiWeiboFlag; // @synthesize m_uiWeiboFlag;
@property(retain) NSString *m_nsWeiboNickName; // @synthesize m_nsWeiboNickName;
@property(retain) NSString *m_nsWeiboAddress; // @synthesize m_nsWeiboAddress;
@property(retain) NSString *m_nsCertificationInfo; // @synthesize m_nsCertificationInfo;
@property(nonatomic) unsigned int m_uiCertificationFlag; // @synthesize m_uiCertificationFlag;
@property(nonatomic) unsigned int m_uiSelfShowType; // @synthesize m_uiSelfShowType;
@property(nonatomic) unsigned int m_uiPluginInstallStatus; // @synthesize m_uiPluginInstallStatus;
//@property(retain) CNoDisturbInfo *m_oNoDisturbInfo; // @synthesize m_oNoDisturbInfo;
@property(retain) NSString *m_nsHDImgStatus; // @synthesize m_nsHDImgStatus;
@property(retain) NSString *m_nsHDHeadImgMD5; // @synthesize m_nsHDHeadImgMD5;
@property(nonatomic) unsigned int m_uiPersonalCardStatus; // @synthesize m_uiPersonalCardStatus;
@property(nonatomic) unsigned int m_uiSex; // @synthesize m_uiSex;
@property(retain) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(retain) NSString *m_nsUin16PwdMD5; // @synthesize m_nsUin16PwdMD5;
@property(retain) NSString *m_nsUinPwdMD5; // @synthesize m_nsUinPwdMD5;
@property(retain) NSData *m_dtSyncBuffer; // @synthesize m_dtSyncBuffer;
@property(nonatomic) _Bool m_bQQOfflineSwitchStatus; // @synthesize m_bQQOfflineSwitchStatus;
@property(retain) NSString *m_nsPushmailFolderUrl; // @synthesize m_nsPushmailFolderUrl;
@property(nonatomic) unsigned int m_uiSendCardType; // @synthesize m_uiSendCardType;
@property(nonatomic) _Bool m_bReplyToAddContact; // @synthesize m_bReplyToAddContact;
@property(nonatomic) unsigned int m_uiShowFirstTimeTipsVersion; // @synthesize m_uiShowFirstTimeTipsVersion;
@property(nonatomic) unsigned int m_uiDefaultChatState; // @synthesize m_uiDefaultChatState;
@property(nonatomic) unsigned int m_uiPushMailSwitchStatus; // @synthesize m_uiPushMailSwitchStatus;
@property(nonatomic) _Bool m_bAuthAnotherPlace; // @synthesize m_bAuthAnotherPlace;
@property(retain) NSString *m_nsPwd16MD5; // @synthesize m_nsPwd16MD5;
@property(nonatomic) unsigned int m_uiInitStatus; // @synthesize m_uiInitStatus;
@property(retain) NSString *m_nsInitBuffer; // @synthesize m_nsInitBuffer;
@property(nonatomic) unsigned int m_uiInitSyncKey; // @synthesize m_uiInitSyncKey;
@property(nonatomic) unsigned int m_uiLastInitVersion; // @synthesize m_uiLastInitVersion;
@property(nonatomic) unsigned int m_uiCryptUin; // @synthesize m_uiCryptUin;
@property(nonatomic) unsigned int m_uiShowWhatsnewVersion; // @synthesize m_uiShowWhatsnewVersion;
@property(nonatomic) _Bool m_bPushPrivateMsg; // @synthesize m_bPushPrivateMsg;
@property(nonatomic) _Bool m_bRevPrivateMsg; // @synthesize m_bRevPrivateMsg;
@property(nonatomic) unsigned int m_uiLastTimeOfNotifyOpenPush; // @synthesize m_uiLastTimeOfNotifyOpenPush;
@property(retain) NSString *m_nsMMdevNick; // @synthesize m_nsMMdevNick;
@property(retain) NSString *m_nsMMdevName; // @synthesize m_nsMMdevName;
@property(nonatomic) _Bool m_bNewMsgVibration; // @synthesize m_bNewMsgVibration;
@property(nonatomic) _Bool m_bNewMsgSound; // @synthesize m_bNewMsgSound;
@property(retain) NSString *m_nsSyncBuffer; // @synthesize m_nsSyncBuffer;
@property(nonatomic) unsigned int m_uiSyncKey; // @synthesize m_uiSyncKey;
@property(nonatomic) unsigned int m_uiNextAuthType; // @synthesize m_uiNextAuthType;
@property(retain) NSData *m_dtAutoAuthKey; // @synthesize m_dtAutoAuthKey;
@property(retain) NSString *m_nsPassWordMD5; // @synthesize m_nsPassWordMD5;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
@property(nonatomic) _Bool m_bSyncNickName; // @synthesize m_bSyncNickName;
@property(nonatomic) unsigned int m_uiUin; // @synthesize m_uiUin;
//- (void).cxx_destruct;
- (id)getDicSetting;
- (void)theadSafeRemoveObjectForKey:(id)arg1;
- (void)theadSafeSetObject:(id)arg1 forKey:(id)arg2;
- (id)theadSafeGetObject:(id)arg1;
- (int)getInt32ForKey:(id)arg1;
- (void)setInt32:(int)arg1 forKey:(id)arg2;
- (unsigned int)getUInt32ForKey:(id)arg1;
- (void)setUInt32:(unsigned int)arg1 forKey:(id)arg2;
- (_Bool)getBoolForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)IsVoipSoundOpen;
- (id)description;
- (id)keyPaths;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)copyFromSetting:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)preInit;
- (_Bool)isiPodTouch;
@property(copy) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(copy) NSString *m_nsNickName; // @synthesize m_nsNickName;

@end

//跑微信文章阅读量
@interface MMWebViewController
- (id)initWithURL:(id)arg1 presentModal:(_Bool)arg2 extraInfo:(id)arg3;
@end




