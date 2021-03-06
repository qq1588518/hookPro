//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IMMLanguageMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PluginUtilMgr : MMService <MMService, IMMLanguageMgrExt>
{
    NSDictionary *m_dicNameToType;
    NSArray *m_arrNames;
    NSArray *m_arrLocalizedNickNames;
    NSArray *m_arrOfficialNames;
    NSArray *m_arrLocalizedOfficialNickNames;
}

- (void).cxx_destruct;
- (void)onLanguageChange;
- (void)refreshLocalizedName;
- (id)getWenxinAliasName;
- (id)getOfficialLocalizedNickNameWithType:(int)arg1;
- (id)getOfficialUserNameWithType:(int)arg1;
- (_Bool)hasOfficialExpectWeixinUserNmae:(id)arg1;
- (_Bool)hasOfficialUserName:(id)arg1;
- (id)getPluginLocalizedNickName:(int)arg1;
- (int)nameToPluginType:(id)arg1;
- (id)getPluginNameList;
- (id)pluginTypeToName:(int)arg1;
- (void)dealloc;
- (id)init;
- (void)initOfficialName;
- (void)initLocalizedOfficialName;
- (void)initLocalizedName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

