//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<JPUSHTcpSocketDelegate>, NSString;

@interface JPUSHTcpSocket : NSObject
{
    struct __CFSocket *_socket;
    struct __CFRunLoopSource *_rls;
    unsigned long long _ulReceivedLen;
    char *_receivingBuffer;
    unsigned long long _ulDefaultReceiveBufferSize;
    unsigned long long _ulSendingDataSentLen;
    NSMutableArray *_sendQueue;
    _Bool _isSetuped;
    _Bool _careAllDataSent;
    unsigned short _port;
    int _connectionState;
    NSObject<JPUSHTcpSocketDelegate> *_delegate;
    NSString *_host;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool careAllDataSent; // @synthesize careAllDataSent=_careAllDataSent;
- (void)close;
@property(readonly, nonatomic) int connectionState; // @synthesize connectionState=_connectionState;
- (void)dealloc;
- (void)delayedDidReceiveElement:(id)arg1;
- (void)delayedDidSendData:(id)arg1;
@property(nonatomic) __weak NSObject<JPUSHTcpSocketDelegate> *delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)doCFSocketCallback:(unsigned long long)arg1 forSocket:(struct __CFSocket *)arg2 withData:(struct __CFData *)arg3;
- (void)doCheck;
- (void)doRead;
- (void)doSend;
@property(readonly, copy, nonatomic) NSString *host; // @synthesize host=_host;
- (id)initWithHost:(id)arg1 port:(unsigned int)arg2 delegate:(id)arg3;
- (_Bool)isConnected;
- (id)localAddress;
- (void)onConnectedWithErrorCode:(struct __CFData *)arg1;
- (void)onlyResetInfo;
- (void)p_cleanSocket;
@property(readonly, nonatomic) unsigned short port; // @synthesize port=_port;
- (void)reenableSocketCallbacks;
- (id)remoteAddress;
- (void)resetReadInfo;
- (void)restoreSendQueueData;
- (void)saveSendQueueData;
- (_Bool)sendData:(id)arg1;
@property struct __CFSocket *socket; // @dynamic socket;
- (_Bool)setup;

@end
