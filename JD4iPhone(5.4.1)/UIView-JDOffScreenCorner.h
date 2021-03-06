//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (JDOffScreenCorner)
- (void)cornerWithRadius:(double)arg1 viewSize:(struct CGSize)arg2 borderWidth:(double)arg3 borderColor:(id)arg4 fillColor:(id)arg5;
- (void)cornerWithRadius:(double)arg1 viewSize:(struct CGSize)arg2 borderWidth:(double)arg3 borderColor:(id)arg4;
- (void)cornerWithViewSize:(struct CGSize)arg1 borderWidth:(double)arg2 borderColor:(id)arg3 fillColor:(id)arg4;
- (void)cornerWithViewSize:(struct CGSize)arg1 borderWidth:(double)arg2 borderColor:(id)arg3;
- (_Bool)hasDRCornered;
- (void)removeDRCorner;
- (void)dr_cornerWithRadius:(double)arg1 backgroundColor:(id)arg2 borderColor:(id)arg3;
- (void)dr_bottomCornerWithRadius:(double)arg1 backgroundColor:(id)arg2;
- (void)dr_topCornerWithRadius:(double)arg1 backgroundColor:(id)arg2;
- (void)dr_cornerWithRadius:(double)arg1 backgroundColor:(id)arg2;
- (void)dr_roundingCorner:(unsigned long long)arg1 radius:(double)arg2 backgroundColor:(id)arg3;
- (void)dr_roundingCorner:(unsigned long long)arg1 radius:(double)arg2 backgroundColor:(id)arg3 borderColor:(id)arg4;
@end

