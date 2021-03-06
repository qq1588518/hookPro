//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, UIView;

@protocol IJKMediaPlayback <NSObject>
@property(readonly, nonatomic) _Bool airPlayMediaActive;
@property(nonatomic) _Bool isDanmakuMediaAirPlay;
@property(nonatomic) _Bool allowsMediaAirPlay;
@property(nonatomic) _Bool shouldAutoplay;
@property(nonatomic) long long scalingMode;
@property(nonatomic) long long controlStyle;
@property(readonly, nonatomic) long long numberOfBytesTransferred;
@property(readonly, nonatomic) unsigned long long loadState;
@property(readonly, nonatomic) long long playbackState;
@property(readonly, nonatomic) _Bool isPreparedToPlay;
@property(readonly, nonatomic) long long bufferingProgress;
@property(readonly, nonatomic) double playableDuration;
@property(readonly, nonatomic) double duration;
@property(nonatomic) double currentPlaybackTime;
@property(readonly, nonatomic) UIView *view;
- (UIImage *)thumbnailImageAtCurrentTime;
- (unsigned int)getStreamCount;
- (unsigned long long)getFirstAudioRenderTime;
- (unsigned long long)getFirstVideoRenderTime;
- (unsigned long long)getFirstAudioDecodeTime;
- (unsigned long long)getFirstVideoDecodeTime;
- (unsigned long long)getFirstAudioReceiveTime;
- (unsigned long long)getFirstVideoReceiveTime;
- (unsigned long long)getStreamMetaTime;
- (unsigned long long)getTcpConnectTime;
- (unsigned long long)getMetaTime;
- (long long)getVideoRenderCount;
- (long long)getAudioRenderSize;
- (long long)getVideoDecodeCount;
- (long long)getAudioDecodeSize;
- (long long)getVideoCacheDuration;
- (long long)getAudioCacheDuration;
- (long long)getVideoReceiveSize;
- (long long)getAudioReceiveSize;
- (long long)getStreamReceiveSize;
- (unsigned long long)currentPlaybackPts;
- (float)playerSpeedRate;
- (void)setPlayerSpeedRate:(float)arg1;
- (NSString *)getServerIpAddr;
- (void)setMute:(_Bool)arg1;
- (void)setPauseInBackground:(_Bool)arg1;
- (void)shutdown;
- (_Bool)isPlaying;
- (void)stop;
- (void)pause;
- (void)play;
- (void)prepareToPlay;
@end

