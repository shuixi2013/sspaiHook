//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JPUSHSRVResolverDelegate.h"
#import "JPUSHUdpSocketDelegate.h"

@class JPUSHAddress, JPUSHSRVResolver, JPUSHUdpSocket, NSArray, NSString;

@interface JPUSHAddressController : NSObject <JPUSHSRVResolverDelegate, JPUSHUdpSocketDelegate>
{
    JPUSHUdpSocket *_udpSocket;
    JPUSHAddress *_userReportAddress;
    JPUSHAddress *_httpReportAddress;
    JPUSHSRVResolver *_resolver;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) NSString *defaultConnectAddress; // @dynamic defaultConnectAddress;
@property(readonly, nonatomic) NSArray *defaultConnectDomainAddress;
@property(readonly, nonatomic) NSString *defaultReportAddress; // @dynamic defaultReportAddress;
- (id)defaultSisHostAddress;
- (void)didNotReceivedDataAtUdpSocket:(id)arg1 withError:(id)arg2;
- (void)didNotSendData:(id)arg1 atUdpSocket:(id)arg2;
- (void)didReceivedData:(id)arg1 atUdpSocket:(id)arg2;
- (void)didSendData:(id)arg1 atUdpSocket:(id)arg2;
- (id)getAddressByHostDomain:(const char *)arg1;
- (id)getAddressFromSis;
- (id)getSisHostAddress:(unsigned long long)arg1;
@property(readonly, retain, nonatomic) NSString *httpReportAddress; // @dynamic httpReportAddress;
- (id)init;
- (void)parse:(id)arg1;
- (id)parseIpsAddress:(id)arg1;
- (id)parseOptionAddress:(id)arg1;
- (id)parseUdpReportAddress:(id)arg1;
- (id)parseUserAddress:(id)arg1;
- (id)requestData;
- (void)resetUdpSocket;
@property(readonly, nonatomic) JPUSHSRVResolver *resolver; // @synthesize resolver=_resolver;
- (_Bool)runWithDefaultSRVName;
- (id)sendSisRequest;
- (id)sendSisRequest:(id)arg1 toDefaultPort:(_Bool)arg2;
- (void)setHttpReportAddress:(id)arg1;
- (void)setUserReportAddress:(id)arg1;
- (void)srvResolver:(id)arg1 didReceiveResult:(id)arg2;
- (void)srvResolver:(id)arg1 didStopWithError:(id)arg2;
- (void)stop;
@property(readonly, retain, nonatomic) NSString *userReportAddress; // @dynamic userReportAddress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
