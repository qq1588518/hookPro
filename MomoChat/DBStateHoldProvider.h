//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFSimpleDatabase, NSMutableDictionary;

@interface DBStateHoldProvider : NSObject
{
    MFSimpleDatabase *mfdb;
    NSMutableDictionary *mfDict;
}

+ (id)providerWithMFDB:(id)arg1;
@property(retain) NSMutableDictionary *mfDict; // @synthesize mfDict;
- (_Bool)getPerformerSettingHasShowedDot;
- (void)setPerformerSettingHasShowedDot:(_Bool)arg1;
- (void)setLastMomentRefreshTime:(id)arg1;
- (id)lastMomentRefreshTime;
- (long long)selfMomentStatus;
- (void)setSelfMomentStatus:(long long)arg1;
- (void)setMomentNeedExpire:(_Bool)arg1;
- (_Bool)momentNeedExpire;
- (void)setMLShowListTabs:(id)arg1;
- (id)mlShowListTabs;
- (_Bool)hasShownMoodTip;
- (void)setHasShownMoodTip:(_Bool)arg1;
- (_Bool)hasAppearSmsLoginButton;
- (void)setHasAppearSmsLoginButton:(_Bool)arg1;
- (_Bool)hasShownMomentBubble;
- (void)setHasShownMomentBubble:(_Bool)arg1;
- (_Bool)getFriendsBroadcastNotNotified;
- (void)setFriendsBroadcastNotNotified:(_Bool)arg1;
- (void)setFriendFeedAndMomentNoticeGuideFlag:(_Bool)arg1;
- (_Bool)friendFeedAndMomentNoticeGuideFlag;
- (void)setFirstInRecordBottomBar:(_Bool)arg1;
- (_Bool)firstInRecordBottomBar;
- (void)setShowMomentHintTime:(double)arg1;
- (double)showMomentHintTime;
- (void)setShowMomentHint:(id)arg1;
- (id)showMomentHint;
- (void)setGroupVideoGuideFeatureShouldShow:(_Bool)arg1;
- (_Bool)groupVideoGuideFeatureShouldShow;
- (long long)opusNsMode;
- (_Bool)opusNsSwitchValue;
- (_Bool)opusSwithValue;
- (id)opusConfig;
- (void)setOpusConfig:(id)arg1;
- (_Bool)hasShowedGroupVideoChatGuide;
- (void)setHasShowedGroupVideoChatGuide:(_Bool)arg1;
- (_Bool)getHasShowVipService;
- (void)setHasShowVipService:(_Bool)arg1;
- (id)getLiveFilterName;
- (void)setLiveFilterName:(id)arg1;
- (void)setLastShowPushNoticeTime:(id)arg1;
- (id)lastShowPushNoticeTime;
- (void)setFirstGotoLikeEachOther:(_Bool)arg1;
- (_Bool)firstGotoLikeEachOther;
- (void)setFirstProfileUp:(_Bool)arg1;
- (_Bool)firstProfileUp;
- (long long)profileLabelVersion;
- (void)setProfileLabelVersion:(long long)arg1;
- (void)setProfileLabelRedDotShow:(_Bool)arg1;
- (_Bool)profileLabelRedDotShow;
- (void)setGaodeDiscoverSDKShouldOpen:(_Bool)arg1;
- (_Bool)gaodeDiscoverSDKShouldOpen;
- (void)changeShowedMomentRecordEntryGuideList:(id)arg1 add:(_Bool)arg2;
- (id)showedMomentRecordEntryGuideList;
- (void)setMomentRecordEntryGuideList:(id)arg1;
- (id)momentRecordEntryGuideList;
- (void)setFaceGuideIconInfoList:(id)arg1;
- (id)faceGuideIconInfoList;
- (void)setMomentTopicEntranceShouldShowRedTip:(_Bool)arg1;
- (_Bool)momentTopicEntranceShouldShowRedTip;
- (void)setMomentTopicInfoList:(id)arg1;
- (id)momentTopicInfoList;
- (void)setLastMomentTopicVersion:(long long)arg1;
- (long long)lastMomentTopicVersion;
- (long long)getContactsCurrentSelectIndex;
- (void)setContactsCurrentSelectIndex:(long long)arg1;
- (void)setFeedCustomFilter:(_Bool)arg1;
- (_Bool)isFeedCustomFilter;
- (id)getBroadcastAnnouncement;
- (void)setBroadcastAnnouncement:(id)arg1;
- (void)setHasShowedMomentFaceDcorationRecordGuide:(_Bool)arg1;
- (_Bool)hasShowedMomentFaceDcorationRecordGuide;
- (void)setHasShowedMomentFaceDecorationGuide:(_Bool)arg1;
- (_Bool)hasShowedMomentFaceDecorationGuide;
- (void)setHasShowedGroupManagerGuide:(_Bool)arg1;
- (_Bool)hasShowedGroupManagerGuide;
- (id)unicomFlowPackageInfo;
- (void)setUnicomFlowPackageInfo:(id)arg1;
- (void)setHasShowNearbyFeedFilterGuide:(_Bool)arg1;
- (_Bool)hasShowNearbyFeedFilterGuide;
- (void)setHasShowedMomentPublishGuide:(_Bool)arg1;
- (_Bool)hasShowedMomentPublishGuide;
- (void)setRecommendPerPageMomentCount:(long long)arg1;
- (long long)perRecommendPageMomentCount;
- (void)setPerPageMomentCount:(long long)arg1;
- (long long)perPageMomentCount;
- (void)setProfileUpedByMeCount:(long long)arg1;
- (long long)profileUpedByMeCount;
- (void)setProfileUpCount:(long long)arg1;
- (long long)profileUpCount;
- (void)setMomentChoosenSex:(long long)arg1;
- (long long)momentChoosenSex;
- (void)setMomentFilterInedx:(long long)arg1;
- (long long)momentFilterInedx;
- (void)setMomentCameraPosition:(long long)arg1;
- (long long)momentCameraPosition;
- (void)setHasShowedMomentEditGuide:(_Bool)arg1;
- (_Bool)hasShowedMomentEditGuide;
- (void)setHasPickedMomentSex:(_Bool)arg1;
- (_Bool)hasPickedMomentSex;
- (void)setHasShowedMomentPlayGuide:(_Bool)arg1;
- (_Bool)hasShowedMomentPlayGuide;
- (void)setHasShowedMomentRecordGuide:(_Bool)arg1;
- (_Bool)hasShowedMomentRecordGuide;
- (void)clickRecommendMoment;
- (_Bool)isFirstClickRecommend;
- (id)fetchMometnFilterDic;
- (void)saveMomentFilterDic:(id)arg1;
- (id)fetchMomentFilterControls;
- (void)updateMomentFilterControl:(id)arg1;
- (void)setHasShownMessageMomentEntryGuide:(_Bool)arg1;
- (_Bool)hasShownMessageMomentEntryGuide;
- (void)setPlayMomentUpSlideGuide:(_Bool)arg1;
- (_Bool)playMomentUpSlideGuide;
- (void)setPlayMomentLeftSlideGuide:(_Bool)arg1;
- (_Bool)playMomentLeftSlideGuide;
- (void)setPlayMomentDateStr:(id)arg1;
- (id)playMomentDateStr;
- (_Bool)momentTimeEnable;
- (void)setMomentTimeEnable:(_Bool)arg1;
- (long long)momentNoticeTime;
- (void)setMomentNoticeTime:(unsigned long long)arg1;
- (_Bool)momentRemind;
- (void)setMomentRemindEnalbe:(_Bool)arg1;
- (_Bool)momentPushctl;
- (void)setMomentPushctl:(_Bool)arg1;
- (void)setMomentGiftAlertType:(long long)arg1;
- (long long)momentGiftAlertType;
- (void)setMomentItemInfo:(id)arg1;
- (id)momentItemInfo;
- (void)setMomentHidden:(_Bool)arg1;
- (_Bool)momentHidden;
- (void)setFilmHidden:(_Bool)arg1;
- (_Bool)filmHidden;
- (void)setMyMomentWatchCount:(long long)arg1;
- (long long)getMyMomentWatchCount;
- (void)setGrowingIOCollectUserID:(id)arg1;
- (id)growingIOCollectUserID;
- (void)setGrowingIOShouldCollected:(_Bool)arg1;
- (_Bool)growingIOShouldCollected;
- (id)fullSearchDataLoadTime;
- (void)setFullSearchDataLoadTime:(id)arg1;
- (id)ftsRecordDate;
- (void)setFtsRecordDate:(id)arg1;
- (void)setBigRoleEnterShowTimes:(int)arg1;
- (int)getBigRoleEnterShowTimes;
- (void)setShowBigRoleTip:(_Bool)arg1;
- (_Bool)showBigRoleTip;
- (void)setShowedScrollToTopGuide:(_Bool)arg1;
- (_Bool)getIsShowScrollToTopGuide;
- (id)enterSuperLikeTime;
- (void)setEnterSuperLikeDate:(id)arg1;
- (long long)quickMatchState;
- (void)setQuickMatchState:(long long)arg1;
- (_Bool)getShowNewUserGuideForSuperLike;
- (void)setShowNewUserGuideForSuperLike;
- (id)lastSavedContactsMD5;
- (void)setCurrentContactsMD5:(id)arg1;
- (void)setQuestionAnswered:(_Bool)arg1 ByGroupId:(id)arg2;
- (_Bool)isQuestionAnsweredByGroupId:(id)arg1;
- (id)getNewPhotoTimeInLibrary;
- (void)setNewPhotoTimeInLibrary:(id)arg1;
- (id)getLastFeedNewPhotoReleaseGuideTime;
- (void)setLastFeedNewPhotoReleaseGuideTime:(id)arg1;
- (id)getPersonalGirdProfileText;
- (void)setPersonalGirdProfileText:(id)arg1;
- (id)getPersonalGirdProfileTextTime;
- (void)setPersonalGirdProfileTextTime:(id)arg1;
- (void)setQuietCommentUsed:(_Bool)arg1;
- (_Bool)isQuietCommentUsed;
- (long long)getShowProfileGirdGuideValue;
- (void)setShowProfileGirdGuideValue;
- (long long)getShowFeedGirdGuideValue;
- (void)setShowFeedGirdGuideValue;
- (_Bool)getIsShowLiveFeedFeatureGuide;
- (void)setShowedLiveFeedFeatureGuide:(_Bool)arg1;
- (void)setMLVideoFailLogTempArray:(id)arg1;
- (id)mlVideoFailLogTempArray;
- (_Bool)isPurchaseNotice;
- (void)setPurchaseNotice:(_Bool)arg1;
- (_Bool)isUNWIFINotice;
- (void)setUNWIFINotice:(_Bool)arg1;
- (_Bool)mlBeatuifulEnable;
- (void)setMLBeatuifulEnable:(_Bool)arg1;
- (_Bool)mlNewBeatuifulEnable;
- (void)setMLNewBeatuifulEnable:(_Bool)arg1;
- (id)mlDefaultTempMagicGestureArray;
- (void)setMLDefaultTempMagicGestureArray:(id)arg1;
- (long long)mlPrivateSceneVersion;
- (void)setMLPrivateSceneVersion:(long long)arg1;
- (void)setNewUserGroupRelatedState:(unsigned long long)arg1;
- (unsigned long long)newGroupRelatedState;
- (void)setFeedCommentKeyBoardState:(unsigned long long)arg1;
- (unsigned long long)feedCommentKeyBoardState;
- (void)setLastUploadStepCountDate:(id)arg1;
- (double)lastUploadStepCountDate;
- (void)setCloseFollowNoticeMsgWithMomoid:(id)arg1 relation:(int)arg2;
- (_Bool)shouldShowFollowNoticeMsgWithMomoid:(id)arg1 relation:(int)arg2;
- (id)closeFollowTipViewDateWithMomoid:(id)arg1 relation:(int)arg2;
- (void)setCloseFollowTipViewWithMomoid:(id)arg1 relation:(int)arg2;
- (_Bool)shouldShowFollowTipViewWithMomoid:(id)arg1 relation:(int)arg2;
- (void)setLastFriendMomentOwnerAvatarGuid:(id)arg1;
- (void)setLastFriendFeedOwnerAvatarGuid:(id)arg1;
- (id)getLastOwnerAvatarGuidOfFeedAndMoment;
- (void)setSettingCellUpdateTime:(id)arg1 withKey:(id)arg2;
- (id)settingCellUpdateTimeWithKey:(id)arg1;
- (void)setSelectedGroupCategory:(id)arg1;
- (id)preSelectedGroupCategory;
- (void)setHasShowedPreViewWebCoverTip:(_Bool)arg1;
- (_Bool)hasShowedPreViewWebCoverTip;
- (void)setHasShowedCleanVisitRecordTip:(_Bool)arg1;
- (_Bool)hasShowedCleanVisitRecordTip;
- (void)setVideoChatExperienced;
- (_Bool)isVideoChatExperienced;
- (void)setHasShowedMyCustomEmotionRedPoint:(_Bool)arg1;
- (_Bool)hasShowedMyCustomEmotionRedPoint;
- (void)setFirstRecruitEnable:(_Bool)arg1;
- (_Bool)isFirstRecruit;
- (void)setHasLoadedLocalVideo;
- (_Bool)hasLoadedLocalVideo;
- (id)mlPrivateFilterName;
- (void)setMLPrivateFilterName:(id)arg1;
- (id)mlSpecialEffect;
- (void)setMLSpecialEffect:(id)arg1;
- (id)mlFaceDecoration;
- (void)setMLFaceDecoration:(id)arg1;
- (id)mlBeautySettings;
- (void)setMLBeautySetttings:(id)arg1;
- (void)setMlIndexListHeaderData:(id)arg1;
- (id)mlIndexShowListHeaderData;
- (void)setMlIndexShowListData:(id)arg1;
- (id)mlIndexShowListData;
- (void)setBiubiuSwitch:(_Bool)arg1;
- (_Bool)biubiuSwitch;
- (void)setMlShowListData:(id)arg1;
- (id)mlShowListData;
- (void)setMLShowListLastUpdateTime:(id)arg1;
- (id)mlShowListLastUpdateTime;
- (int)mlPrivateSongVersion;
- (void)setMLPrivateSongVersion:(int)arg1;
- (_Bool)mlPrivateStarMoreButtonTipMark;
- (void)setMLPrivateStarMoreButtonTipMark;
- (_Bool)mlPrivateRoomOwnerGesturesTipMark;
- (void)setMLPrivateRoomOwnerGesturesTipMark;
- (_Bool)mlPrivateGesturesTipMark;
- (void)setMLPrivateGesturesTipMark;
- (void)setCurrentFeedSiteID:(id)arg1;
- (id)currentFeedSiteID;
- (void)setHasShownRecordVideoTimeLimitForNotVipTips;
- (_Bool)hasShownRecordVideoTimeLimitForNotVipTips;
- (void)setLastEditProfileGuideDate:(id)arg1;
- (id)lastEditProfileGuideDate;
- (id)actualDateWithDate:(id)arg1;
- (void)setNewUserGuideState:(unsigned long long)arg1;
- (unsigned long long)newUserGuideState;
- (void)setIsNotFirstExperienceVideoBorder;
- (_Bool)isNotFirstExperienceVideoBorder;
- (void)setFeedVideoShareTipShowCount:(long long)arg1;
- (long long)feedVideoShareTipShowCount;
- (void)setFeedVideoShareDefault:(_Bool)arg1;
- (_Bool)feedVideoShareDefault;
- (void)setGroupApplySuccessNotifyEnable:(_Bool)arg1;
- (_Bool)groupApplySuccessNotifyEnable;
- (void)setVideoBorderFrameInfo:(id)arg1;
- (id)videoBorderFrameInfo;
- (void)setAuthorChecked:(_Bool)arg1;
- (_Bool)isAuthorChecked;
- (void)setLiveHelloNoticeSettingClicked:(_Bool)arg1;
- (_Bool)isLiveHelloNoticeSettingClicked;
- (void)clearTrustyWifiArray;
- (void)insertTrustyWifiWithMac:(id)arg1 wifiInfo:(id)arg2;
- (void)wifiStatusChanged;
- (id)trustyWifiArray;
- (void)setNearbyFeedBannerAdToBuySvipTipShowed:(_Bool)arg1;
- (_Bool)nearbyFeedBannerAdToBuySvipTipShowed;
- (void)setSpecialFriendGuideTipNoticedBefore;
- (_Bool)specialFriendGuideTipNoticedBefore;
- (void)setSpecialFriendTipInSingleChatShowed:(_Bool)arg1;
- (_Bool)specialFriendTipInSingleChatShowed;
- (void)setShopCenterShopGroupsShowed:(_Bool)arg1;
- (_Bool)shopCenterShopGroupsShowed;
- (id)groupZonePartyInfo:(id)arg1;
- (void)setGroupZonePartyInfo:(id)arg1 groupId:(id)arg2;
- (void)setStealthPromptedList:(id)arg1;
- (id)stealthPromptedList;
- (void)setLastGlobalLogUploadTime:(id)arg1;
- (id)lastGlobalLogUploadTime;
- (id)mlResolutionMark;
- (void)setMLResolutionMark:(id)arg1;
- (id)mlLastResolutionMarkTime;
- (_Bool)mlShowBottomTipMark;
- (void)setMLshowBottomTipMark;
- (int)mlGiftLeftCount;
- (void)setmlGiftLeftCount:(int)arg1;
- (_Bool)mlListMenuKeyIsExit:(id)arg1;
- (void)mlSetListMenuKeyWithStr:(id)arg1;
- (void)mlSetListMenuKey:(id)arg1;
- (id)mlListMenuKey;
- (id)mlProductInfo:(id)arg1;
- (void)mlSetProgressTimerForCooldown:(id)arg1;
- (id)mlProgressTimerForCooldown;
- (void)mlSetGlobleWindowShowIDS:(id)arg1;
- (id)mlGlobleWindowShowIDS;
- (_Bool)mlListIWantLiveTipMark;
- (void)setMLListIWantLiveTipMark;
- (_Bool)mlPrivateFullScreenTipMark;
- (void)setMLPrivateFullScreenTipMark;
- (void)mlSetGlobleWindowInfo:(id)arg1;
- (id)mlGlobleWindowInfo;
- (void)setMLShowLogArray:(id)arg1;
- (id)mlShowLogArray;
- (void)setMLShowPayTimeMark:(id)arg1;
- (id)mlShowPayTimeMark;
- (void)setGiftShopItem:(id)arg1;
- (id)giftShopItem;
- (id)industryInfo;
- (void)setIndustryInfo:(id)arg1;
- (_Bool)isGuideV6SaveEditInfoFinish;
- (void)setGuideV6SaveEditInfoFinish:(_Bool)arg1;
- (id)guideV6EditInfo;
- (void)setGuideV6EditInfo:(id)arg1;
- (_Bool)isGuideV6Finish;
- (void)setGuideV6Finish:(_Bool)arg1;
- (void)setRequestAliADToken:(id)arg1;
- (id)requestAliADToken;
- (id)getUpdateGiftFriendListDate;
- (void)setUpdateGiftFriendListDate:(id)arg1;
- (id)contactUpdateTimeWithKey:(id)arg1;
- (void)setContactUpdateTime:(id)arg1 key:(id)arg2;
- (void)setLighthouseGroupIdList:(id)arg1;
- (id)lighthouseGroupIdList;
- (void)setMyChatRoomList:(id)arg1;
- (id)myChatRoomList;
- (void)setUserClickedFeedDisplay:(_Bool)arg1;
- (_Bool)isUserClickedFeedDisplay;
- (void)setDisableSyncToTopic:(_Bool)arg1;
- (_Bool)disableSyncToTopic;
- (void)setDisableSyncToFeed:(_Bool)arg1;
- (_Bool)disableSyncToFeed;
- (void)setUserClicked:(_Bool)arg1;
- (_Bool)isUserClicked;
- (void)setImageMimeTypeSuffix:(id)arg1;
- (id)imageMimeTypeSuffix;
- (void)setLastFetchImageMimeTypeDate:(id)arg1;
- (id)lastFetchImageMimeTypeDate;
- (void)setShopFeedIdList:(id)arg1;
- (id)shopFeedIdList;
- (_Bool)needAutoRefreshMyComment;
- (void)setNeedAutoRefreshMyCommentFlag:(_Bool)arg1;
- (void)setLastCheckShowApplyStoreUpdateDate:(id)arg1;
- (id)lastCheckShowApplyStoreUpdateDate;
- (void)setStoreCommentUnreadCount:(long long)arg1;
- (long long)storeCommentUnreadCount;
- (void)setLastTimeOfClosingHongbaoInfo:(id)arg1 withGroupID:(id)arg2;
- (id)lastTimeOfClosingHongbaoInfoWithGroupID:(id)arg1;
- (int)helloSessionCount;
- (void)setHelloSessionCount:(int)arg1;
- (_Bool)hasShownVideoSyncNotice;
- (void)setHasShownVideoSyncNotice;
- (_Bool)isShowTrafficMonitorWidget;
- (void)setShowTrafficMonitorWidget:(_Bool)arg1;
- (void)setBoolFlag:(_Bool)arg1 withKey:(id)arg2;
- (_Bool)boolFlagWithKey:(id)arg1;
- (void)removePostDraft:(id)arg1;
- (id)postDraftText:(id)arg1;
- (void)setPostDraft:(id)arg1 text:(id)arg2;
- (void)setWebAppHasNewFlag:(_Bool)arg1;
- (_Bool)webAppHasNewFlag;
- (void)setWebAppLatestVersion:(long long)arg1;
- (long long)webAppLatestVersion;
- (void)setPersonalWebAppList:(id)arg1;
- (id)personalWebAppList;
- (void)setGroupGradeConfigWithGid:(id)arg1 params:(id)arg2;
- (void)setGroupGradeConfigWithGid:(id)arg1 openGrade:(_Bool)arg2 grades:(id)arg3;
- (void)setGroupGradeConfigWithGid:(id)arg1 grades:(id)arg2;
- (id)groupGradeConfigWithGid:(id)arg1;
- (id)rowDictGroupGradeConfigWithGid:(id)arg1;
- (void)setGroupGradeMode:(_Bool)arg1 gid:(id)arg2;
- (_Bool)groupGradeOpenMode:(id)arg1;
- (void)setRefreshDateOfGroupGradeTemplate;
- (id)refreshDateOfGroupGradeTemplate;
- (id)hotGroupType;
- (void)updateHotGroupType:(id)arg1;
- (id)groupTypeArray;
- (void)updateGroupType:(id)arg1;
- (void)setRecommandContactTip:(id)arg1;
- (id)recommandContactTip;
- (void)setRecommandContactCount:(unsigned long long)arg1;
- (unsigned long long)recommandContactCount;
- (void)setEmotionCategoryList:(id)arg1;
- (id)emotionCategoryList;
- (void)setRefreshDateOfEmotionCategory;
- (id)refreshDateOfEmotionCategory;
- (void)setWaitAddedUsersArray:(id)arg1;
- (id)waitAddedUsersArray;
- (void)setTitleOfrecommendFriendsSction:(id)arg1;
- (id)titleOfrecommendFriendsSction;
- (void)setRecommendFriendsUserArray:(id)arg1;
- (id)recommendFriendsUserArray;
- (void)setGameCenterList:(id)arg1;
- (id)gameCenterList;
- (void)setFocusBoardFeedArray:(id)arg1;
- (id)focusBoardFeedArray;
- (void)setRecommendBoardFeedArray:(id)arg1;
- (id)recommendBoardFeedArray;
- (void)setRecommendBoardFeedLastUpdateTime:(id)arg1;
- (id)recommendBoardFeedLastUpdateTime;
- (id)allFeedListResource:(long long)arg1;
- (void)setAllFeedListResource:(id)arg1 feedListType:(long long)arg2;
- (void)setAllNearbySource:(id)arg1;
- (id)allNearbySource;
- (void)setCretatingBoardArray:(id)arg1;
- (id)creatingBoardsArray;
- (void)updateShopSource:(long long)arg1;
- (long long)lastShopSource;
- (void)setLastGameSource:(long long)arg1;
- (long long)lastGameSource;
- (void)setLastShowHelloTipDate;
- (id)lastShowHelloTipDate;
- (void)setLastFitUserProfileDate;
- (id)lastFitUserProfileDate;
- (void)setHasTransferEmotion;
- (_Bool)hasTransferEmotion;
- (void)setHasTransferChatBackgroupd;
- (_Bool)hasTransferChatBackground;
- (void)updateVisitSourceMap:(id)arg1;
- (id)lastVisitSourceMap;
- (void)updateVisitSource:(id)arg1;
- (id)lastVisitSource;
- (void)updateGroupApplySourceMap:(id)arg1;
- (id)lastGroupApplySourceMap;
- (void)updateChatSourceMap:(id)arg1;
- (id)lastChatSourceMap;
- (void)updateChatSource:(id)arg1;
- (id)lastChatSource;
- (void)updateGroupMemberListTime:(id)arg1;
- (id)lastGroupMemberListUpdateTime:(id)arg1;
- (void)updateBoardSearchRecommendList:(id)arg1;
- (id)boardSearchRecommendList;
- (void)updateBoardSearchRecommendTime;
- (id)lastBoardSearchRecommendUpdateTime;
- (void)resetLocalBoardManagerListCache:(id)arg1;
- (id)localBoardManagerListCache;
- (void)setShowGroupFeedInstructionFlag:(_Bool)arg1;
- (_Bool)hasShowGroupFeedInstruction;
- (void)setSomeBoardAdministatorFlag:(_Bool)arg1;
- (_Bool)isSomeBoardAdministrator;
- (void)setBoardReportContent:(id)arg1;
- (id)boardReportContent;
- (void)setDressUpItem:(id)arg1;
- (id)dressUpItem;
- (void)setDiscoverEmotionItem:(id)arg1;
- (id)discoverEmotionItem;
- (void)setTiebaLastUpdateTimeStamp:(double)arg1;
- (double)tiebaLastUpdateTimestamp;
- (void)setLastSignInIntroTime:(id)arg1;
- (id)lastSignInIntroTime;
- (void)setTimeStamp:(double)arg1 withKey:(id)arg2;
- (double)timeStampWithKey:(id)arg1;
- (void)setHasNewEmotion:(_Bool)arg1;
- (_Bool)hasNewEmotion;
- (void)setFreeEmotionPacketIDs:(id)arg1;
- (id)freeEmotionPacketIDs;
- (void)setFreeEmotionsLastUpdateTime:(id)arg1;
- (id)freeEmotionsLastUpdateTime;
- (void)setHotestEmotionsLastUpdateTime:(id)arg1;
- (id)hotestEmotionsLastUpdateTime;
- (void)setLatestEmotionsLastUpdateTime:(id)arg1;
- (id)latestEmotionsLastUpdateTime;
- (void)setBoardInFlag;
- (_Bool)boardFirstIn;
- (void)setHasNewBoardFlag:(_Bool)arg1;
- (_Bool)hasNewBoard;
- (void)setNearbyUserArrayVersion:(long long)arg1;
- (long long)nearbyUserArrayVersion;
- (void)setNearbyModelArray:(id)arg1;
- (id)nearbyModelArray;
- (void)setBoardCommentMeList:(id)arg1;
- (id)BoardCommentMeList;
- (long long)greetingGuideFlag;
- (void)setGreetingGuideFlag:(long long)arg1;
- (void)setBoardAgreementFlag;
- (_Bool)isBoardAgreement;
- (void)setCountOfMyBoards:(long long)arg1;
- (long long)countOfMyBoards;
- (void)setCreatingBoardCount:(long long)arg1;
- (long long)countOfCreatingBoard;
- (id)gameProfileDictWithId:(id)arg1;
- (void)setGameProfileDict:(id)arg1 withId:(id)arg2;
- (void)setRecommendBoardIds:(id)arg1;
- (id)recommendBoardIdsArray;
- (void)setAllMyBoardsListWithIdsArray:(id)arg1;
- (id)boardIdsInAllMyBoardsList;
- (void)setCreatingBoardMainPageDict:(id)arg1;
- (id)creatingBoardMainPageDict;
- (void)setMyBoardIdsInBoardHomeWithIdsArray:(id)arg1;
- (id)myBoardIdsInBoardHome;
- (void)setCustomRingtone:(id)arg1;
- (id)customRingtone;
- (void)setChatBubble:(id)arg1;
- (id)chatBubble;
- (void)setWorldBackground:(id)arg1;
- (id)worldBackground;
- (id)boardCategoryList;
- (void)setBoardCategoryList:(id)arg1;
- (void)setAllMyBoardListLastUpdateTime:(id)arg1;
- (id)allMyBoardListLastUpdateTime;
- (void)setCommentMeList:(id)arg1;
- (id)commentMeList;
- (void)setBoardListLastUpdateTime:(id)arg1 categoryID:(id)arg2;
- (id)boardListLastUpdateTimeWithCategoryID:(id)arg1;
- (void)setBoardListLastUpdateTime:(id)arg1;
- (id)boardListLastUpdateTime;
- (void)setBoardCategoryListLastUpdateTime:(id)arg1;
- (id)boardCategoryListLastUpdateTime;
- (void)updateCloseDateForIAd:(id)arg1;
- (id)closeDateForIAd:(id)arg1;
- (void)updateShareGroupListJsonString:(id)arg1;
- (id)shareGroupDictionaryDate;
- (id)shareGroupDictionary;
- (void)updateShareFriendListJsonString:(id)arg1;
- (id)shareFriendListDate;
- (id)shareFriendList;
- (void)setBoardLastUpdateTime:(id)arg1;
- (id)boardLastUpdateTime;
- (void)changeMessageIgnoreList:(id)arg1 addOrNot:(_Bool)arg2;
- (id)messageIgnoreList;
- (void)removeReachabilityLogAt:(long long)arg1;
- (id)reachabilityLogAt:(long long)arg1;
- (id)reachabilityLog;
- (void)setReachabilityLog:(id)arg1;
- (void)addReachabilityLog:(id)arg1;
- (void)setLiveNoticeSetContent:(id)arg1;
- (id)liveNoticeSetContent;
- (void)setLiveNoticeUnreadCount:(long long)arg1;
- (long long)liveNoticeUnreadCount;
- (void)setCircleJoinNoticeUnreadCount:(long long)arg1;
- (long long)circleJoinNoticeUnreadCount;
- (void)setCircleNoticeUnreadCount:(long long)arg1;
- (long long)circleNoticeUnreadCount;
- (void)setGroupNoticeUnreadCount:(long long)arg1;
- (long long)groupNoticeUnreadCount;
- (void)setMomentNoticeUnreadCount:(long long)arg1;
- (long long)momentNoticeUnreadCount;
- (void)setMomentGiftUnreadCount:(long long)arg1;
- (long long)momentGiftUnreadCount;
- (void)setMomentCommentUnreadCount:(long long)arg1;
- (long long)momentCommentUnreadCount;
- (void)setMomentLikeUnreadCount:(long long)arg1;
- (long long)momentLikeUnreadCount;
- (void)setLikeMeUnreadCount:(long long)arg1;
- (long long)likeMeUnreadCount;
- (void)setCommentUnreadCount:(long long)arg1;
- (long long)commentUnreadCount;
- (void)setUnreadCount:(long long)arg1 discoverNoticeType:(int)arg2;
- (long long)unreadCountOfDiscoverNoticeType:(int)arg1;
- (id)dbkeyOfDiscoverNoticeType:(int)arg1;
- (_Bool)hasClearedNoticeFlag;
- (void)setHasClearedNoticeFlag:(_Bool)arg1;
- (_Bool)sharedToQQZoneState;
- (void)setSharedToQQZoneState:(_Bool)arg1;
- (_Bool)sharedToFeedState;
- (void)setSharedToFeedState:(_Bool)arg1;
- (_Bool)sharedToWeixinState;
- (void)setSharedToWeixinState:(_Bool)arg1;
- (_Bool)sharedToTCWeiboState;
- (void)setSharedToTCWeiboState:(_Bool)arg1;
- (_Bool)sharedToRenrenState;
- (void)setSharedToRenrenState:(_Bool)arg1;
- (_Bool)sharedToSinaState;
- (void)setSharedToSinaState:(_Bool)arg1;
- (_Bool)showTagTuturialBefore;
- (void)setShowTagTuturialBefore:(_Bool)arg1;
- (void)setHasShowedNewInGroupSettingPageOnRenrenCell;
- (_Bool)isHasShowedNewInGroupSettingPageOnRenrenCell;
- (void)setHasShowedNewInGroupSettingPageOnTencentWeiboCell;
- (_Bool)isHasShowedNewInGroupSettingPageOnTencentWeiboCell;
- (void)setHasShowedNewInGroupSettingPageOnInviteFriendCell;
- (_Bool)isHasShowedNewInGroupSettingPageOnInviteFriendCell;
- (void)setFlyTemplatesLastUpdateDate:(id)arg1;
- (id)flyTemplatesLastUpdateDate;
- (void)setOfficialAccountLastUpdateDate:(id)arg1;
- (id)officialAccountLastUpdateDate;
- (void)setEmotionConfigLastUpdateDate:(id)arg1;
- (id)emotionConfigLastUpdateDate;
- (void)setAvailableeEmotionCheckingDate:(id)arg1;
- (id)availableEmotionCheckingDate;
- (id)myEmotionLastUpdateTime;
- (void)setMyEmotionLastUpdateTime:(id)arg1;
- (_Bool)failedUploadingFlag;
- (void)setFailedUploadingFlag:(_Bool)arg1;
- (_Bool)toUploadFlag;
- (void)setToUploadFlag:(_Bool)arg1;
- (id)failedUploadingArray;
- (void)setFailedUploadingArray:(id)arg1;
- (id)toUploadItemArray;
- (void)setToUploadItemArray:(id)arg1;
- (id)shopCommentList;
- (void)setShopCommentList:(id)arg1;
- (id)myCommentList;
- (void)setMyCommentList:(id)arg1;
- (id)vipServiceExplain;
- (void)setVipServiceExplain:(id)arg1;
- (long long)partyFilterSortOption;
- (void)setPartyFilterSortOption:(long long)arg1;
- (long long)partyFilterTypeOption;
- (void)setPartyFilterTypeOption:(long long)arg1;
- (long long)isStealthDescForChatShowing;
- (void)setStealthTipForFeedShowing:(long long)arg1;
- (long long)partyFilterTimeOption;
- (void)setPartyFilterTimeOption:(long long)arg1;
- (id)newGroupIdsOfFirstLoading;
- (void)setNewGroupIdsOfFirstLoading:(id)arg1;
- (void)setDiscoverPartyDescription:(id)arg1;
- (id)discoverPartyDescription;
- (void)setDiscoverFeedDescription:(id)arg1;
- (id)discoverFeedDescription;
- (void)setDiscoverGroupDescription:(id)arg1;
- (id)discoverGroupDescription;
- (void)setGameCenterLastUpdateTime:(id)arg1;
- (id)gameCenterLastUpdateTime;
- (void)setDiscoverLastUpdateTimeWithDate:(id)arg1;
- (id)discoverLastUpdateTime;
- (id)getArrayListWithKey:(id)arg1;
- (void)saveArrayList:(id)arg1 withKey:(id)arg2;
- (id)getItemWithKey:(id)arg1;
- (void)saveCodingItem:(id)arg1 withKey:(id)arg2;
- (id)dataValueWithKey:(id)arg1;
- (void)upsertWithKey:(id)arg1 dataValue:(id)arg2;
- (long long)integerValueWithKey:(id)arg1;
- (void)upsertWithKey:(id)arg1 integerValue:(long long)arg2;
- (void)upsertDictionary:(id)arg1 withkey:(id)arg2;
- (id)dictionaryWithKey:(id)arg1;
- (id)stringValueWithKey:(id)arg1;
- (void)upsertWithKey:(id)arg1 stringValue:(id)arg2 date:(id)arg3;
- (void)upsertWithKey:(id)arg1 stringValue:(id)arg2;
- (id)dateWithKey:(id)arg1;
- (void)upsertWithKey:(id)arg1 date:(id)arg2;
- (id)nearbyFeedIdList;
- (void)setNearbyFeedIdList:(id)arg1;
- (void)setArrayForKey:(id)arg1 key:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (void)removeForKey:(id)arg1;
- (void)ensureDbTables;
@property(readonly) MFSimpleDatabase *currentDB;
- (void)dealloc;
- (id)initWithMFDB:(id)arg1;

@end

