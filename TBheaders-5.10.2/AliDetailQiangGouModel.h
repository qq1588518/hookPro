//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailQiangGouModel : TBJSONModel
{
    long long _startTime;	// 8 = 0x8
    long long _endTime;	// 16 = 0x10
    long long _status;	// 24 = 0x18
    NSString *_soldText;	// 32 = 0x20
    NSString *_remindText;	// 40 = 0x28
    unsigned long long _progress;	// 48 = 0x30
    NSString *_progressText;	// 56 = 0x38
}

@property(copy, nonatomic) NSString *progressText; // @synthesize progressText=_progressText;
@property(nonatomic) unsigned long long progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *remindText; // @synthesize remindText=_remindText;
@property(copy, nonatomic) NSString *soldText; // @synthesize soldText=_soldText;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;

@end

