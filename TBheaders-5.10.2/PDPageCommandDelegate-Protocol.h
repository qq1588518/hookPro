//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDCommandDelegate-Protocol.h"

@class NSNumber, NSString, PDPageDomain;

@protocol PDPageCommandDelegate <PDCommandDelegate>

@optional
- (void)domain:(PDPageDomain *)arg1 setTouchEmulationEnabledWithEnabled:(NSNumber *)arg2 callback:(void (^)(id))arg3;
- (void)domain:(PDPageDomain *)arg1 canOverrideDeviceOrientationWithCallback:(void (^)(NSNumber *, id))arg2;
- (void)domain:(PDPageDomain *)arg1 clearDeviceOrientationOverrideWithCallback:(void (^)(id))arg2;
- (void)domain:(PDPageDomain *)arg1 setDeviceOrientationOverrideWithAlpha:(NSNumber *)arg2 beta:(NSNumber *)arg3 gamma:(NSNumber *)arg4 callback:(void (^)(id))arg5;
- (void)domain:(PDPageDomain *)arg1 canOverrideGeolocationWithCallback:(void (^)(NSNumber *, id))arg2;
- (void)domain:(PDPageDomain *)arg1 clearGeolocationOverrideWithCallback:(void (^)(id))arg2;
- (void)domain:(PDPageDomain *)arg1 setGeolocationOverrideWithLatitude:(NSNumber *)arg2 longitude:(NSNumber *)arg3 accuracy:(NSNumber *)arg4 callback:(void (^)(id))arg5;
- (void)domain:(PDPageDomain *)arg1 setScriptExecutionDisabledWithValue:(NSNumber *)arg2 callback:(void (^)(id))arg3;
- (void)domain:(PDPageDomain *)arg1 getScriptExecutionStatusWithCallback:(void (^)(NSString *, id))arg2;
- (void)domain:(PDPageDomain *)arg1 setShowPaintRectsWithResult:(NSNumber *)arg2 callback:(void (^)(id))arg3;
- (void)domain:(PDPageDomain *)arg1 setDeviceMetricsOverrideWithWidth:(NSNumber *)arg2 height:(NSNumber *)arg3 fontScaleFactor:(NSNumber *)arg4 fitWindow:(NSNumber *)arg5 callback:(void (^)(id))arg6;
- (void)domain:(PDPageDomain *)arg1 canOverrideDeviceMetricsWithCallback:(void (^)(NSNumber *, id))arg2;
- (void)domain:(PDPageDomain *)arg1 setDocumentContentWithFrameId:(NSString *)arg2 html:(NSString *)arg3 callback:(void (^)(id))arg4;
- (void)domain:(PDPageDomain *)arg1 searchInResourcesWithText:(NSString *)arg2 caseSensitive:(NSNumber *)arg3 isRegex:(NSNumber *)arg4 callback:(void (^)(NSArray *, id))arg5;
- (void)domain:(PDPageDomain *)arg1 searchInResourceWithFrameId:(NSString *)arg2 url:(NSString *)arg3 query:(NSString *)arg4 caseSensitive:(NSNumber *)arg5 isRegex:(NSNumber *)arg6 callback:(void (^)(NSArray *, id))arg7;
- (void)domain:(PDPageDomain *)arg1 getResourceContentWithFrameId:(NSString *)arg2 url:(NSString *)arg3 callback:(void (^)(NSString *, NSNumber *, id))arg4;
- (void)domain:(PDPageDomain *)arg1 getResourceTreeWithCallback:(void (^)(PDPageFrameResourceTree *, id))arg2;
- (void)domain:(PDPageDomain *)arg1 deleteCookieWithCookieName:(NSString *)arg2 domain:(NSString *)arg3 callback:(void (^)(id))arg4;
- (void)domain:(PDPageDomain *)arg1 getCookiesWithCallback:(void (^)(NSArray *, NSString *, id))arg2;
- (void)domain:(PDPageDomain *)arg1 navigateWithUrl:(NSString *)arg2 callback:(void (^)(id))arg3;
- (void)domain:(PDPageDomain *)arg1 reloadWithIgnoreCache:(NSNumber *)arg2 scriptToEvaluateOnLoad:(NSString *)arg3 callback:(void (^)(id))arg4;
- (void)domain:(PDPageDomain *)arg1 removeScriptToEvaluateOnLoadWithIdentifier:(NSString *)arg2 callback:(void (^)(id))arg3;
- (void)domain:(PDPageDomain *)arg1 addScriptToEvaluateOnLoadWithScriptSource:(NSString *)arg2 callback:(void (^)(NSString *, id))arg3;
- (void)domain:(PDPageDomain *)arg1 disableWithCallback:(void (^)(id))arg2;
- (void)domain:(PDPageDomain *)arg1 enableWithCallback:(void (^)(id))arg2;
@end

