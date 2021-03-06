//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@class NSArray, NSMutableDictionary, NSString;

@interface BTNInventoryDataSource : NSObject <UITableViewDataSource>
{
    NSArray *_inventoryItems;
    NSMutableDictionary *_itemHeightCache;
}

- (void).cxx_destruct;
- (double)heightForItem:(id)arg1 withWidth:(double)arg2;
- (double)heightForItemAtIndexPath:(id)arg1 withWidth:(double)arg2;
- (id)initWithInventory:(id)arg1;
@property(readonly, nonatomic) NSArray *inventoryItems; // @synthesize inventoryItems=_inventoryItems;
- (id)itemAtIndexPath:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *itemHeightCache; // @synthesize itemHeightCache=_itemHeightCache;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)totalDisplayHeightWithWidth:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

