//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImageView, UILabel;

@interface RatioItemView : UIView
{
    CAShapeLayer *rectLayer;	// 8 = 0x8
    struct CGSize ratioSize;	// 16 = 0x10
    UIImageView *rectImage;	// 32 = 0x20
    UILabel *descLabel;	// 40 = 0x28
    UILabel *mobileLabel;	// 48 = 0x30
    id _target;	// 56 = 0x38
    SEL _targetSel;	// 64 = 0x40
    _Bool _selected;	// 72 = 0x48
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void).cxx_destruct;
- (struct CGRect)calculateRectForRatio:(struct CGSize)arg1;
- (void)drawShapeLayer;
- (void)drawFreeLayer;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)taptap:(id)arg1;
- (id)initWithRatio:(struct CGSize)arg1;

@end

