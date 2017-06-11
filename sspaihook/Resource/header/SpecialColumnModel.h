//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UserModel;

@interface SpecialColumnModel : NSObject
{
    NSString *_title;
    NSString *_request_reason;
    NSString *_banner;
    NSString *_banner_id;
    NSString *_ID;
    NSString *_created_at;
    NSString *_released_at;
    NSString *_status;
    NSString *_reject_reason;
    NSString *_deleted_at;
    NSString *_followed;
    NSString *_articles_count;
    NSString *_views_count;
    NSString *_followers_count;
    UserModel *_author;
    UserModel *_editors;
    NSString *_intro;
}

+ (void)loadModelWithParameters:(id)arg1 Finished:(CDUnknownBlockType)arg2;
+ (id)modelCustomPropertyMapper;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(copy, nonatomic) NSString *articles_count; // @synthesize articles_count=_articles_count;
@property(retain, nonatomic) UserModel *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *banner; // @synthesize banner=_banner;
@property(copy, nonatomic) NSString *banner_id; // @synthesize banner_id=_banner_id;
@property(copy, nonatomic) NSString *created_at; // @synthesize created_at=_created_at;
@property(copy, nonatomic) NSString *deleted_at; // @synthesize deleted_at=_deleted_at;
@property(retain, nonatomic) UserModel *editors; // @synthesize editors=_editors;
@property(copy, nonatomic) NSString *followed; // @synthesize followed=_followed;
@property(copy, nonatomic) NSString *followers_count; // @synthesize followers_count=_followers_count;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(copy, nonatomic) NSString *reject_reason; // @synthesize reject_reason=_reject_reason;
@property(copy, nonatomic) NSString *released_at; // @synthesize released_at=_released_at;
@property(copy, nonatomic) NSString *request_reason; // @synthesize request_reason=_request_reason;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *views_count; // @synthesize views_count=_views_count;

@end
