//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ISSDKAuthView.h"
#import "UIWebViewDelegate.h"

@class NSString, NSURL, SSDKAuthSession, UIWebView;

@interface SSDKAuthView : UIView <UIWebViewDelegate, ISSDKAuthView>
{
    NSURL *_authUrl;
    NSString *_callbackUrl;
    SSDKAuthSession *_session;
    UIWebView *_webView;
    CDUnknownBlockType _stateChangedHandler;
    CDUnknownBlockType _rawStateChangedHandelr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *authUrl; // @synthesize authUrl=_authUrl;
@property(retain, nonatomic) NSString *callbackUrl; // @synthesize callbackUrl=_callbackUrl;
- (void)cancel;
- (void)dealloc;
- (id)initWithAuthUrl:(id)arg1 callbackUrl:(id)arg2 session:(id)arg3;
- (id)initWithSession:(id)arg1 userData:(id)arg2;
- (void)onAuthStateChanged:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType rawStateChangedHandelr; // @synthesize rawStateChangedHandelr=_rawStateChangedHandelr;
@property(nonatomic) __weak SSDKAuthSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
