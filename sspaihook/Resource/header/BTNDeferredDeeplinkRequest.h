//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BTNRequestOperation.h"

@class NSString, NSURL;

@interface BTNDeferredDeeplinkRequest : BTNRequestOperation
{
    NSString *_fingerprintId;
    NSURL *_deferredDeeplinkURL;
    NSString *_referrerToken;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *deferredDeeplinkURL; // @synthesize deferredDeeplinkURL=_deferredDeeplinkURL;
@property(copy, nonatomic) NSString *fingerprintId; // @synthesize fingerprintId=_fingerprintId;
- (void)finish;
- (id)initWithResources:(id)arg1;
- (void)main;
@property(copy, nonatomic) NSString *referrerToken; // @synthesize referrerToken=_referrerToken;

@end
