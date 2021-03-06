//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface WBSDKWebViewErrorView : UIView
{
    UIButton *_retryButton;	// 8 = 0x8
    UIView *_buttonsContainer;	// 16 = 0x10
    UIButton *_closeButton;	// 24 = 0x18
    UILabel *_descriptionLabel;	// 32 = 0x20
    UIImageView *_imageView;	// 40 = 0x28
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *buttonsContainer; // @synthesize buttonsContainer=_buttonsContainer;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layout;
- (void)hide;
- (void)showError:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

