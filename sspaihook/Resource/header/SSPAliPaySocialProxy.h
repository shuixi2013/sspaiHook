//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMOBFPlugin.h"

@class NSMutableSet, NSString;

@interface SSPAliPaySocialProxy : NSObject <IMOBFPlugin>
{
    NSMutableSet *_shareCallbackSet;
}

- (void).cxx_destruct;
- (_Bool)canShare:(id)arg1 callback:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
- (id)init;
- (_Bool)isAPAppInstalled;
- (_Bool)isAPAppSupportOpenApi;
- (void)load:(id)arg1;
- (void)onReq:(id)arg1;
- (void)onResp:(id)arg1;
- (_Bool)registerApp:(id)arg1;
- (void)registerHandlerShareCallbackMethod;
- (void)registerSetupApp;
- (void)registerShareMethod;
@property(retain, nonatomic) NSMutableSet *shareCallbackSet; // @synthesize shareCallbackSet=_shareCallbackSet;
- (void)setupAppKey:(id)arg1;
- (void)unload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

