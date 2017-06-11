//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UMANUtil : NSObject
{
}

+ (id)JSONFragment:(id)arg1;
+ (id)JSONValue:(id)arg1;
+ (id)accessString;
+ (id)accessSubType;
+ (id)appDisplayNameString;
+ (id)appPackageNameString;
+ (id)appPirateString;
+ (id)appShortVersionString;
+ (id)appVersionString;
+ (id)bytesToHexString:(char *)arg1 length:(int)arg2;
+ (id)carrierString;
+ (id)countryString;
+ (id)dateString;
+ (id)deflatedData:(id)arg1;
+ (id)deflatedDataPrefixedWith:(id)arg1 level:(int)arg2 source:(id)arg3;
+ (id)deviceJailBreakString;
+ (id)deviceMacAddressString;
+ (id)deviceModelString;
+ (id)getString:(id)arg1 bytesLength:(int)arg2;
+ (id)idfa;
+ (id)idfv;
+ (_Bool)isAppPirate;
+ (_Bool)isDebugging;
+ (_Bool)isDeviceJailBreak;
+ (_Bool)isEmptyString:(id)arg1;
+ (_Bool)isOverSeas;
+ (_Bool)isPad;
+ (id)languageString;
+ (id)mccString;
+ (id)md5:(id)arg1;
+ (char *)md5BytesWithString:(id)arg1;
+ (id)md5DataWithData:(id)arg1;
+ (id)mncString;
+ (id)openUDIDString;
+ (id)osString;
+ (id)osVersionString;
+ (int)resolutionHeight;
+ (id)resolutionString;
+ (int)resolutionWidth;
+ (id)returnCheck:(id)arg1;
+ (id)sdkTypeString;
+ (id)sdkVersionString;
+ (id)sessionId;
+ (id)timeString;
+ (int)timezone;
+ (id)timezoneString;
+ (id)urlEncode:(id)arg1;
+ (id)utdid;

@end
