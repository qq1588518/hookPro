//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CBCentralManagerDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"

@class CBCentralManager, CLLocationManager, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface TBBeaconManager : NSObject <CLLocationManagerDelegate, CBCentralManagerDelegate>
{
    _Bool _active;	// 8 = 0x8
    _Bool _running;	// 9 = 0x9
    _Bool _bluetoothReady;	// 10 = 0xa
    _Bool _authReady;	// 11 = 0xb
    float _scanTime;	// 12 = 0xc
    long long _dataType;	// 16 = 0x10
    CBCentralManager *_centralManager;	// 24 = 0x18
    CLLocationManager *_locationManager;	// 32 = 0x20
    NSMutableArray *_beaconRegions;	// 40 = 0x28
    NSMutableDictionary *_nearbyBeacons;	// 48 = 0x30
    unsigned long long _phoneStatus;	// 56 = 0x38
    NSArray *_uuidList;	// 64 = 0x40
    CDUnknownBlockType _ibeaconBlock;	// 72 = 0x48
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType ibeaconBlock; // @synthesize ibeaconBlock=_ibeaconBlock;
@property(retain, nonatomic) NSArray *uuidList; // @synthesize uuidList=_uuidList;
@property(nonatomic) unsigned long long phoneStatus; // @synthesize phoneStatus=_phoneStatus;
@property(nonatomic, getter=isAuthReady) _Bool authReady; // @synthesize authReady=_authReady;
@property(nonatomic, getter=isbluetoothReady) _Bool bluetoothReady; // @synthesize bluetoothReady=_bluetoothReady;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) NSMutableDictionary *nearbyBeacons; // @synthesize nearbyBeacons=_nearbyBeacons;
@property(retain, nonatomic) NSMutableArray *beaconRegions; // @synthesize beaconRegions=_beaconRegions;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(nonatomic) float scanTime; // @synthesize scanTime=_scanTime;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
- (void).cxx_destruct;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (_Bool)hardwareSupported;
- (_Bool)systemSupported;
- (_Bool)bleSupported;
- (unsigned long long)getCurrentPhoneStatus;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)stopRanging;
- (void)startRanging;
- (void)setupMonitoringRegion:(id)arg1;
- (void)stopScan;
- (void)doScan;
- (void)startScan:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)Deinit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

