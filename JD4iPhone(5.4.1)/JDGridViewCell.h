//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class JDFrameImageView, JDLabel;

@interface JDGridViewCell : JDView
{
    JDLabel *priceLabel_;
    JDFrameImageView *productImageView_;
}

@property(retain, nonatomic) JDFrameImageView *productImageView; // @synthesize productImageView=productImageView_;
@property(retain, nonatomic) JDLabel *priceLabel; // @synthesize priceLabel=priceLabel_;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

