//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol EmoticonBackupOperateMgrExt <NSObject>

@optional
- (void)onStickyBackupEmoticonFailed:(NSArray *)arg1;
- (void)onStickyBackupEmoticonOK:(NSArray *)arg1;
- (void)onAddBackupEmoticonFailed:(NSString *)arg1 isOverLimit:(_Bool)arg2;
- (void)onAddBackupEmoticonOK:(NSString *)arg1;
- (void)onDeleteBackupEmoticonFailed:(NSArray *)arg1;
- (void)onDeleteBackupEmoticonOK:(NSArray *)arg1;
@end
