//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VOIPMgr.h"

@interface VOIPMgr (Talk)
- (void)SendLocalNetWorkChangeCmd:(int)arg1;
- (void)StopHWDec;
- (void)StopHWEnc;
- (void)TalkBroken:(id)arg1;
- (void)StopTalk;
- (void)ShowVideoView;
- (void)StartVideoData;
- (void)StartAudioData;
- (void)StartAudioDataInNewThread;
- (void)StartRecordAndPlayAudioForVoip;
- (void)StartTalk;
- (void)tryStartTalk;
@end
