//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, NSString;

@interface TBSNSListContainerHeaderItem : TBJSONModel
{
    NSString *_pageId;	// 8 = 0x8
    NSString *_pageName;	// 16 = 0x10
    NSString *_url;	// 24 = 0x18
    long long _pageHeight;	// 32 = 0x20
    long long _pageWidth;	// 40 = 0x28
    long long _aggregationType;	// 48 = 0x30
    long long _scheme;	// 56 = 0x38
    NSString *_headerDataVersion;	// 64 = 0x40
    NSDictionary *_headerData;	// 72 = 0x48
}

@property(retain, nonatomic) NSDictionary *headerData; // @synthesize headerData=_headerData;
@property(retain, nonatomic) NSString *headerDataVersion; // @synthesize headerDataVersion=_headerDataVersion;
@property(nonatomic) long long scheme; // @synthesize scheme=_scheme;
@property(nonatomic) long long aggregationType; // @synthesize aggregationType=_aggregationType;
@property(nonatomic) long long pageWidth; // @synthesize pageWidth=_pageWidth;
@property(nonatomic) long long pageHeight; // @synthesize pageHeight=_pageHeight;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
- (void).cxx_destruct;
- (double)getHeaderH;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

