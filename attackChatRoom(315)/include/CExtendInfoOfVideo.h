//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CMessageWrap.h"

@interface CExtendInfoOfVideo : NSObject
{
    unsigned int m_uiVideoLen;	// 8 = 0x8
    unsigned int m_uiVideoTime;	// 12 = 0xc
    unsigned int m_uiUploadStatus;	// 16 = 0x10
    unsigned int m_uiVideoOffset;	// 20 = 0x14
    unsigned int m_uiCameraType;	// 24 = 0x18
    unsigned int m_uiVideoSource;	// 28 = 0x1c
    NSString *m_nsAesKey;	// 32 = 0x20
    NSString *m_nsMsgDataUrl;	// 40 = 0x28
    NSString *m_nsMsgThumbUrl;	// 48 = 0x30
    NSString *m_nsMsgThumbAesKey;	// 56 = 0x38
    unsigned int m_uiMsgThumbSize;	// 64 = 0x40
    unsigned int m_uiMsgThumbWidth;	// 68 = 0x44
    unsigned int m_uiMsgThumbHeight;	// 72 = 0x48
    NSString *m_nsAutoDownloadControl;	// 80 = 0x50
    NSString *m_nsStatExtStr;	// 88 = 0x58
    NSString *m_nsCommentUrl;	// 96 = 0x60
    NSString *m_nsFileParam;	// 104 = 0x68
    NSString *m_nsStreamVideoUrl;	// 112 = 0x70
    unsigned int m_uiStreamVideoTime;	// 120 = 0x78
    NSString *m_nsStreamVideoTitle;	// 128 = 0x80
    NSString *m_nsStreamVideoWording;	// 136 = 0x88
    NSString *m_nsStreamVideoWebUrl;	// 144 = 0x90
    NSString *m_nsStreamVideoThumbUrl;	// 152 = 0x98
    NSString *m_nsStreamVideoPublishId;	// 160 = 0xa0
    NSString *m_nsStreamVideoAdUxInfo;	// 168 = 0xa8
    NSString *m_nsMsgMd5;	// 176 = 0xb0
    int m_nDownloadLimit;	// 184 = 0xb8
    CMessageWrap *m_refMessageWrap;	// 192 = 0xc0
}

+ (void)CreateVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 MsgType:(unsigned int)arg4 retMessageWrap:(id *)arg5;
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@property(nonatomic) int m_nDownloadLimit; // @synthesize m_nDownloadLimit;
@property(retain, nonatomic) NSString *m_nsMsgMd5; // @synthesize m_nsMsgMd5;
@property(retain, nonatomic) NSString *m_nsStatExtStr; // @synthesize m_nsStatExtStr;
@property(retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo; // @synthesize m_nsStreamVideoAdUxInfo;
@property(retain, nonatomic) NSString *m_nsStreamVideoPublishId; // @synthesize m_nsStreamVideoPublishId;
@property(retain, nonatomic) NSString *m_nsStreamVideoThumbUrl; // @synthesize m_nsStreamVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWebUrl; // @synthesize m_nsStreamVideoWebUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWording; // @synthesize m_nsStreamVideoWording;
@property(retain, nonatomic) NSString *m_nsStreamVideoTitle; // @synthesize m_nsStreamVideoTitle;
@property(nonatomic) unsigned int m_uiStreamVideoTime; // @synthesize m_uiStreamVideoTime;
@property(retain, nonatomic) NSString *m_nsStreamVideoUrl; // @synthesize m_nsStreamVideoUrl;
@property(retain, nonatomic) NSString *m_nsFileParam; // @synthesize m_nsFileParam;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(retain, nonatomic) NSString *m_nsMsgDataUrl; // @synthesize m_nsMsgDataUrl;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsCommentUrl; // @synthesize m_nsCommentUrl;
@property(retain, nonatomic) NSString *m_nsMsgThumbUrl; // @synthesize m_nsMsgThumbUrl;
@property(retain, nonatomic) NSString *m_nsMsgThumbAesKey; // @synthesize m_nsMsgThumbAesKey;
@property(nonatomic) unsigned int m_uiVideoTime; // @synthesize m_uiVideoTime;
@property(nonatomic) unsigned int m_uiVideoSource; // @synthesize m_uiVideoSource;
@property(nonatomic) unsigned int m_uiVideoOffset; // @synthesize m_uiVideoOffset;
@property(nonatomic) unsigned int m_uiVideoLen; // @synthesize m_uiVideoLen;
@property(nonatomic) unsigned int m_uiUploadStatus; // @synthesize m_uiUploadStatus;
@property(nonatomic) unsigned int m_uiCameraType; // @synthesize m_uiCameraType;
@property(retain, nonatomic) NSString *m_nsAutoDownloadControl; // @synthesize m_nsAutoDownloadControl;
@property(nonatomic) unsigned int m_uiMsgThumbWidth; // @synthesize m_uiMsgThumbWidth;
@property(nonatomic) unsigned int m_uiMsgThumbSize; // @synthesize m_uiMsgThumbSize;
@property(nonatomic) unsigned int m_uiMsgThumbHeight; // @synthesize m_uiMsgThumbHeight;

- (void)SetPlayed;
- (_Bool)IsUnPlayed;
- (_Bool)IsDownloadEnded;
- (id)GetDownloadThumbPath;
- (id)GetThumbPath;
- (void)UpdateVideoStatus:(id)arg1;
- (void)ChangeForBackup;
- (void)UpdateContent:(id)arg1;
- (id)xmlOfStreamVideo;
- (void)parseStreamVideoNode:(struct XmlReaderNode_t *)arg1;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

