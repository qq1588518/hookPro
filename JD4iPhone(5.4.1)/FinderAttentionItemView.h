//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FinderAttentionElementSubOptionModel, JDImageView, UIImageView, UILabel;

@interface FinderAttentionItemView : UIView
{
    JDImageView *_itemImageView;
    UIImageView *_itemMaskImageView;
    UILabel *_itemTitle;
    UILabel *_itemTag;
    UILabel *_itemPrice;
    FinderAttentionElementSubOptionModel *_model;
}

@property(retain, nonatomic) FinderAttentionElementSubOptionModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *itemPrice; // @synthesize itemPrice=_itemPrice;
@property(retain, nonatomic) UILabel *itemTag; // @synthesize itemTag=_itemTag;
@property(retain, nonatomic) UILabel *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain, nonatomic) UIImageView *itemMaskImageView; // @synthesize itemMaskImageView=_itemMaskImageView;
@property(retain, nonatomic) JDImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
- (void).cxx_destruct;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
