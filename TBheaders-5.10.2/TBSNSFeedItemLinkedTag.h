//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSNSFeedItemLinkedTag : TBJSONModel
{
    NSString *_tagName;	// 8 = 0x8
    NSString *_tagUrl;	// 16 = 0x10
    NSString *_tagColor;	// 24 = 0x18
}

@property(copy, nonatomic) NSString *tagColor; // @synthesize tagColor=_tagColor;
@property(copy, nonatomic) NSString *tagUrl; // @synthesize tagUrl=_tagUrl;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void).cxx_destruct;

@end

