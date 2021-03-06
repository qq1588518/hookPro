//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBIMChatBaseBubbleLayout.h"

@class NSString;

@interface TBIMChatAudioBubbleLayout : TBIMChatBaseBubbleLayout
{
    NSString *_durationString;	// 8 = 0x8
    struct CGRect _indicationViewRect;	// 16 = 0x10
    struct CGRect _durationViewRect;	// 48 = 0x30
    struct CGRect _redMarkViewRect;	// 80 = 0x50
}

@property(nonatomic) struct CGRect redMarkViewRect; // @synthesize redMarkViewRect=_redMarkViewRect;
@property(copy, nonatomic) NSString *durationString; // @synthesize durationString=_durationString;
@property(nonatomic) struct CGRect durationViewRect; // @synthesize durationViewRect=_durationViewRect;
@property(nonatomic) struct CGRect indicationViewRect; // @synthesize indicationViewRect=_indicationViewRect;
- (void).cxx_destruct;
- (struct CGSize)innerBubbleSizeWithMessage:(id)arg1;
- (id)initWithCurrentMessage:(id)arg1 chatBubbleLayoutType:(long long)arg2;

@end

