//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASTableDelegate.h"

@class JDSHHdxWxhViewController, NSArray, NSString;

@interface JDSHHdxWxhDelegate : NSObject <ASTableDelegate>
{
    JDSHHdxWxhViewController *_viewController;
    NSArray *_viewModelArr;
}

@property(nonatomic) __weak NSArray *viewModelArr; // @synthesize viewModelArr=_viewModelArr;
@property(nonatomic) __weak JDSHHdxWxhViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayNodeForRowAtIndexPath:(id)arg2;
- (void)updateViewModel:(id)arg1;
- (id)initWithWxhViewController:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

