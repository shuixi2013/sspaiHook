//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBBaseRequest.h"

@class NSString;

@interface WBAuthorizeRequest : WBBaseRequest
{
    _Bool _shouldShowWebViewForAuthIfCannotSSO;
    NSString *redirectURI;
    NSString *scope;
}

+ (Class)associateResponseClass;
- (void).cxx_destruct;
- (_Bool)canBeReceived;
- (_Bool)canBeSent;
- (id)init;
- (void)loadFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *redirectURI; // @synthesize redirectURI;
@property(retain, nonatomic) NSString *scope; // @synthesize scope;
@property(nonatomic) _Bool shouldShowWebViewForAuthIfCannotSSO; // @synthesize shouldShowWebViewForAuthIfCannotSSO=_shouldShowWebViewForAuthIfCannotSSO;
- (void)storeToDictionary:(id)arg1;
- (id)validate;

@end

