//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GrowingChildContentPanelCellBase.h"

@class GrowingDetaiLineChartlView, UIImageView;

@interface GrowingChildContentPanelLineCell : GrowingChildContentPanelCellBase
{
    GrowingDetaiLineChartlView *_lineChartView;
    UIImageView *_screenShotImageView;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) GrowingDetaiLineChartlView *lineChartView; // @synthesize lineChartView=_lineChartView;
- (void)loadElement:(id)arg1 andImage:(id)arg2;
@property(retain, nonatomic) UIImageView *screenShotImageView; // @synthesize screenShotImageView=_screenShotImageView;

@end

