//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface MOBFImageService : NSObject
{
    NSMutableDictionary *_observerDict;
    NSMutableDictionary *_imageLoaderDict;
    NSString *_cachePath;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void)getImageWithURL:(id)arg1 observer:(id)arg2 onLoading:(CDUnknownBlockType)arg3 onResult:(CDUnknownBlockType)arg4 onFail:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) NSMutableDictionary *imageLoaderDict; // @synthesize imageLoaderDict=_imageLoaderDict;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *observerDict; // @synthesize observerDict=_observerDict;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forURL:(id)arg2;

@end
