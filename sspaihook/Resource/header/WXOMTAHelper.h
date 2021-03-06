//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WXOMTAEnv, WXOMTAUser;

@interface WXOMTAHelper : NSObject
{
    WXOMTAEnv *env;
    WXOMTAUser *user;
    _Bool _MTAEnableFlag;
}

+ (void)ChiperRC4:(id)arg1;
+ (int)GUnzip:(id)arg1 Out:(id *)arg2;
+ (int)GZip:(id)arg1 Out:(id *)arg2;
+ (unsigned long long)currentIndex;
+ (id)getInstance;
+ (id)getMacAddress;
+ (id)getOpenUDID;
+ (_Bool)isJB;
+ (_Bool)isWiFiAvailable;
+ (id)md5encrypt:(id)arg1;
+ (void)saveOpenUDID:(id)arg1;
+ (void)setCurrentIndex:(unsigned long long)arg1;
@property _Bool MTAEnableFlag; // @synthesize MTAEnableFlag=_MTAEnableFlag;
- (_Bool)checkMTAEnable;
- (void)dealloc;
- (id)fetchSSIDInfo;
- (id)getEnv;
- (id)getJson:(id)arg1;
- (id)getMid;
- (id)getUser;
- (id)getXGDeviceToken;
- (id)init;
- (void)saveMid:(id)arg1;

@end

