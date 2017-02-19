//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString, PLCrashReportProcessorInfo;

@interface PLCrashReportSystemInfo : NSObject
{
    int _operatingSystem;	// 8 = 0x8
    NSString *_osVersion;	// 16 = 0x10
    NSString *_osBuild;	// 24 = 0x18
    int _architecture;	// 32 = 0x20
    NSDate *_timestamp;	// 40 = 0x28
    PLCrashReportProcessorInfo *_processorInfo;	// 48 = 0x30
}

@property(readonly, nonatomic) PLCrashReportProcessorInfo *processorInfo; // @synthesize processorInfo=_processorInfo;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) int architecture; // @synthesize architecture=_architecture;
@property(readonly, nonatomic) NSString *operatingSystemBuild; // @synthesize operatingSystemBuild=_osBuild;
@property(readonly, nonatomic) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_osVersion;
@property(readonly, nonatomic) int operatingSystem; // @synthesize operatingSystem=_operatingSystem;
- (void)dealloc;
- (id)initWithOperatingSystem:(int)arg1 operatingSystemVersion:(id)arg2 operatingSystemBuild:(id)arg3 architecture:(int)arg4 processorInfo:(id)arg5 timestamp:(id)arg6;
- (id)initWithOperatingSystem:(int)arg1 operatingSystemVersion:(id)arg2 operatingSystemBuild:(id)arg3 architecture:(int)arg4 timestamp:(id)arg5;
- (id)initWithOperatingSystem:(int)arg1 operatingSystemVersion:(id)arg2 architecture:(int)arg3 timestamp:(id)arg4;

@end
