//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString, TBUpdateInfoModel;

@interface TBNewVersionModel : TBJSONModel
{
    NSString *_remindNum;	// 8 = 0x8
    NSString *_hasAvailableUpdate;	// 16 = 0x10
    TBUpdateInfoModel *_updateInfo;	// 24 = 0x18
}

@property(retain, nonatomic) TBUpdateInfoModel *updateInfo; // @synthesize updateInfo=_updateInfo;
@property(retain, nonatomic) NSString *hasAvailableUpdate; // @synthesize hasAvailableUpdate=_hasAvailableUpdate;
@property(retain, nonatomic) NSString *remindNum; // @synthesize remindNum=_remindNum;
- (void).cxx_destruct;

@end

