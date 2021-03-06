//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MDGameProfile : NSObject
{
    NSString *g_id;
    NSString *g_name;
    NSString *g_icon;
    NSString *g_summ;
    NSString *g_store;
    NSString *g_backUrl;
    NSArray *g_pics;
    NSString *g_mcountString;
    NSString *g_detailDeveloper;
    NSString *g_detailNotice;
    NSString *g_detailSize;
    NSString *g_detailUptime;
    NSString *g_detailVersion;
    NSString *g_buttonDesc;
    NSString *g_announceContent;
    NSString *g_announceActionString;
    NSString *g_videoURLString;
    NSArray *g_extend;
    int g_picsHeight;
    int g_picsWidth;
    _Bool g_hasAuthored;
    _Bool g_showGameIcon;
    _Bool _g_canBeSubscribe;
    _Bool _g_isSubscribed;
    NSString *_g_boardID;
    NSArray *_g_postArr;
    NSArray *_g_groupExtend;
}

+ (id)dictionaryToGameProfile:(id)arg1;
@property(nonatomic) _Bool g_isSubscribed; // @synthesize g_isSubscribed=_g_isSubscribed;
@property(nonatomic) _Bool g_canBeSubscribe; // @synthesize g_canBeSubscribe=_g_canBeSubscribe;
@property(retain, nonatomic) NSArray *g_groupExtend; // @synthesize g_groupExtend=_g_groupExtend;
@property(retain, nonatomic) NSArray *g_postArr; // @synthesize g_postArr=_g_postArr;
@property(retain, nonatomic) NSString *g_boardID; // @synthesize g_boardID=_g_boardID;
@property(copy, nonatomic) NSString *g_videoURLString; // @synthesize g_videoURLString;
@property(retain, nonatomic) NSArray *g_extend; // @synthesize g_extend;
@property(nonatomic) _Bool g_showGameIcon; // @synthesize g_showGameIcon;
@property(nonatomic) _Bool g_hasAuthored; // @synthesize g_hasAuthored;
@property(copy, nonatomic) NSString *g_announceActionString; // @synthesize g_announceActionString;
@property(copy, nonatomic) NSString *g_announceContent; // @synthesize g_announceContent;
@property(retain, nonatomic) NSString *g_buttonDesc; // @synthesize g_buttonDesc;
@property(nonatomic) int g_picsWidth; // @synthesize g_picsWidth;
@property(nonatomic) int g_picsHeight; // @synthesize g_picsHeight;
@property(retain, nonatomic) NSString *g_detailVersion; // @synthesize g_detailVersion;
@property(retain, nonatomic) NSString *g_detailUptime; // @synthesize g_detailUptime;
@property(retain, nonatomic) NSString *g_detailSize; // @synthesize g_detailSize;
@property(retain, nonatomic) NSString *g_detailNotice; // @synthesize g_detailNotice;
@property(retain, nonatomic) NSString *g_detailDeveloper; // @synthesize g_detailDeveloper;
@property(copy, nonatomic) NSString *g_mcountString; // @synthesize g_mcountString;
@property(retain, nonatomic) NSArray *g_pics; // @synthesize g_pics;
@property(retain, nonatomic) NSString *g_backUrl; // @synthesize g_backUrl;
@property(retain, nonatomic) NSString *g_store; // @synthesize g_store;
@property(retain, nonatomic) NSString *g_summ; // @synthesize g_summ;
@property(retain, nonatomic) NSString *g_icon; // @synthesize g_icon;
@property(retain, nonatomic) NSString *g_name; // @synthesize g_name;
@property(retain, nonatomic) NSString *g_id; // @synthesize g_id;
- (void)dealloc;

@end

