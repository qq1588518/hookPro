//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView, UILabel;

@interface JDShopMessageButton : UIButton
{
    UIImageView *_redDot;
    UIImageView *_singelNum;
    UIImageView *_twoNum;
    UILabel *_singelNumLabel;
    UILabel *_twoNumLabel;
}

- (void).cxx_destruct;
- (void)showDotView:(id)arg1;
- (void)hiddenRedView;
- (void)hiddenDotView;
- (id)addImageSubView:(id)arg1 centerPoint:(struct CGPoint)arg2;
- (void)createMessageImage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

