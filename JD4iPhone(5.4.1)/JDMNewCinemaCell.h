//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class JDIcon, JDStoreNetwork, NSString, UIImageView, UILabel;

@interface JDMNewCinemaCell : UITableViewCell
{
    JDStoreNetwork *m_network;
    UILabel *m_cinemaName;
    UILabel *m_price;
    UILabel *m_cinemaAddress;
    UILabel *m_distance;
    JDIcon *m_seatImg;
    JDIcon *m_couponImg;
    UIImageView *m_collectImg;
    UILabel *m_qi;
    UILabel *m_recentShowTime;
    NSString *m_cinemaId;
    JDIcon *m_youhuiLabel;
}

@property(retain, nonatomic) JDIcon *m_youhuiLabel; // @synthesize m_youhuiLabel;
@property(retain, nonatomic) NSString *m_cinemaId; // @synthesize m_cinemaId;
@property(retain, nonatomic) UILabel *m_recentShowTime; // @synthesize m_recentShowTime;
@property(retain, nonatomic) UILabel *m_qi; // @synthesize m_qi;
@property(retain, nonatomic) UIImageView *m_collectImg; // @synthesize m_collectImg;
@property(retain, nonatomic) JDIcon *m_couponImg; // @synthesize m_couponImg;
@property(retain, nonatomic) JDIcon *m_seatImg; // @synthesize m_seatImg;
@property(retain, nonatomic) UILabel *m_distance; // @synthesize m_distance;
@property(retain, nonatomic) UILabel *m_cinemaAddress; // @synthesize m_cinemaAddress;
@property(retain, nonatomic) UILabel *m_price; // @synthesize m_price;
@property(retain, nonatomic) UILabel *m_cinemaName; // @synthesize m_cinemaName;
- (void)dealloc;
- (void)setData:(id)arg1;
- (void)cancelChangqu;
- (void)doCancelChangqu;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

@end

