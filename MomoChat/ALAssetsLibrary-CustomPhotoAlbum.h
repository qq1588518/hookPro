//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALAssetsLibrary.h"

@interface ALAssetsLibrary (CustomPhotoAlbum)
+ (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
+ (void)checkAlbumAuthorizationStatus;
+ (void)checkAVAuthorizationStatus;
+ (_Bool)saveImag:(id)arg1 toAlubm:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)addAssetURL:(id)arg1 toAlbum:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)saveImage:(id)arg1 toAlbum:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
@end
