//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@interface TBARNavPlugin : WVDynamicHandler
{
}

+ (void)setDestination:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)stopGPSNavigation:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)startGPSNavigation:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)isGPSAvailable:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)setDirection:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)setGPSError:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)getWalkDirection:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)isInitSuccess:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)stopARNavigation:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
+ (void)startARNavigation:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)reset3DPosition:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;

@end

