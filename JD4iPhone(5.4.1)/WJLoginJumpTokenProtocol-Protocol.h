//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol WJLoginJumpTokenProtocol <NSObject>

@optional
- (void)onJumpTokenError:(NSError *)arg1;
- (void)onJumpTokenFailed:(int)arg1 errorMessage:(NSString *)arg2;
- (void)onJumpTokenSuccess:(NSString *)arg1 url:(NSString *)arg2;
@end

