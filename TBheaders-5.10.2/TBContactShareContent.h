//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBContactServiceShareItemProtocol-Protocol.h"

@class NSDictionary, NSString, UIView;

@interface TBContactShareContent : NSObject <TBContactServiceShareItemProtocol>
{
    NSString *_imageUrl;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_linkUrl;	// 24 = 0x18
    NSString *_source;	// 32 = 0x20
    UIView *_shareView;	// 40 = 0x28
    NSString *_businessContent;	// 48 = 0x30
    NSString *_businessId;	// 56 = 0x38
    NSString *_shareId;	// 64 = 0x40
    NSDictionary *_extentInfoMap;	// 72 = 0x48
}

@property(retain, nonatomic) NSDictionary *extentInfoMap; // @synthesize extentInfoMap=_extentInfoMap;
@property(retain, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(retain, nonatomic) NSString *businessContent; // @synthesize businessContent=_businessContent;
@property(retain, nonatomic) UIView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

