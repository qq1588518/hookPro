//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MMFICUtilities : NSObject
{
}

+ (id)DirectoryPath;
+ (int)PageSize;
+ (CDStruct_bd2f613f)FICUUIDBytesFromMD5HashOfString:(id)arg1;
+ (CDStruct_bd2f613f)FICUUIDBytesWithString:(id)arg1;
+ (id)FICStringWithUUIDBytes:(CDStruct_bd2f613f)arg1;
+ (unsigned long long)FICByteAlignForCoreAnimation:(unsigned long long)arg1;
+ (unsigned long long)FICByteAlign:(unsigned long long)arg1 alignment:(unsigned long long)arg2;

@end
