//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDChatMixMessages, MDUserProfile;

@interface MDChatNotice : NSObject
{
    MDUserProfile *cn_upi;
    MDChatMixMessages *cn_mixMsgs;
}

@property(retain, nonatomic) MDChatMixMessages *cn_mixMsgs; // @synthesize cn_mixMsgs;
@property(retain, nonatomic) MDUserProfile *cn_upi; // @synthesize cn_upi;
- (void)dealloc;
- (id)init;

@end

