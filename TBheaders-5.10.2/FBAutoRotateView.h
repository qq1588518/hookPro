//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface FBAutoRotateView : UIView
{
    _Bool enableAutoRotate;	// 8 = 0x8
}

- (struct CGRect)getMainViewRect:(long long)arg1;
- (void)doAutoRotateChanged;
- (void)doOrientationChanged:(id)arg1;
- (void)doAutoRotateView;
- (void)enableAutoRotate:(_Bool)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

