//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTTelephonyNetworkInfo, NSString;

@interface NWReachabilityManager : NSObject
{
    int _currentNetworkStatus;	// 8 = 0x8
    int _preNetworkStatus;	// 12 = 0xc
    struct __SCNetworkReachability *_reachabilityRef;	// 16 = 0x10
    NSString *ssid;	// 24 = 0x18
    CTTelephonyNetworkInfo *netInfo;	// 32 = 0x20
    NSString *_ssidMD5;	// 40 = 0x28
    _Bool _isIPv6only;	// 48 = 0x30
}

+ (_Bool)configureProxies;
+ (id)md5:(id)arg1;
+ (_Bool)deviceSystemIsLargeIOS7;
+ (_Bool)deviceSystemIsLargeIOS9;
+ (id)shareInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateWifiSSID;
- (int)_networkStatusForReachabilityFlags:(unsigned int)arg1;
- (int)currentNetworkStatusForiOS7:(int)arg1;
- (_Bool)checkInternetConnection;
- (int)_reachabilityStatus;
- (id)getWiFiSSIDMD5;
- (id)getWifiSSID;
- (id)currentAPN;
- (id)currentNetworkStatusString;
- (int)preNetworkStatus;
- (int)currentNetworkStatus;
- (_Bool)_startNotifier;
- (struct __SCNetworkReachability *)_createReachabilityRef:(struct __CFAllocator *)arg1;
- (id)init;

@end

