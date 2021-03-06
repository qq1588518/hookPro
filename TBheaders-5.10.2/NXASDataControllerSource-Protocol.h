//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NXASDataController, NXCellNode;

@protocol NXASDataControllerSource <NSObject>
- (void)dataControllerUnlockDataSource;
- (void)dataControllerLockDataSource;
- (unsigned long long)numberOfSectionsInDataController:(NXASDataController *)arg1;
- (unsigned long long)dataController:(NXASDataController *)arg1 rowsInSection:(unsigned long long)arg2;
- (CDStruct_42a63532)dataController:(NXASDataController *)arg1 constrainedSizeForNodeAtIndexPath:(NSIndexPath *)arg2;
- (NXCellNode *)dataController:(NXASDataController *)arg1 nodeAtIndexPath:(NSIndexPath *)arg2;
@end

