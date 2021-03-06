//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BTNResourceConsumer.h"

@class BTNResourceProvider, NSString;

@interface BTNUserAgent : NSObject <BTNResourceConsumer>
{
    BTNResourceProvider *_resources;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithResources:(id)arg1;
@property(readonly, nonatomic) __weak BTNResourceProvider *resources; // @synthesize resources=_resources;
- (id)userAgentString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

