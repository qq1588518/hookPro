//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface WALoadingInfoData : MMObject
{
    _Bool _bNoPushAnimate;
    UIImage *_nsThumbImage;
    NSString *_nsLoadingTitle;
    NSString *_nsBackViewColorStr;
}

@property(copy, nonatomic) NSString *nsBackViewColorStr; // @synthesize nsBackViewColorStr=_nsBackViewColorStr;
@property(copy, nonatomic) NSString *nsLoadingTitle; // @synthesize nsLoadingTitle=_nsLoadingTitle;
@property(retain, nonatomic) UIImage *nsThumbImage; // @synthesize nsThumbImage=_nsThumbImage;
@property(nonatomic) _Bool bNoPushAnimate; // @synthesize bNoPushAnimate=_bNoPushAnimate;
- (void).cxx_destruct;

@end
