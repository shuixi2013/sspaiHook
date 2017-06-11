//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, UINavigationBar, UIWebView, UPWebViewJavaScriptBridge;

@interface UPWebController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate>
{
    UPWebViewJavaScriptBridge *_bridge;
    UIWebView *_webView;
    UINavigationBar *_naviBar;
    _Bool _subPage;
    id <UPWebPayDelegate> _delegate;
    NSString *_startPage;
    NSString *_displayTitle;
}

+ (double)displayHeight;
+ (double)displayWidth;
+ (double)rotatedHeight;
+ (double)rotatedOffset;
+ (double)rotatedWidth;
- (void).cxx_destruct;
- (void)addBackBtn;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)btnClosePressed:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <UPWebPayDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
- (void)loadWebPage;
- (void)onBackEnable:(id)arg1;
- (void)onClosePage;
- (_Bool)openNewPage:(id)arg1;
- (void)payResult:(id)arg1 error:(id *)arg2;
- (void)registerForWebMessage;
- (void)rotateCustomNavigationBarBackground;
- (void)setCustomNavigationBarBackground;
@property(copy, nonatomic) NSString *startPage; // @synthesize startPage=_startPage;
@property(nonatomic) _Bool subPage; // @synthesize subPage=_subPage;
- (void)setupNavigationBar;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
