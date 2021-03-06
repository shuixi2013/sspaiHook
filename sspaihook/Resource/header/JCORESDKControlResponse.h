//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JPUSHResponse.h"

#import "JCORESDKControlProtocol.h"

@class NSDictionary, NSString;

@interface JCORESDKControlResponse : JPUSHResponse <JCORESDKControlProtocol>
{
    NSDictionary *_ctrlContent;
    unsigned long long _requestID;
}

- (void).cxx_destruct;
- (void)handleReceipt;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned short)arg2;
@property(readonly, nonatomic) unsigned long long requestID; // @synthesize requestID=_requestID;
- (void)sendReceipt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned short statusCode;
@property(readonly) Class superclass;

@end

