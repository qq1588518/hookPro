//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, UIImageView, UITapGestureRecognizer;
@protocol OTPageScrollViewDataSource, OTPageScrollViewDelegate;

@interface OTPageScrollView : UIScrollView
{
    float _leftRightOffset;	// 8 = 0x8
    double _padding;	// 16 = 0x10
    UIImageView *_backgroundView;	// 24 = 0x18
    long long _selectedIndex;	// 32 = 0x20
    NSArray *_visibleCell;	// 40 = 0x28
    NSMutableSet *_cacheCells;	// 48 = 0x30
    NSMutableDictionary *_visibleCellsMap;	// 56 = 0x38
    double _pageViewWith;	// 64 = 0x40
    id <OTPageScrollViewDataSource> _dataSource;	// 72 = 0x48
    UITapGestureRecognizer *_tapGesture;	// 80 = 0x50
    NSMutableArray *_viewsInPage;	// 88 = 0x58
    long long _numberOfCell;	// 96 = 0x60
    struct CGSize _cellSize;	// 104 = 0x68
}

@property(nonatomic) long long numberOfCell; // @synthesize numberOfCell=_numberOfCell;
@property(retain, nonatomic) NSMutableArray *viewsInPage; // @synthesize viewsInPage=_viewsInPage;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak id <OTPageScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) double pageViewWith; // @synthesize pageViewWith=_pageViewWith;
@property(retain, nonatomic) NSMutableDictionary *visibleCellsMap; // @synthesize visibleCellsMap=_visibleCellsMap;
@property(retain, nonatomic) NSMutableSet *cacheCells; // @synthesize cacheCells=_cacheCells;
@property(retain, nonatomic) NSArray *visibleCell; // @synthesize visibleCell=_visibleCell;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) float leftRightOffset; // @synthesize leftRightOffset=_leftRightOffset;
@property(nonatomic) double padding; // @synthesize padding=_padding;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)arg1;
- (id)viewForRowAtIndex:(long long)arg1;
- (void)reloadData;
- (void)initializeValue;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) __weak id <OTPageScrollViewDelegate> delegate;

@end
