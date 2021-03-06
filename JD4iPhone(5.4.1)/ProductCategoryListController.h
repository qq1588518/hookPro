//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

@class JDStoreNetwork, NSMutableArray, ProductCategoryListView, UIButton;

@interface ProductCategoryListController : JDViewController
{
    JDStoreNetwork *netCtr_;
    ProductCategoryListView *categoryListView_;
    UIButton *selectButton_;
    id delegate;
    NSMutableArray *_searchCategory;
}

@property(retain, nonatomic) NSMutableArray *searchCategory; // @synthesize searchCategory=_searchCategory;
@property(nonatomic) id delegate; // @synthesize delegate;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showSelectCategoryTitle:(id)arg1;
- (void)didFinishResponseWithRequestSetup:(id)arg1 components:(id)arg2 msg:(id)arg3;
- (void)reconnect;
- (void)loadCategory;
- (void)categorySelected:(id)arg1;
- (void)viewDidLoad;

@end

