//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UMANBaseEvent.h"

@class NSMutableArray;

@interface UMANTerminate : UMANBaseEvent
{
    double _duration;
    NSMutableArray *_pageViews;
    double _latitude;
    double _longitude;
    long long _gps_time;
}

- (id)attributes;
- (void)dealloc;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) long long gps_time; // @synthesize gps_time=_gps_time;
- (_Bool)hasGPSInfo;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDuration:(double)arg1;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
- (void)outputUMLog;
@property(retain, nonatomic) NSMutableArray *pageViews; // @synthesize pageViews=_pageViews;

@end
