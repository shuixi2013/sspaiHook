//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BTNWebViewSheetController;

@protocol BTNWebViewSheetDelegate <NSObject>
- (void)webViewSheet:(BTNWebViewSheetController *)arg1 didChangePreference:(_Bool)arg2;
- (void)webViewSheetDidSelectAppAction:(BTNWebViewSheetController *)arg1;
- (void)webViewSheetDidSelectDismissAction:(BTNWebViewSheetController *)arg1;
- (void)webViewSheetDidSelectWebAction:(BTNWebViewSheetController *)arg1;
@end

