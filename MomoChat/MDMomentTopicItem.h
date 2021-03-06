//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EtaModel.h"

@class NSDictionary, NSString;

@interface MDMomentTopicItem : EtaModel
{
    NSString *_topicID;
    NSString *_topicName;
    NSString *_topicInfo;
    NSString *_topicCover;
    NSString *_topicAvatar;
    unsigned long long _topicUpdateCount;
    NSString *_topicGoto;
    NSDictionary *_topicTagInfo;
}

+ (id)eta_jsonKeyPathsByProperty;
@property(retain, nonatomic) NSDictionary *topicTagInfo; // @synthesize topicTagInfo=_topicTagInfo;
@property(copy, nonatomic) NSString *topicGoto; // @synthesize topicGoto=_topicGoto;
@property(nonatomic) unsigned long long topicUpdateCount; // @synthesize topicUpdateCount=_topicUpdateCount;
@property(copy, nonatomic) NSString *topicAvatar; // @synthesize topicAvatar=_topicAvatar;
@property(copy, nonatomic) NSString *topicCover; // @synthesize topicCover=_topicCover;
@property(copy, nonatomic) NSString *topicInfo; // @synthesize topicInfo=_topicInfo;
@property(copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(copy, nonatomic) NSString *topicID; // @synthesize topicID=_topicID;
- (void).cxx_destruct;

@end

