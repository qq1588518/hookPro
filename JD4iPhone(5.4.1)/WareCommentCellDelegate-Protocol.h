//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CommentInfoListModel, CommentVideoInfoListModel;

@protocol WareCommentCellDelegate <NSObject>

@optional
- (void)videoTapWithModel:(CommentVideoInfoListModel *)arg1;
- (void)imageIndexTapped:(long long)arg1 withModel:(CommentInfoListModel *)arg2;
@end
