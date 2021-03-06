//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMViewController.h"

#import "SearchInputAgentDelegate-Protocol.h"
#import "SearchPlaceHolderDelegate-Protocol.h"
#import "SearchSuggestDelegate-Protocol.h"

@class NSString, NSURL, NSValue, SearchSegmentViewController, SearchSuggestViewController, TMSearchInputDelegateAgent, TMSearchTextField, UIView;

@interface SearchInputViewController : TMViewController <SearchInputAgentDelegate, SearchSuggestDelegate, SearchPlaceHolderDelegate>
{
    UIView *_searchTitleView;	// 16 = 0x10
    TMSearchTextField *_searchInputField;	// 24 = 0x18
    TMSearchInputDelegateAgent *_agent;	// 32 = 0x20
    NSURL *_originalURL;	// 40 = 0x28
    _Bool _switchToH5;	// 48 = 0x30
    _Bool _jumpFromViewController;	// 49 = 0x31
    NSString *_fromViewControllerName;	// 56 = 0x38
    NSString *_currentInput;	// 64 = 0x40
    NSString *_selectedKeyWord;	// 72 = 0x48
    NSValue *_selectedRangeValue;	// 80 = 0x50
    unsigned long long _status;	// 88 = 0x58
    NSString *_searchType;	// 96 = 0x60
    NSString *_from;	// 104 = 0x68
    SearchSuggestViewController *_suggestVC;	// 112 = 0x70
    SearchSegmentViewController *_segmentVC;	// 120 = 0x78
}

@property(retain, nonatomic) SearchSegmentViewController *segmentVC; // @synthesize segmentVC=_segmentVC;
@property(retain, nonatomic) SearchSuggestViewController *suggestVC; // @synthesize suggestVC=_suggestVC;
@property(copy, nonatomic) NSString *from; // @synthesize from=_from;
@property(copy, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSValue *selectedRangeValue; // @synthesize selectedRangeValue=_selectedRangeValue;
@property(copy, nonatomic) NSString *selectedKeyWord; // @synthesize selectedKeyWord=_selectedKeyWord;
@property(copy, nonatomic) NSString *currentInput; // @synthesize currentInput=_currentInput;
@property(nonatomic) _Bool jumpFromViewController; // @synthesize jumpFromViewController=_jumpFromViewController;
@property(copy, nonatomic) NSString *fromViewControllerName; // @synthesize fromViewControllerName=_fromViewControllerName;
- (void).cxx_destruct;
- (void)openSearchResultController:(id)arg1;
- (void)childViewControllerBecomeFirstResponser:(id)arg1;
- (void)pushToH5WithURL:(id)arg1;
- (void)clickPhotoSearchBtn:(id)arg1;
- (void)updatePlaceHolderFormTMConfig;
- (void)updatePlaceHolderFormHttpRequest:(id)arg1 Query:(id)arg2;
- (void)leftButtonClick:(id)arg1;
- (void)createSearchTitleView;
- (void)createSearchInputField;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)checkCurrentInputEncode;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)UTPageName;
- (id)pageName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

