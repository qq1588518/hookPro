//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString;
@protocol VoipAlertViewDelegate;

__attribute__((visibility("hidden")))
@interface VoipAlertView : MMUIWindow <CAAnimationDelegate>
{
    int _inviteType;
    id <VoipAlertViewDelegate> _mydelegate;
}

@property(nonatomic) id <VoipAlertViewDelegate> delegate; // @synthesize delegate=_mydelegate;
- (void)onInvite;
- (void)onCancel;
- (void)appearWithAnimation;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 andInviteType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

