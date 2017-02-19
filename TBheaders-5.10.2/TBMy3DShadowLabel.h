//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface TBMy3DShadowLabel : UILabel
{
    struct CGSize shadowOffset;	// 8 = 0x8
    UIColor *shadowColor;	// 24 = 0x18
    double shadowAmount;	// 32 = 0x20
    struct CGColorSpace *colorSpaceRef;	// 40 = 0x28
    struct CGColor *shadowColorRef;	// 48 = 0x30
}

@property(nonatomic) double shadowAmount; // @synthesize shadowAmount;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor;
- (void).cxx_destruct;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)initialize;

@end
