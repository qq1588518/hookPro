//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WCSnsDelayShowInfo : MMObject <PBCoding>
{
    _Bool needDelayInViewLifeCycle;
    unsigned int respTimeStamp;
    unsigned int delayInterval;
    unsigned int showTimeStamp;
    NSString *layerId;
    NSString *expId;
}

+ (void)initialize;
@property(nonatomic) _Bool needDelayInViewLifeCycle; // @synthesize needDelayInViewLifeCycle;
@property(nonatomic) unsigned int showTimeStamp; // @synthesize showTimeStamp;
@property(nonatomic) unsigned int delayInterval; // @synthesize delayInterval;
@property(nonatomic) unsigned int respTimeStamp; // @synthesize respTimeStamp;
@property(retain, nonatomic) NSString *expId; // @synthesize expId;
@property(retain, nonatomic) NSString *layerId; // @synthesize layerId;
- (void).cxx_destruct;
- (_Bool)parseDelayShowInfo:(id)arg1;
- (id)init;
- (const map_0e718273 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
