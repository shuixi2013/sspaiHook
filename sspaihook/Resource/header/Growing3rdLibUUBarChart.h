//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSHashTable, UIScrollView;

@interface Growing3rdLibUUBarChart : UIView
{
    UIScrollView *myScrollView;
    NSHashTable *_chartLabelsForX;
    _Bool _showRange;
    float _yValueMax;
    float _yValueMin;
    NSArray *_xLabels;
    NSArray *_yLabels;
    NSArray *_yValues;
    double _xLabelWidth;
    NSArray *_colors;
    struct Range _chooseRange;
}

- (void).cxx_destruct;
- (id)chartLabelsForX;
@property(nonatomic) struct Range chooseRange; // @synthesize chooseRange=_chooseRange;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool showRange; // @synthesize showRange=_showRange;
@property(nonatomic) double xLabelWidth; // @synthesize xLabelWidth=_xLabelWidth;
@property(retain, nonatomic) NSArray *xLabels; // @synthesize xLabels=_xLabels;
@property(retain, nonatomic) NSArray *yLabels; // @synthesize yLabels=_yLabels;
@property(nonatomic) float yValueMax; // @synthesize yValueMax=_yValueMax;
@property(nonatomic) float yValueMin; // @synthesize yValueMin=_yValueMin;
@property(retain, nonatomic) NSArray *yValues; // @synthesize yValues=_yValues;
- (void)strokeChart;

@end
