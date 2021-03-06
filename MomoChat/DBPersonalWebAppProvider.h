//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFSimpleDatabase;

@interface DBPersonalWebAppProvider : NSObject
{
    MFSimpleDatabase *_mfdb;
}

+ (id)providerWithMFDB:(id)arg1;
@property(retain, nonatomic) MFSimpleDatabase *mfdb; // @synthesize mfdb=_mfdb;
- (void)clearAppsNewFlag:(id)arg1;
- (void)clearNewFlagWithAppID:(id)arg1;
- (void)updateAllWebApps:(id)arg1;
- (id)allWebAppWithNewFlag:(_Bool *)arg1 customAppSet:(id)arg2;
- (id)allWebAppWithNewFlag:(_Bool *)arg1;
- (id)selectUsedColumNameArray;
- (id)appItemWithDBRow:(id)arg1;
- (void)deleteProfileWithAppID:(id)arg1;
- (void)upateItem:(id)arg1;
- (id)fieldDictionaryWithItem:(id)arg1;
- (void)ensureTableExist;
- (id)currentDBCollection;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end

