//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailProtocolComponentRuleModel, NSArray, NSString;
@protocol AliDetailActionModel, AliDetailComponentLayoutModel;

@interface AliDetailComponentLayoutModel : TBJSONModel
{
    NSString *_ID;	// 8 = 0x8
    NSString *_key;	// 16 = 0x10
    NSString *_ruleId;	// 24 = 0x18
    NSArray<AliDetailComponentLayoutModel> *_children;	// 32 = 0x20
    NSArray<AliDetailActionModel> *_actions;	// 40 = 0x28
    AliDetailProtocolComponentRuleModel *_rule;	// 48 = 0x30
}

@property(retain, nonatomic) AliDetailProtocolComponentRuleModel *rule; // @synthesize rule=_rule;
@property(retain, nonatomic) NSArray<AliDetailActionModel> *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSArray<AliDetailComponentLayoutModel> *children; // @synthesize children=_children;
@property(retain, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 ruleId:(id)arg2;
- (id)initWithID:(id)arg1 key:(id)arg2;

@end

