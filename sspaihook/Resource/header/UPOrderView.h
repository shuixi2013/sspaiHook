//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UPLineView, UPOrderInfoRegion, UPRiskInfoRegion;

@interface UPOrderView : UIView
{
    double mLineOriginY;
    UPOrderInfoRegion *mOrderInfo;
    UPRiskInfoRegion *mRiskInfo;
    UPLineView *_line;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 orderRegion:(id)arg2 riskRegion:(id)arg3;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

