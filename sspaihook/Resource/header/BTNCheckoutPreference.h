//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTNModelObject.h"

@class BTNPrefersApp, BTNText;

@interface BTNCheckoutPreference : BTNModelObject
{
    BTNText *_titleText;
    BTNPrefersApp *_prefersApp;
}

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) BTNPrefersApp *prefersApp; // @synthesize prefersApp=_prefersApp;
@property(readonly, nonatomic) BTNText *titleText; // @synthesize titleText=_titleText;
- (void)updateWithRepresentation:(id)arg1;

@end

