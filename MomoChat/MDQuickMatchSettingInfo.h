//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MDQuickMatchSettingInfo : NSObject
{
    _Bool _isBlockContacts;
    _Bool _isBlockMomoFriends;
    _Bool _isMatching;
    unsigned long long _maxDistance;
    unsigned long long _minAge;
    unsigned long long _maxAge;
}

+ (id)propertyStringArray;
+ (id)dictionaryFromSettingInfo:(id)arg1;
+ (id)settingInfoFromDic:(id)arg1;
@property(nonatomic) _Bool isMatching; // @synthesize isMatching=_isMatching;
@property(nonatomic) _Bool isBlockMomoFriends; // @synthesize isBlockMomoFriends=_isBlockMomoFriends;
@property(nonatomic) _Bool isBlockContacts; // @synthesize isBlockContacts=_isBlockContacts;
@property(nonatomic) unsigned long long maxAge; // @synthesize maxAge=_maxAge;
@property(nonatomic) unsigned long long minAge; // @synthesize minAge=_minAge;
@property(nonatomic) unsigned long long maxDistance; // @synthesize maxDistance=_maxDistance;
- (_Bool)isEqualToSettingInf:(id)arg1;
- (void)copySettingInfoFromInfo:(id)arg1;
- (id)init;

@end
