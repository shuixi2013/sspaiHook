//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GrowingElement, GrowingImageCacheImage, NSString;

@interface GrowingChildContentPanelItem : NSObject
{
    GrowingElement *_element;
    GrowingImageCacheImage *_cacheImage;
    NSString *_name;
    long long _style;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GrowingImageCacheImage *cacheImage; // @synthesize cacheImage=_cacheImage;
@property(retain, nonatomic) GrowingElement *element; // @synthesize element=_element;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long style; // @synthesize style=_style;

@end

