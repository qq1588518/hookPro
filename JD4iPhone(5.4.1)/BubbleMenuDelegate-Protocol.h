//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JDIMBubbleImageView;

@protocol BubbleMenuDelegate <NSObject>

@optional
- (_Bool)isContentEditable;
- (void)clickMore:(JDIMBubbleImageView *)arg1;
- (void)clickRemove:(JDIMBubbleImageView *)arg1;
- (void)clickTheSendAgain:(JDIMBubbleImageView *)arg1;
- (void)clickTheSpeakerPlay:(JDIMBubbleImageView *)arg1;
- (void)clickTheEarphonePlay:(JDIMBubbleImageView *)arg1;
- (void)clickTheCopy:(JDIMBubbleImageView *)arg1;
@end

