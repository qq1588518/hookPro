//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIButton, UILabel;

@interface JDQuickerLightBottomView : UIView
{
    UIButton *_button;
    UILabel *_hintLabel;
    NSArray *_labelHContrains;
    NSArray *_labelVContrains;
    id <JDQuickerLightBottomViewDelegate> _delegate;
}

@property(nonatomic) __weak id <JDQuickerLightBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setButtonStatus:(long long)arg1;
- (void)buttonClick:(id)arg1;
- (void)addContraints;
- (void)setSubUI;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

