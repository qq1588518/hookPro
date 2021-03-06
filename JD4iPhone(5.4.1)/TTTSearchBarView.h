//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol.h"

@class NSString, TTTSearchModel, UIButton;

@interface TTTSearchBarView : TTTBaseView <TTTBaseViewProtocol>
{
    TTTSearchModel *_searchBarModel;
    UIButton *_departmentsButton;
    UIButton *_searchButton;
}

@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIButton *departmentsButton; // @synthesize departmentsButton=_departmentsButton;
@property(retain, nonatomic) TTTSearchModel *searchBarModel; // @synthesize searchBarModel=_searchBarModel;
- (void).cxx_destruct;
- (void)searchButtonTapped:(id)arg1;
- (void)departmentsTapped:(id)arg1;
- (void)displayWithData:(id)arg1;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

