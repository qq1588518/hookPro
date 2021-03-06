//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface WVPackageAppQueueInfo : NSObject
{
    NSString *_appName;	// 8 = 0x8
    unsigned long long _priority;	// 16 = 0x10
    CDUnknownBlockType _callback;	// 24 = 0x18
    CDUnknownBlockType _progressBlock;	// 32 = 0x20
}

@property(readonly, copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (id)initWithApp:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withProgress:(CDUnknownBlockType)arg3;
- (id)initWithApp:(id)arg1 withType:(long long)arg2;

@end

