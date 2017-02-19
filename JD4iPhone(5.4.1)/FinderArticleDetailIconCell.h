//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDFinderTableViewCell.h"

@class JDImageView, UIImageView, UILabel, UIView;

@interface FinderArticleDetailIconCell : JDFinderTableViewCell
{
    UILabel *_followedLabel;
    UILabel *_unfollowedLabel;
    UIImageView *_unfollowedImageView;
    UIView *_horizontalLine;
    UIView *_authorJumpView;
    CDUnknownBlockType _clickAttentionView;
    CDUnknownBlockType _clickAuthorView;
    JDImageView *_articleAuthorHeadImage;
    UILabel *_articleAuthorNameLabel;
    UILabel *_articleAuthorBriefLabel;
    UIView *_articleAuthorFollowView;
}

@property(retain, nonatomic) UIView *articleAuthorFollowView; // @synthesize articleAuthorFollowView=_articleAuthorFollowView;
@property(retain, nonatomic) UILabel *articleAuthorBriefLabel; // @synthesize articleAuthorBriefLabel=_articleAuthorBriefLabel;
@property(retain, nonatomic) UILabel *articleAuthorNameLabel; // @synthesize articleAuthorNameLabel=_articleAuthorNameLabel;
@property(retain, nonatomic) JDImageView *articleAuthorHeadImage; // @synthesize articleAuthorHeadImage=_articleAuthorHeadImage;
@property(copy, nonatomic) CDUnknownBlockType clickAuthorView; // @synthesize clickAuthorView=_clickAuthorView;
@property(copy, nonatomic) CDUnknownBlockType clickAttentionView; // @synthesize clickAttentionView=_clickAttentionView;
- (void).cxx_destruct;
- (void)tapJumpAuthor:(id)arg1;
- (void)setAttentionButtonStatusFollowed:(_Bool)arg1;
- (void)setAttentionButtonListener:(id)arg1;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end
