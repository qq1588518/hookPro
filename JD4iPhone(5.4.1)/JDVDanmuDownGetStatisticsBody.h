//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString;

@interface JDVDanmuDownGetStatisticsBody : JSONModel
{
    int current_viewer;
    int max_viewer;
    int total_viwer;
    int thumbs_up_num;
    int message_num;
    NSString *groupid;
}

@property(retain, nonatomic) NSString *groupid; // @synthesize groupid;
@property(nonatomic) int message_num; // @synthesize message_num;
@property(nonatomic) int thumbs_up_num; // @synthesize thumbs_up_num;
@property(nonatomic) int total_viwer; // @synthesize total_viwer;
@property(nonatomic) int max_viewer; // @synthesize max_viewer;
@property(nonatomic) int current_viewer; // @synthesize current_viewer;
- (void).cxx_destruct;

@end

