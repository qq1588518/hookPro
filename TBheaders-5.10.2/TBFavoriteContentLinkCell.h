//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class TBFavContentService, TBFavorContentItem, TBIconFontButton, UIButton, UIImageView, UILabel, UIView;
@protocol TBFavoriteContentLinkCellFavoriteDelegate;

@interface TBFavoriteContentLinkCell : UITableViewCell
{
    TBFavorContentItem *_favContentItem;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
    id <TBFavoriteContentLinkCellFavoriteDelegate> _favoriteDelegate;	// 24 = 0x18
    CDUnknownBlockType _deleteConentItemForCellBlock;	// 32 = 0x20
    UIImageView *_linkImageView;	// 40 = 0x28
    UILabel *_linkTitleLabel;	// 48 = 0x30
    UILabel *_linkDespLabel;	// 56 = 0x38
    UIImageView *_linkfromImageView;	// 64 = 0x40
    UILabel *_linkDateLabel;	// 72 = 0x48
    UIButton *_linkMoreButton;	// 80 = 0x50
    UIView *_linkSeparatorLine;	// 88 = 0x58
    TBFavContentService *_favContentService;	// 96 = 0x60
    TBIconFontButton *_favoriteButton;	// 104 = 0x68
}

@property(retain, nonatomic) TBIconFontButton *favoriteButton; // @synthesize favoriteButton=_favoriteButton;
@property(retain, nonatomic) TBFavContentService *favContentService; // @synthesize favContentService=_favContentService;
@property(retain, nonatomic) UIView *linkSeparatorLine; // @synthesize linkSeparatorLine=_linkSeparatorLine;
@property(retain, nonatomic) UIButton *linkMoreButton; // @synthesize linkMoreButton=_linkMoreButton;
@property(retain, nonatomic) UILabel *linkDateLabel; // @synthesize linkDateLabel=_linkDateLabel;
@property(retain, nonatomic) UIImageView *linkfromImageView; // @synthesize linkfromImageView=_linkfromImageView;
@property(retain, nonatomic) UILabel *linkDespLabel; // @synthesize linkDespLabel=_linkDespLabel;
@property(retain, nonatomic) UILabel *linkTitleLabel; // @synthesize linkTitleLabel=_linkTitleLabel;
@property(retain, nonatomic) UIImageView *linkImageView; // @synthesize linkImageView=_linkImageView;
@property(copy, nonatomic) CDUnknownBlockType deleteConentItemForCellBlock; // @synthesize deleteConentItemForCellBlock=_deleteConentItemForCellBlock;
@property(nonatomic) __weak id <TBFavoriteContentLinkCellFavoriteDelegate> favoriteDelegate; // @synthesize favoriteDelegate=_favoriteDelegate;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBFavorContentItem *favContentItem; // @synthesize favContentItem=_favContentItem;
- (void).cxx_destruct;
- (void)didTapMoreButton;
- (void)didTapStarButton:(id)arg1;
- (void)renderCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

