//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBBaseRequest.h"

@class NSArray, NSString;

@interface WBSDKAppRecommendRequest : WBBaseRequest
{
    NSArray *_uids;
    NSString *_access_token;
}

+ (id)requestWithUIDs:(id)arg1 access_token:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *access_token; // @synthesize access_token=_access_token;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;
- (_Bool)canHandleByWeiboClientApp;
- (id)init;
@property(retain, nonatomic) NSArray *uids; // @synthesize uids=_uids;

@end

