//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HomePageChannelFloorModel.h"

#import "HomePageChannelFloorCell.h"

@class NSArray, NSString, UIColor;

@interface HomePageChannelBrandCategoryFloorModel : HomePageChannelFloorModel <HomePageChannelFloorCell>
{
    NSArray *_picList;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSArray *picList; // @synthesize picList=_picList;
- (void).cxx_destruct;
- (id)actionAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSString *floorCellIdentifier;
- (id)floorCells;
- (_Bool)isValid;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

