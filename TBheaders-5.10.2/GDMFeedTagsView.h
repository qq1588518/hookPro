//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UILabel;

@interface GDMFeedTagsView : UIView
{
    NSString *_productNum;	// 8 = 0x8
    NSArray *_tagList;	// 16 = 0x10
    UILabel *_productNumLabel;	// 24 = 0x18
    UILabel *_tagListLabel;	// 32 = 0x20
}

+ (double)tagsViewHeight;
@property(retain, nonatomic) UILabel *tagListLabel; // @synthesize tagListLabel=_tagListLabel;
@property(retain, nonatomic) UILabel *productNumLabel; // @synthesize productNumLabel=_productNumLabel;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) NSString *productNum; // @synthesize productNum=_productNum;
- (void).cxx_destruct;
- (id)init;

@end
