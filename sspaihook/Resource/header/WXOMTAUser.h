//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WXOMTAUser : NSObject
{
    int _userType;
    unsigned int _tagTime;
    NSString *_uid;
    NSString *_appVer;
}

@property(retain, nonatomic) NSString *appVer; // @synthesize appVer=_appVer;
- (void)dealloc;
@property unsigned int tagTime; // @synthesize tagTime=_tagTime;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property int userType; // @synthesize userType=_userType;

@end

