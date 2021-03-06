//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MLImageUtilities : NSObject
{
}

+ (_Bool)shouldDrawTransposedForImageWithOrientation:(long long)arg1;
+ (struct CGAffineTransform)transformForCoreGraphicToDrawImageWithOrientation:(long long)arg1 toPixelSize:(struct CGSize)arg2;
+ (id)imageByRotatingImage:(id)arg1 direction:(long long)arg2 times:(long long)arg3;
+ (id)imageByRotatingImage:(id)arg1 direction:(long long)arg2;
+ (id)imageByNormalizingOrientationAndScaleOfImage:(id)arg1;
+ (id)imageByDrawingCGImage:(struct CGImage *)arg1 toSize:(struct CGSize)arg2 transform:(struct CGAffineTransform)arg3 transposed:(_Bool)arg4 outputScale:(double)arg5 interpolationQuality:(int)arg6;
+ (id)imageByResizingImage:(id)arg1 toPixelSize:(struct CGSize)arg2 outputScale:(double)arg3 interpolationQuality:(int)arg4;
+ (id)imageByResizingImage:(id)arg1 withContentMode:(long long)arg2 toSize:(struct CGSize)arg3 interpolationQuality:(int)arg4;
+ (id)imageByResizingImage:(id)arg1 toSize:(struct CGSize)arg2 interpolationQuality:(int)arg3;
+ (id)imageByCroppingImage:(id)arg1 toRect:(struct CGRect)arg2;
+ (id)imageByApplyingBlurEffectToImage:(id)arg1 withRadius:(double)arg2 tintColor:(id)arg3 saturationDeltaFactor:(double)arg4 maskImage:(id)arg5;
+ (id)imageByApplyingTintBlurEffectToImage:(id)arg1 withTintColor:(id)arg2;
+ (id)imageByApplyingDarkBlurEffectToImage:(id)arg1;
+ (id)imageByApplyingExtraLightBlurEffectToImage:(id)arg1;
+ (id)imageByApplyingLightBlurEffectToImage:(id)arg1;
+ (id)thumbnailImageFromImageWithURL:(id)arg1 maxPixelSize:(double)arg2;
+ (id)thumbnailImageFromImageWithData:(id)arg1 maxPixelSize:(double)arg2;
+ (id)thumbnailImageFromCGImageSourceRef:(struct CGImageSource *)arg1 maxPixelSize:(double)arg2;

@end

