//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol WCMallAcrivityLoopPageScrollViewDataSourceDelegate <NSObject>

@optional
- (void)didChangeToPage:(unsigned int)arg1;
- (int)totalNumOfPage;
- (UIView *)viewForPage:(UIView *)arg1 pageNum:(unsigned int)arg2;
@end
