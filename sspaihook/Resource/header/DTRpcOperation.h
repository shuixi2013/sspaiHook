//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTRpcBaseOperation.h"

@class DTRpcMethod, NSArray, NSMutableDictionary;

@interface DTRpcOperation : DTRpcBaseOperation
{
    double _startTime;
    DTRpcMethod *_method;
    NSArray *_params;
    id _resultObject;
    NSMutableDictionary *_userInfo;
}

- (void).cxx_destruct;
- (id)buildRequestDataWithMethod:(id)arg1 params:(id)arg2;
- (id)copy;
- (void)didFinish;
- (void)didStart;
- (id)initWithURL:(id)arg1 method:(id)arg2 params:(id)arg3;
- (id)initWithURL:(id)arg1 method:(id)arg2 params:(id)arg3 timeout:(double)arg4;
@property(retain, nonatomic) DTRpcMethod *method; // @synthesize method=_method;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(retain, nonatomic) id resultObject; // @synthesize resultObject=_resultObject;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)start;

@end

