//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, PageKitTemplateManager;

@interface TBQGTemplateService : NSObject
{
    PageKitTemplateManager *_tbqgTemplateManager;	// 8 = 0x8
    NSMutableDictionary *_templates;	// 16 = 0x10
    NSMutableDictionary *_templatesHeight;	// 24 = 0x18
    NSDictionary *_templateDefaultVersionMapDict;	// 32 = 0x20
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *templateDefaultVersionMapDict; // @synthesize templateDefaultVersionMapDict=_templateDefaultVersionMapDict;
@property(retain, nonatomic) NSMutableDictionary *templatesHeight; // @synthesize templatesHeight=_templatesHeight;
@property(retain, nonatomic) NSMutableDictionary *templates; // @synthesize templates=_templates;
@property(retain, nonatomic) PageKitTemplateManager *tbqgTemplateManager; // @synthesize tbqgTemplateManager=_tbqgTemplateManager;
- (void).cxx_destruct;
- (void)registerDefaultTemplate:(id)arg1;
- (void)registerDefaultTemplates;
- (id)registerTemplate:(id)arg1;
- (void)registerTemplates:(id)arg1;
- (double)heightForTemplate:(id)arg1;
- (id)loadTemplate:(id)arg1;
- (id)init;

@end

