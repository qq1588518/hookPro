//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBMirrorNetworkUtil : NSObject
{
    NSString *_networkStatus;	// 8 = 0x8
}

+ (_Bool)isWIFI;
+ (_Bool)isNoNetwork;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *networkStatus; // @synthesize networkStatus=_networkStatus;
- (void).cxx_destruct;
- (id)getCellularType;
- (id)getNetworkType;
- (void)dealloc;
- (id)init;

@end
