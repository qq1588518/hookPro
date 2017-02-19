//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PDViewProtocol.h"
#import "SDWebImageManagerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDImageView, NSArray, NSMutableDictionary, NSString, NewProductModel, PDMainImagePlayVideoHelper, UIButton, UILabel, UITableView, WareInfoDataAccessObject, WareInfoMTAModel;

@interface WareBImageView : UIView <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, SDWebImageManagerDelegate, PDViewProtocol>
{
    UITableView *_contentView;
    UIView *_imageIndexView;
    UIView *_pageBgView;
    UIView *_imageIndexBackgroundView;
    UILabel *_imageIndexLabel;
    UILabel *_imageNumLabel;
    UILabel *_indexLabel;
    _Bool isPlaceholderImageViewAnimating;
    id <WareBImageViewDelegate> _delegate;
    NSArray *_items;
    NewProductModel *model_;
    JDImageView *_placeholderImageView;
    NSMutableDictionary *_imageLoadStatusResult;
    WareInfoMTAModel *_wareInfoMTAModel;
    UIButton *_playButton;
    WareInfoDataAccessObject *_dataAcessObject;
    PDMainImagePlayVideoHelper *_playHelper;
}

@property(retain, nonatomic) PDMainImagePlayVideoHelper *playHelper; // @synthesize playHelper=_playHelper;
@property(retain, nonatomic) WareInfoDataAccessObject *dataAcessObject; // @synthesize dataAcessObject=_dataAcessObject;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) WareInfoMTAModel *wareInfoMTAModel; // @synthesize wareInfoMTAModel=_wareInfoMTAModel;
@property(retain, nonatomic) NSMutableDictionary *imageLoadStatusResult; // @synthesize imageLoadStatusResult=_imageLoadStatusResult;
@property(retain, nonatomic) JDImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=model_;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) __weak id <WareBImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playVideo:(id)arg1;
- (void)prepareVideoPlay;
- (id)findImageViewInCell:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)downLoadImage:(id)arg1 imageView:(id)arg2 currentIndex:(long long)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
@property(nonatomic) long long currentRow;
- (void)reloadData;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (void)setPlaceholderImageViewWithImageUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
