//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDMViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;

@interface GDMDarenShareViewController : GDMViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_cellModels;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *cellModels; // @synthesize cellModels=_cellModels;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)chooseButtonAction:(id)arg1 atIndexPath:(id)arg2;
- (id)parseCells:(id)arg1;
- (id)cellsArrayFromJsonDic:(id)arg1;
- (_Bool)isLoadCompletedFromJsonDic:(id)arg1;
- (void)requestListMore;
- (void)requestList;
- (void)stopLoadmore;
- (void)stopRefresh;
- (void)startLoadmoreData;
- (void)startRefreshData;
- (void)initTableViewUpdate;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

