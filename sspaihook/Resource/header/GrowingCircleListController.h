//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GrowingCircleListBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSIndexSet, NSString, UITableView;

@interface GrowingCircleListController : GrowingCircleListBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    CDUnknownBlockType _onCloseClick;
    NSArray *_items;
    NSIndexSet *_showEventSet;
    UITableView *_tableView;
    double _showTimeinterval;
}

+ (id)eventTypesSet;
+ (void)hideEventType:(long long)arg1;
+ (_Bool)isEventShow:(long long)arg1;
+ (void)showEventType:(long long)arg1;
- (void).cxx_destruct;
- (void)close;
- (void)fillCell:(id)arg1 withItem:(id)arg2;
- (void)filterClick;
- (id)growingColorWithEventType:(long long)arg1;
- (id)growingTypeNameWithEventType:(long long)arg1;
- (id)initWithItems:(id)arg1;
- (_Bool)isShowIndexPath:(id)arg1;
- (_Bool)isShowItem:(id)arg1;
- (_Bool)isShowType:(long long)arg1;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType onCloseClick; // @synthesize onCloseClick=_onCloseClick;
@property(retain, nonatomic) NSIndexSet *showEventSet; // @synthesize showEventSet=_showEventSet;
@property(nonatomic) double showTimeinterval; // @synthesize showTimeinterval=_showTimeinterval;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (id)showTimeWithNowDate:(double)arg1 itemDate:(double)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

