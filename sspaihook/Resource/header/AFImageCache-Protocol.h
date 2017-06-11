//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol AFImageCache <NSObject>
- (void)addImage:(UIImage *)arg1 withIdentifier:(NSString *)arg2;
- (UIImage *)imageWithIdentifier:(NSString *)arg1;
- (_Bool)removeAllImages;
- (_Bool)removeImageWithIdentifier:(NSString *)arg1;
@end
