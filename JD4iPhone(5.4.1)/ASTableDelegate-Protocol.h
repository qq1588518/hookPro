//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASCommonTableViewDelegate.h"
#import "NSObject.h"

@class ASBatchContext, ASCellNode, ASTableView, NSIndexPath;

@protocol ASTableDelegate <ASCommonTableViewDelegate, NSObject>

@optional
- (void)tableView:(ASTableView *)arg1 didEndDisplayingNodeForRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)shouldBatchFetchForTableView:(ASTableView *)arg1;
- (void)tableView:(ASTableView *)arg1 willBeginBatchFetchWithContext:(ASBatchContext *)arg2;
- (void)tableView:(ASTableView *)arg1 didEndDisplayingNode:(ASCellNode *)arg2 forRowAtIndexPath:(NSIndexPath *)arg3;
- (void)tableView:(ASTableView *)arg1 willDisplayNodeForRowAtIndexPath:(NSIndexPath *)arg2;
@end

