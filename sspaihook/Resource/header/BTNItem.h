//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTNBaseEntity.h"

@interface BTNItem : BTNBaseEntity
{
}

+ (id)itemWithName:(id)arg1 SKU:(id)arg2;
+ (id)itemWithName:(id)arg1 UPC:(id)arg2;
+ (id)itemWithSKU:(id)arg1;
+ (id)itemWithUPC:(id)arg1;
- (id)dictionaryRepresentation;
- (void)setSKU:(id)arg1;
- (void)setUPC:(id)arg1;
- (void)updateWithRepresentation:(id)arg1;

@end
