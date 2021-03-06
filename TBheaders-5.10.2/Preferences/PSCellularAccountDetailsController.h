//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSListController.h"

#import "PSCellularAccountDetailDelegate.h"

@class CTCellularPlan, NSString;

@interface PSCellularAccountDetailsController : PSListController <PSCellularAccountDetailDelegate>
{
    CTCellularPlan *_plan;
}

+ (void)configurePlanSpecifiers:(id)arg1 plan:(id)arg2 target:(id)arg3 selectPlanControllerClass:(Class)arg4;
+ (id)specifiersFromCellularPlan:(id)arg1 target:(id)arg2 selectPlanControllerClass:(Class)arg3;
@property(retain, nonatomic) CTCellularPlan *plan; // @synthesize plan=_plan;
- (void)dealloc;
- (void)subscriptionUpdatedNotification;
- (void)managePlanPressed:(id)arg1;
- (id)getPlanExpireDate:(id)arg1;
- (id)getPlanPurchaseDate:(id)arg1;
- (id)getPlanStatusDate:(id)arg1;
- (id)getPlanStatus:(id)arg1;
- (id)getCarrierName:(id)arg1;
- (id)getPlanName:(id)arg1;
- (id)specifiers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

