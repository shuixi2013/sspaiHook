//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface GrowingNodeCompareNode : NSObject
{
    _Bool _pathEnd;
    NSString *_name;
    NSMutableDictionary *_childNodes;
}

- (void).cxx_destruct;
- (void)addSetNode:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *childNodes; // @synthesize childNodes=_childNodes;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)nodeForKey:(id)arg1;
@property(nonatomic) _Bool pathEnd; // @synthesize pathEnd=_pathEnd;

@end
