//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MLRDGradientBorderInnerView, NSArray;

@interface MLRoomDecorationGradientBorderView : UIView
{
    MLRDGradientBorderInnerView *_innerV;
    double _borderWidth;
}

@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) MLRDGradientBorderInnerView *innerV; // @synthesize innerV=_innerV;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *colorArray;
- (void)layoutSubviews;
- (id)initWithStartColor:(id)arg1 endColor:(id)arg2 cornerRadius:(double)arg3 borderWidth:(double)arg4 gradientOrientation:(unsigned long long)arg5;
- (void)changeColor:(id)arg1 endColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithColors:(id)arg1 cornerRadius:(double)arg2 borderWidth:(double)arg3 gradientOrientation:(unsigned long long)arg4;

@end

