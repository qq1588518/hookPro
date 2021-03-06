//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBaseBuilder.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, TBTradeServiceAddressModel, UITableView;

@interface TBExtBuyServiceAddressBuilder : TBExtBaseBuilder <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;	// 8 = 0x8
    TBTradeServiceAddressModel *_serviceAddressModel;	// 16 = 0x10
}

@property(retain, nonatomic) TBTradeServiceAddressModel *serviceAddressModel; // @synthesize serviceAddressModel=_serviceAddressModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)backButtonClick;
- (void)refreshUI;
- (void)buildContentToView:(id)arg1;
- (void)addNewAddress;
- (id)builderModel;
- (void)setBuilderModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

