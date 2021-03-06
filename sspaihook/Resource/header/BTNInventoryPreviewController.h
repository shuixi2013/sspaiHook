//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTNBaseModalController.h"

@class BTNAppAction, BTNInventoryPreviewView;

@interface BTNInventoryPreviewController : BTNBaseModalController
{
    CDUnknownBlockType _itemSelectedHandler;
    BTNInventoryPreviewView *_productView;
    BTNAppAction *_appAction;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BTNAppAction *appAction; // @synthesize appAction=_appAction;
- (id)initWithAppAction:(id)arg1 resources:(id)arg2;
- (void)itemSelectedAction:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType itemSelectedHandler; // @synthesize itemSelectedHandler=_itemSelectedHandler;
@property(retain, nonatomic) BTNInventoryPreviewView *productView; // @synthesize productView=_productView;
- (void)userTriggeredDismiss;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

