//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableArray, NSString, UIImageView, UILabel;

@interface GDMTagTableViewCell : UITableViewCell
{
    NSString *_clickPage;	// 8 = 0x8
    NSArray *_buttonsArray;	// 16 = 0x10
    long long _currentIndex;	// 24 = 0x18
    UILabel *_headLabel;	// 32 = 0x20
    UIImageView *_headImage;	// 40 = 0x28
    NSMutableArray *_urlList;	// 48 = 0x30
    NSMutableArray *_tagList;	// 56 = 0x38
    NSMutableArray *_tagIdList;	// 64 = 0x40
    NSMutableArray *_tagSearchNameList;	// 72 = 0x48
}

+ (float)height;
@property(retain, nonatomic) NSMutableArray *tagSearchNameList; // @synthesize tagSearchNameList=_tagSearchNameList;
@property(retain, nonatomic) NSMutableArray *tagIdList; // @synthesize tagIdList=_tagIdList;
@property(retain, nonatomic) NSMutableArray *tagList; // @synthesize tagList=_tagList;
@property(retain, nonatomic) NSMutableArray *urlList; // @synthesize urlList=_urlList;
@property(nonatomic) __weak UIImageView *headImage; // @synthesize headImage=_headImage;
@property(nonatomic) __weak UILabel *headLabel; // @synthesize headLabel=_headLabel;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
- (void).cxx_destruct;
- (void)setClickPage:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)onDetailCallBack:(id)arg1;
- (void)touchButton:(id)arg1;
- (void)setTagItemList:(id)arg1;
- (void)awakeFromNib;

@end

