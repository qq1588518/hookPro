//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TBMAppEventHandlerConfigurationItem : NSObject
{
    NSString *_eventName;	// 8 = 0x8
    NSString *_handlerObjectString;	// 16 = 0x10
}

@property(readonly, nonatomic) NSString *handlerObjectString; // @synthesize handlerObjectString=_handlerObjectString;
@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (id)initWithAppEventHandlerConfiguration:(id)arg1;

@end

