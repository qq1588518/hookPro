//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "JDTabBarDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class JDScrollView, JDTabBar, NSArray, NSString, UIPageControl, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface JDTabBarController : UIViewController <UIScrollViewDelegate, UINavigationControllerDelegate, JDTabBarDelegate, UIGestureRecognizerDelegate>
{
    JDScrollView *contentView_;
    UIPageControl *pageControl_;
    long long lastSelectedIndex_;
    UIPanGestureRecognizer *panRecognizer;
    UITapGestureRecognizer *tapRecognizer;
    UIViewController *leftViewController;
    UIViewController *rightViewController;
    NSString *dragDirection;
    double lastTouchPoint;
    double displacementPosition;
    struct CGPoint positionOfViewAtMiddAtTouchBegan;
    NSArray *showNetworkpormptClasses;
    _Bool tabBarHidden;
    id <JDTabBarControllerDelegate> delegate_;
    NSArray *viewControllers_;
    long long selectedIndex_;
    JDTabBar *tabBar_;
    UIViewController *selectedViewController_;
}

@property(nonatomic) struct CGPoint positionOfViewAtMiddAtTouchBegan; // @synthesize positionOfViewAtMiddAtTouchBegan;
@property(nonatomic) double displacementPosition; // @synthesize displacementPosition;
@property(nonatomic) double lastTouchPoint; // @synthesize lastTouchPoint;
@property(retain, nonatomic) NSString *dragDirection; // @synthesize dragDirection;
@property(retain, nonatomic) UIViewController *rightViewController; // @synthesize rightViewController;
@property(retain, nonatomic) UIViewController *leftViewController; // @synthesize leftViewController;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer;
@property(readonly, nonatomic) UIViewController *selectedViewController; // @synthesize selectedViewController=selectedViewController_;
@property(readonly, retain, nonatomic) JDTabBar *tabBar; // @synthesize tabBar=tabBar_;
@property(readonly, retain, nonatomic) JDScrollView *contentView; // @synthesize contentView=contentView_;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=selectedIndex_;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=viewControllers_;
@property(nonatomic) id <JDTabBarControllerDelegate> delegate; // @synthesize delegate=delegate_;
- (id)currentNavigationController;
- (id)getTopViewController:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotate;
- (void)didSelectedBarItemOfIndex:(long long)arg1 tabBar:(id)arg2;
- (void)showNewBageIcon:(_Bool)arg1 atTabIndex:(long long)arg2;
- (void)showLastViewController;
- (void)menuDidDisappear:(id)arg1;
- (void)menuDidAppear:(id)arg1;
- (void)hideBarNotfi:(id)arg1;
- (void)showBarNotfi:(id)arg1;
- (void)showTabBar:(_Bool)arg1 animation:(_Bool)arg2;
@property(readonly, nonatomic) _Bool tabBarHidden; // @synthesize tabBarHidden;
@property(readonly, nonatomic) _Bool scrollEnable; // @dynamic scrollEnable;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)resetTabBarContentViewRect;
- (double)statusBarGap;
- (id)init;
- (id)presentedViewController;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
@property(readonly, nonatomic) _Bool inVideo;
- (void)searchShowRootControllerHiddenMask:(_Bool)arg1;
- (void)showShadow:(_Bool)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)rollMainViewControllerWithScreenPosistion:(double)arg1 duration:(double)arg2 began:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showRootController:(_Bool)arg1;
- (void)showLeftController:(_Bool)arg1;
- (void)showRightController:(_Bool)arg1;
- (void)detectionViewPositionOffsetX:(float)arg1 animation:(_Bool)arg2;
- (float)getDetectionViewPositionOffsetX;
- (double)getCurrentSelectViewTabBarViewPosition;
- (void)handlePanFrom:(id)arg1;
- (void)shouldHandlePanFrom:(_Bool)arg1;
- (void)navigationControllerDidShowController:(id)arg1;
- (void)navigationControllerWillShowController:(id)arg1;
- (void)navigationControllerDidAppear:(id)arg1;
- (void)navigationControllerWillAppear:(id)arg1;
- (void)checkBackButtonWithNavigationController:(id)arg1 viewController:(id)arg2;
- (void)initViewController:(id)arg1;
- (_Bool)isShowRootViewController;
- (void)initGesture;
- (id)visibleNavigationViewController;
- (void)popViewControllerForFullScreenAnimated:(_Bool)arg1;
- (void)reloadContentView;
- (void)checkFullScreenScroll;
- (void)setFullScreenScrollEnable:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
