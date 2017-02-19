//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseListViewModel.h"

#import "ITBOBucket-Protocol.h"

@class NSMutableArray, NSString;
@protocol TBOBannerInfoCard, TBOTopic;

@interface TBOCommunityListViewModel : TBOBaseListViewModel <ITBOBucket>
{
    _Bool _isExpand;	// 8 = 0x8
    NSMutableArray<TBOBannerInfoCard> *_todayCircles;	// 16 = 0x10
    NSMutableArray<TBOTopic> *_hotTopic;	// 24 = 0x18
    long long _circleNum;	// 32 = 0x20
    NSString *_addCircleUrl;	// 40 = 0x28
    NSString *_moreCircleUrl;	// 48 = 0x30
    NSString *_bucket;	// 56 = 0x38
    long long _cnt;	// 64 = 0x40
}

@property(nonatomic) long long cnt; // @synthesize cnt=_cnt;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
@property(retain, nonatomic) NSString *moreCircleUrl; // @synthesize moreCircleUrl=_moreCircleUrl;
@property(retain, nonatomic) NSString *addCircleUrl; // @synthesize addCircleUrl=_addCircleUrl;
@property(nonatomic) long long circleNum; // @synthesize circleNum=_circleNum;
@property(retain, nonatomic) NSMutableArray<TBOTopic> *hotTopic; // @synthesize hotTopic=_hotTopic;
@property(retain, nonatomic) NSMutableArray<TBOBannerInfoCard> *todayCircles; // @synthesize todayCircles=_todayCircles;
- (void).cxx_destruct;
- (void)refresh;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
- (void)onloaderCompleted:(struct MtopExtResponse *)arg1 succeeded:(_Bool)arg2;
- (id)data:(id)arg1;
- (long long)itemCount:(long long)arg1;
- (long long)sectionCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
