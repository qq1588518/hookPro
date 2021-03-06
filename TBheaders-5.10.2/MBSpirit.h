//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, UIView;

@interface MBSpirit : NSObject
{
    struct CGPoint _origin;	// 8 = 0x8
    _Bool _valid;	// 24 = 0x18
    UIView *_view;	// 32 = 0x20
    double _delay;	// 40 = 0x28
    NSDate *_birth;	// 48 = 0x30
    double _timestamp;	// 56 = 0x38
    unsigned long long _z_index;	// 64 = 0x40
}

@property(nonatomic) unsigned long long z_index; // @synthesize z_index=_z_index;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) NSDate *birth; // @synthesize birth=_birth;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(readonly, nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) struct CGPoint position;
- (struct CGPoint)originInBounds:(struct CGRect)arg1 withSpirits:(id)arg2;
- (id)bindingView;
- (void)activeWithContext:(id)arg1;
- (_Bool)validWithTime:(double)arg1;
- (struct CGRect)rectWithTime:(double)arg1;
- (void)updateWithTime:(double)arg1;
- (id)init;

@end

