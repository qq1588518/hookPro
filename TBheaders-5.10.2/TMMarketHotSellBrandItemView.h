//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TMMarketHotSellBrandItem, UIImageView, UILabel;

@interface TMMarketHotSellBrandItemView : UIView
{
    TMMarketHotSellBrandItem *_brandItem;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_sellingLabel;	// 24 = 0x18
    UIImageView *_brandImgView;	// 32 = 0x20
    UIImageView *_badgeIcon;	// 40 = 0x28
}

@property(retain, nonatomic) UIImageView *badgeIcon; // @synthesize badgeIcon=_badgeIcon;
@property(retain, nonatomic) UIImageView *brandImgView; // @synthesize brandImgView=_brandImgView;
@property(retain, nonatomic) UILabel *sellingLabel; // @synthesize sellingLabel=_sellingLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TMMarketHotSellBrandItem *brandItem; // @synthesize brandItem=_brandItem;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

