//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@protocol MDHeadPicturesViewDelegate <NSObject>

@optional
- (void)loadPhotoOrVideoWithRect:(struct CGRect)arg1 cellIndex:(long long)arg2;
- (void)takeVideo;
- (void)changeToNewPics:(NSMutableArray *)arg1;
- (void)takePhoto:(_Bool)arg1;
- (void)pickPhoto:(_Bool)arg1;
- (void)headPicturesViewFrameDidChanged:(struct CGRect)arg1;
- (void)scrollViewWillEndDragging;
- (void)scrollViewWillBeginDragging;
@end

