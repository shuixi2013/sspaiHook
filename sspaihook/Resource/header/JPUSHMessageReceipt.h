//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JPUSHReceipt.h"

#import "JPUSHReceiveProtocol.h"

@class NSString;

@interface JPUSHMessageReceipt : JPUSHReceipt <JPUSHReceiveProtocol>
{
    unsigned char _messageType;
    unsigned long long _messageID;
    unsigned int _recv_commandType;
    unsigned long long _recv_uniqueID;
    unsigned long long _recv_fromUid;
}

@property(readonly, copy) NSString *description;
- (id)initWithMessageDispatch:(id)arg1;
- (_Bool)packData;
@property(readonly, nonatomic) unsigned int recv_commandType; // @synthesize recv_commandType=_recv_commandType;
@property(readonly, nonatomic) unsigned long long recv_fromUid; // @synthesize recv_fromUid=_recv_fromUid;
@property(readonly, nonatomic) unsigned long long recv_uniqueID; // @synthesize recv_uniqueID=_recv_uniqueID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned char protocolType;
@property(readonly) Class superclass;

@end

