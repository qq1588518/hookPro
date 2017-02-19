//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAssetWriter, MLScreenRecorder, NSError, NSURL, UIImage;

@protocol MLScreenRecorderDelegate <NSObject>
- (void)screenRecorder:(MLScreenRecorder *)arg1 didFailToSaveImageToCameraRoll:(UIImage *)arg2 withError:(NSError *)arg3;
- (void)screenRecorder:(MLScreenRecorder *)arg1 didFailToSaveVideoToCameraRoll:(NSURL *)arg2 withError:(NSError *)arg3;
- (void)screenRecorder:(MLScreenRecorder *)arg1 didFailToRemoveFileAtPath:(NSURL *)arg2 withError:(NSError *)arg3;
- (void)screenRecorder:(MLScreenRecorder *)arg1 didFailToWriteBufferToVideoWriter:(AVAssetWriter *)arg2 withError:(NSError *)arg3;
- (void)screenRecorder:(MLScreenRecorder *)arg1 drawContextInactive:(NSURL *)arg2;
- (void)screenRecorder:(MLScreenRecorder *)arg1 recordTotalSize:(long long)arg2 recordTotalDuatuion:(double)arg3 recordSnapshot:(UIImage *)arg4;
- (void)screenRecorder:(MLScreenRecorder *)arg1 recordCurrentTimestamp:(double)arg2;
- (void)screenRecorder:(MLScreenRecorder *)arg1 screenSnapshot:(UIImage *)arg2;
@end
