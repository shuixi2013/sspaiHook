//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSTimer;

@interface SSDKLogService : NSObject
{
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSObject<OS_dispatch_queue> *_sendQueue;
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
    NSObject<OS_dispatch_semaphore> *_sendSemaphore;
    _Bool _enabledSendLog;
    _Bool _checkNeedSendImmediately;
    NSMutableArray *_data;
    NSMutableArray *_sendData;
    NSTimer *_sendTimer;
    double _lastSendImmediatelyTime;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addLogContent:(id)arg1;
- (void)applicationCrash:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
@property(nonatomic) _Bool checkNeedSendImmediately; // @synthesize checkNeedSendImmediately=_checkNeedSendImmediately;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
- (void)dealloc;
@property(nonatomic) _Bool enabledSendLog; // @synthesize enabledSendLog=_enabledSendLog;
- (id)init;
@property(nonatomic) double lastSendImmediatelyTime; // @synthesize lastSendImmediatelyTime=_lastSendImmediatelyTime;
- (void)lockData;
- (void)lockSend;
- (void)prepareSendLog;
- (void)sendApiLog:(unsigned long long)arg1 api:(id)arg2;
- (void)sendAuthLog:(id)arg1;
@property(retain, nonatomic) NSMutableArray *sendData; // @synthesize sendData=_sendData;
- (void)sendEventLog:(id)arg1 eventTarget:(id)arg2 eventParams:(id)arg3;
- (void)sendExitLog;
- (void)sendLog;
- (void)sendRunLog;
- (void)sendShareLog:(unsigned long long)arg1 contentEntity:(id)arg2 user:(id)arg3 target:(id)arg4;
@property(retain, nonatomic) NSTimer *sendTimer; // @synthesize sendTimer=_sendTimer;
- (void)startup;
- (void)unlockData;
- (void)unlockSend;

@end

