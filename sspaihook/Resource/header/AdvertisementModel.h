//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, UIImage;

@interface AdvertisementModel : NSObject
{
    UIImage *_localImage;
    NSString *_title;
    NSString *_image;
    NSString *_image_id;
    NSString *_url;
    long long _type;
    NSString *_ID;
    NSString *_created_at;
    NSString *_etoron_image;
    NSString *_etoron_url;
    NSString *_etoron_click_type;
    NSArray *_impressions;
}

+ (void)loadModelWithUrlstr:(id)arg1 parameters:(id)arg2 Finished:(CDUnknownBlockType)arg3;
+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(copy, nonatomic) NSString *created_at; // @synthesize created_at=_created_at;
@property(copy, nonatomic) NSString *etoron_click_type; // @synthesize etoron_click_type=_etoron_click_type;
@property(copy, nonatomic) NSString *etoron_image; // @synthesize etoron_image=_etoron_image;
@property(copy, nonatomic) NSString *etoron_url; // @synthesize etoron_url=_etoron_url;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *image_id; // @synthesize image_id=_image_id;
@property(retain, nonatomic) NSArray *impressions; // @synthesize impressions=_impressions;
@property(retain, nonatomic) UIImage *localImage; // @synthesize localImage=_localImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;

@end

