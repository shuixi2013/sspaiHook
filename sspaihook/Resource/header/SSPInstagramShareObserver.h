//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIDocumentInteractionController;

@interface SSPInstagramShareObserver : NSObject
{
    _Bool _sent;
    UIDocumentInteractionController *_documentVC;
    NSString *_imagePath;
    NSString *_callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *callback; // @synthesize callback=_callback;
@property(retain, nonatomic) UIDocumentInteractionController *documentVC; // @synthesize documentVC=_documentVC;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(nonatomic) _Bool sent; // @synthesize sent=_sent;

@end

