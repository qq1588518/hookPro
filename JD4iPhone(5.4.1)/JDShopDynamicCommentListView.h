//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDFooterLoadingView, JDStoreNetwork, NSMutableArray, NSNumber, NSString, UILabel, UITableView;

@interface JDShopDynamicCommentListView : UIView <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate>
{
    double emptyPanStartOffset;
    UIView *tableBgView;
    _Bool _bLoadingMore;
    _Bool _hasNextPage;
    id <JDShopDynamicCommentListViewDelegate> _delegate;
    UITableView *_commentTable;
    JDFooterLoadingView *_footerView;
    UIView *_emptyView;
    UILabel *_commentCountLabel;
    JDStoreNetwork *_netWork;
    NSMutableArray *_commentArray;
    long long _selecetedRow;
    NSNumber *_commentTotalCount;
}

@property(retain, nonatomic) NSNumber *commentTotalCount; // @synthesize commentTotalCount=_commentTotalCount;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) long long selecetedRow; // @synthesize selecetedRow=_selecetedRow;
@property(nonatomic) _Bool bLoadingMore; // @synthesize bLoadingMore=_bLoadingMore;
@property(retain, nonatomic) NSMutableArray *commentArray; // @synthesize commentArray=_commentArray;
@property(retain, nonatomic) JDStoreNetwork *netWork; // @synthesize netWork=_netWork;
@property(retain, nonatomic) UILabel *commentCountLabel; // @synthesize commentCountLabel=_commentCountLabel;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) JDFooterLoadingView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UITableView *commentTable; // @synthesize commentTable=_commentTable;
@property(nonatomic) __weak id <JDShopDynamicCommentListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)downArrowBtnClick:(long long)arg1;
- (float)caculateCellHeignt:(long long)arg1;
- (void)removeEmptyView;
- (void)showEmptyView;
- (void)refreshTableViewWithData:(id)arg1 haveMore:(_Bool)arg2 totalCount:(id)arg3;
- (void)deleteComment:(long long)arg1;
- (void)insertComment:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

