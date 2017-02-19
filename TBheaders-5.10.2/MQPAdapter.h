//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MQPIOManager, MQPProcDataHttp;

@interface MQPAdapter : NSObject
{
    MQPProcDataHttp *_procDataHttp;	// 8 = 0x8
    MQPIOManager *_ioManager;	// 16 = 0x10
}

+ (id)shared;
@property(retain, nonatomic) MQPIOManager *ioManager; // @synthesize ioManager=_ioManager;
@property(retain, nonatomic) MQPProcDataHttp *procDataHttp; // @synthesize procDataHttp=_procDataHttp;
- (void).cxx_destruct;
- (id)urlFromInfo:(id)arg1;
- (void)unpackHttpDataTask:(id)arg1;
- (void)packHttpDataTask:(id)arg1;
- (void)retryWithInfo:(id)arg1;
- (void)pushOneTask:(id)arg1;
- (id)getProcDataHttpImpl;
- (id)getIoMangerImpl;
- (void)close;

@end
