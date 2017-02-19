//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPMsgBusHelp.h"

#import "TBIMSessionServiceAdapter-Protocol.h"

@class NSString, YHMuticastDelegate;
@protocol TBIMSessionServiceDelegate;

@interface TBIMSessionServiceBase : AMPMsgBusHelp <TBIMSessionServiceAdapter>
{
    YHMuticastDelegate<TBIMSessionServiceDelegate> *_mutiCastDelegate;	// 8 = 0x8
}

@property(retain, nonatomic) YHMuticastDelegate<TBIMSessionServiceDelegate> *mutiCastDelegate; // @synthesize mutiCastDelegate=_mutiCastDelegate;
- (void).cxx_destruct;
- (void)saveDraft:(id)arg1 draft:(id)arg2;
- (void)updateSession:(id)arg1 andIsRemind:(_Bool)arg2;
- (void)clearSessionMessage:(id)arg1;
- (void)updateSessions;
- (id)getSessions;
- (_Bool)leaveSession:(id)arg1;
- (_Bool)enterSession:(id)arg1;
- (void)sessionNotify:(id)arg1 changeType:(unsigned long long)arg2 cacheUsers:(id)arg3;
- (id)sessionTransfer:(id)arg1;
- (_Bool)removeSession:(id)arg1;
- (id)getSessionById:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)perparServiceWithSessionId:(id)arg1 withParam:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
