//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GrowingBaseModel.h"

@class NSString;

@interface GrowingLoginModel : GrowingBaseModel
{
    _Bool _isLogingIn;
    _Bool _remindMe;
    NSString *_token;
    NSString *_userId;
    NSString *_refreshToken;
    NSString *_loginToken;
}

- (void).cxx_destruct;
- (id)init;
- (_Bool)isLogin;
@property(nonatomic) _Bool isLogingIn; // @synthesize isLogingIn=_isLogingIn;
- (void)loginByUserId:(id)arg1 password:(id)arg2 succeed:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) NSString *loginToken; // @synthesize loginToken=_loginToken;
- (void)loginWithLoginToken:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)loginWithToken:(id)arg1;
- (void)loginWithToken:(id)arg1 andUserId:(id)arg2;
- (void)loginWithURL:(id)arg1 parameters:(id)arg2 succeed:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
- (void)logout;
- (void)refreshLoginToken:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(nonatomic) _Bool remindMe; // @synthesize remindMe=_remindMe;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (id)tokenKey;

@end

