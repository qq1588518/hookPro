//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDView.h"

@class JDLabel, UIImageView, UILabel, UIView;

@interface OrderDetailTipsView : JDView
{
    int yushou_type;
    float yushouBalance;
    float yushouBargin;
    _Bool isShowTipsView;
    UILabel *titleLabel;
    UILabel *contentLabel;
    UIView *lineView;
    double _partViewWidth;
    JDLabel *_label1;
    JDLabel *_label2;
    JDLabel *_label3;
    JDLabel *_timeLabel1;
    JDLabel *_timeLabel2;
    UIView *_yushouScheduleView;
    UIImageView *_icon1;
    UIImageView *_icon2;
    UIImageView *_icon3;
    UIImageView *_line1;
    UIImageView *_line2;
    UIImageView *_line3;
    UIImageView *_line4;
    _Bool _isShowScheduleView;
}

@property(nonatomic) _Bool isShowScheduleView; // @synthesize isShowScheduleView=_isShowScheduleView;
@property(nonatomic) _Bool isShowTipsView; // @synthesize isShowTipsView;
- (void).cxx_destruct;
- (struct CGSize)getSizeOfLabel:(id)arg1;
- (void)setRightLineColor:(id)arg1;
- (void)setLeftLineColor:(id)arg1;
- (void)setIcon:(id)arg1 State:(int)arg2;
- (void)setViewLineWithInstallation;
- (void)setupTipsView:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

