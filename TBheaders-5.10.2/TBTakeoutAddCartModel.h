//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutAddCartModel : TBJSONModel
{
    unsigned long long _cartQuantity;	// 8 = 0x8
    NSString *_cartId;	// 16 = 0x10
}

+ (id)modelWithJSONDictionary:(id)arg1;
@property(retain, nonatomic) NSString *cartId; // @synthesize cartId=_cartId;
@property(nonatomic) unsigned long long cartQuantity; // @synthesize cartQuantity=_cartQuantity;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

