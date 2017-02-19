//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailBgContentItem.h"

#import "PDViewProtocol.h"
#import "TTTAttributedLabelDelegate.h"

@class JDWareTitleLabel, NSString, NewProductModel, UILabel;

@interface PDTitleAdwordRegionView : DetailBgContentItem <TTTAttributedLabelDelegate, PDViewProtocol>
{
    UILabel *_titleLabel;
    JDWareTitleLabel *_adwordLabel;
    NewProductModel *_model;
}

@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) JDWareTitleLabel *adwordLabel; // @synthesize adwordLabel=_adwordLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithTextCheckingResult:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)redrawTitleView:(id)arg1;
- (void)renderAdwordLabel;
- (void)renderTitleView;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
