//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MirrorMulticastDelegateEnumerator : NSObject
{
    unsigned long long numDelegates;	// 8 = 0x8
    unsigned long long currentDelegateIndex;	// 16 = 0x10
    struct MulticastDelegateListNode **delegates;	// 24 = 0x18
}

- (void)dealloc;
- (id)nextDelegateForSelector:(SEL)arg1;
- (id)nextDelegateOfClass:(Class)arg1;
- (id)nextDelegate;
- (id)initWithDelegateList:(struct MulticastDelegateListNode *)arg1;

@end

