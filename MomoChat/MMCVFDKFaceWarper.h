//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FDKFaceWarper.h"

@class MMFaceWarper, NSString;

@interface MMCVFDKFaceWarper : NSObject <FDKFaceWarper>
{
    MMFaceWarper *_warper;
}

@property(retain, nonatomic) MMFaceWarper *warper; // @synthesize warper=_warper;
- (void).cxx_destruct;
- (void)createFaceWarpDataForFaceFeatures:(id)arg1 frameSize:(struct CGSize)arg2 distortionSettings:(id)arg3 outputSourceVerticesData:(id *)arg4 outputDestinationVerticesData:(id *)arg5;
- (void)createFaceWarpDataForFaceFeatures:(id)arg1 frameSize:(struct CGSize)arg2 beautySettings:(id)arg3 outputSourceVerticesData:(id *)arg4 outputDestinationVerticesData:(id *)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
